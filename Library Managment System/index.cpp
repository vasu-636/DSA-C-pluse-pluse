#include <iostream>
using namespace std;

class Library{
protected:
    string bookname;
    string authorname;
    int bookid;
    bool isIssued;

public:
    Library(){
        this->bookname = "";
        this->bookid = 0;
        this->authorname = "";
        this->isIssued = false;
    }
    void addBook(string bookname, string authorname, int bookid){
        this->bookname = bookname;
        this->authorname = authorname;
        this->bookid = bookid;
        this->isIssued = false;
        cout << "Book added successfully!" << endl;
        cout << ">> =============== << " << endl;
    }
    void bookDetails(){
        cout << "<< ============ >>" << endl;
        cout << "Book Id : " << this->bookid << endl;
        cout << "Book Name : " << this->bookname << endl;
        cout << "Author Name : " << this->authorname << endl;
        cout << "Is Issued : " << (this->isIssued ? "Yes" : "No") << endl;
        cout << "<< ============ >>" << endl;
    }
    bool getIssuedStatus(){
        return this->isIssued;
    }
    int getBookId(){
        return this->bookid;
    }
};

class Book : public Library{
protected:
    string issuername, issuedate;
    string returnername, returndate;
public:
    void issuedto(string issuername, string issuedate, int bookid){
        this->isIssued = true;
        this->issuername = issuername;
        this->issuedate = issuedate;

        cout << "<<========================>>" << endl;
        cout << "Book Id : " << this->bookid << endl;
        cout << "Book Issued to " << this->issuername << " on " << this->issuedate << endl;
        cout << "<< ======================== >>" << endl;
    };

    void returnBook(string returnername, string returndate, int bookid){
        this->isIssued = false;
        this->returnername = returnername;
        this->returndate = returndate;

        cout << "<< ======================== >>" << endl;
        cout << "Book Id : " << this->bookid << endl;
        cout << "Book returned by " << this->returnername << " on " << this->returndate << endl;
        cout << "<< ======================== >>" << endl;
    };
};

int main(){
    Book book[10];
    int choice, count = 0;

    do {
        cout << "=======================" << endl;
        cout << "Welcome to our Library" << endl;
        cout << "=======================" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. To Issue Book" << endl;
        cout << "3. To Return Book" << endl;
        cout << "4. To Search Book" << endl;
        cout << "5. To View All Books" << endl;
        cout << "6. To Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice){
        case 1: {
            string bookname, authorname;
            int bookid;
            cout << ">> =============== << " << endl;
            cout << "Enter Book ID : ";
            cin >> bookid;
            cin.ignore();
            cout << "Enter Book Name : ";
            getline(cin, bookname);
            cout << "Enter Author Name : ";
            getline(cin, authorname);
            book[count].addBook(bookname, authorname, bookid);
            count++;
            break;
        }
        case 2: {
            string issuername, issuedate;
            int bookid;
            cout << "Enter Book ID : ";
            cin >> bookid;
            cin.ignore(); // Added to fix getline skipping

            bool flag = false;
            for (int i = 0; i < count; i++) {
                if (book[i].getBookId() == bookid) {
                    flag = true;
                    cout << "Enter Issuer Name : ";
                    getline(cin, issuername);
                    cout << "Enter Issue Date : ";
                    getline(cin, issuedate);
                    book[i].issuedto(issuername, issuedate, bookid);
                }
            }
            if (!flag) {
                cout << "Book ID not found!" << endl;
            }
            break;
        }
        case 3: {
            int bookid;
            string returnername, returndate;
            cout << "Enter Book ID : ";
            cin >> bookid;
            cin.ignore(); // Added to fix getline skipping

            bool flag = false;
            for (int i = 0; i < count; i++) {
                if (book[i].getBookId() == bookid) {
                    flag = true;
                    if (book[i].getIssuedStatus()) {
                        cout << "Enter Returner Name : ";
                        getline(cin, returnername);
                        cout << "Enter Return Date : ";
                        getline(cin, returndate);
                        book[i].returnBook(returnername, returndate, bookid);
                    } else {
                        cout << "Book is not issued!" << endl;
                    }
                }
            }
            if (!flag) {
                cout << "Book ID not found!" << endl;
            }
            break;
        }
        case 4: {
            int bookid;
            cout << "Enter Book ID : ";
            cin >> bookid;
            bool flag = false;
            for (int i = 0; i < count; i++) {
                if (book[i].getBookId() == bookid) {
                    flag = true;
                    book[i].bookDetails();
                }
            }
            if (!flag) {
                cout << "Book ID not found!" << endl;
            }
            break;
        }
        case 5: {
            cout << "=======================" << endl;
            for (int i = 0; i < count; i++) {
                book[i].bookDetails();
                cout << "=======================" << endl;
            }
            break;
        }
        case 6: {
            cout << "==== Thank you for using our Library ====" << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (choice != 6);

    return 0;
}
