// #include <iostream>
// using namespace std;

// class Library{
// protected:
//     string bookname;
//     string authorname;
//     int bookid;
//     bool isIssued;

// public:
//     Library(){
//         this->bookname = "";
//         this->bookid = 0;
//         this->authorname = "";
//         this->isIssued = false;
//     }
//     void addBook(string bookname, string authorname, int bookid){
//         this->bookname = bookname;
//         this->authorname = authorname;
//         this->bookid = bookid;
//         this->isIssued = false;
//         cout << "Book added successfully!" << endl;
//         cout << ">> =============== << " << endl;
//     }
//     void bookDetails(){
//         cout << "<< ============ >>" << endl;
//         cout << "Book Id : " << this->bookid << endl;
//         cout << "Book Name : " << this->bookname << endl;
//         cout << "Author Name : " << this->authorname << endl;
//         cout << "Is Issued : " << (this->isIssued ? "Yes" : "No") << endl;
//         cout << "<< ============ >>" << endl;
//     }
//     bool getIssuedStatus(){
//         return this->isIssued;
//     }
//     int getBookId(){
//         return this->bookid;
//     }
// };

// class Book : public Library{
// protected:
//     string issuername, issuedate;
//     string returnername, returndate;
// public:
//     void issuedto(string issuername, string issuedate, int bookid){
//         this->isIssued = true;
//         this->issuername = issuername;
//         this->issuedate = issuedate;

//         cout << "<<========================>>" << endl;
//         cout << "Book Id : " << this->bookid << endl;
//         cout << "Book Issued to " << this->issuername << " on " << this->issuedate << endl;
//         cout << "<< ======================== >>" << endl;
//     };

//     void returnBook(string returnername, string returndate, int bookid){
//         this->isIssued = false;
//         this->returnername = returnername;
//         this->returndate = returndate;

//         cout << "<< ======================== >>" << endl;
//         cout << "Book Id : " << this->bookid << endl;
//         cout << "Book returned by " << this->returnername << " on " << this->returndate << endl;
//         cout << "<< ======================== >>" << endl;
//     };
// };

// int main(){
//     Book book[10];
//     int choice, count = 0;

//     do {
//         cout << "=======================" << endl;
//         cout << "Welcome to our Library" << endl;
//         cout << "=======================" << endl;
//         cout << "1. Add Book" << endl;
//         cout << "2. To Issue Book" << endl;
//         cout << "3. To Return Book" << endl;
//         cout << "4. To Search Book" << endl;
//         cout << "5. To View All Books" << endl;
//         cout << "6. To Exit" << endl;
//         cout << "Enter your choice : ";
//         cin >> choice;

//         switch (choice){
//         case 1: {
//             string bookname, authorname;
//             int bookid;
//             cout << ">> =============== << " << endl;
//             cout << "Enter Book ID : ";
//             cin >> bookid;
//             cin.ignore();
//             cout << "Enter Book Name : ";
//             getline(cin, bookname);
//             cout << "Enter Author Name : ";
//             getline(cin, authorname);
//             book[count].addBook(bookname, authorname, bookid);
//             count++;
//             break;
//         }
//         case 2: {
//             string issuername, issuedate;
//             int bookid;
//             cout << "Enter Book ID : ";
//             cin >> bookid;
//             cin.ignore(); // Added to fix getline skipping

//             bool flag = false;
//             for (int i = 0; i < count; i++) {
//                 if (book[i].getBookId() == bookid) {
//                     flag = true;
//                     cout << "Enter Issuer Name : ";
//                     getline(cin, issuername);
//                     cout << "Enter Issue Date : ";
//                     getline(cin, issuedate);
//                     book[i].issuedto(issuername, issuedate, bookid);
//                 }
//             }
//             if (!flag) {
//                 cout << "Book ID not found!" << endl;
//             }
//             break;
//         }
//         case 3: {
//             int bookid;
//             string returnername, returndate;
//             cout << "Enter Book ID : ";
//             cin >> bookid;
//             cin.ignore(); // Added to fix getline skipping

//             bool flag = false;
//             for (int i = 0; i < count; i++) {
//                 if (book[i].getBookId() == bookid) {
//                     flag = true;
//                     if (book[i].getIssuedStatus()) {
//                         cout << "Enter Returner Name : ";
//                         getline(cin, returnername);
//                         cout << "Enter Return Date : ";
//                         getline(cin, returndate);
//                         book[i].returnBook(returnername, returndate, bookid);
//                     } else {
//                         cout << "Book is not issued!" << endl;
//                     }
//                 }
//             }
//             if (!flag) {
//                 cout << "Book ID not found!" << endl;
//             }
//             break;
//         }
//         case 4: {
//             int bookid;
//             cout << "Enter Book ID : ";
//             cin >> bookid;
//             bool flag = false;
//             for (int i = 0; i < count; i++) {
//                 if (book[i].getBookId() == bookid) {
//                     flag = true;
//                     book[i].bookDetails();
//                 }
//             }
//             if (!flag) {
//                 cout << "Book ID not found!" << endl;
//             }
//             break;
//         }
//         case 5: {
//             cout << "=======================" << endl;
//             for (int i = 0; i < count; i++) {
//                 book[i].bookDetails();
//                 cout << "=======================" << endl;
//             }
//             break;
//         }
//         case 6: {
//             cout << "==== Thank you for using our Library ====" << endl;
//             break;
//         }
//         default:
//             cout << "Invalid choice!" << endl;
//             break;
//         }
//     } while (choice != 6);

//     return 0;
// }
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>

using namespace std;

class Book {
public:
    int bookid;
    string bookname;
    string authorname;
    bool isIssued;
    string issuername;
    string issuedate;
    string returnername;
    string returndate;

    Book() {
        bookid = 0;
        bookname = "";
        authorname = "";
        isIssued = false;
        issuername = "";
        issuedate = "";
        returnername = "";
        returndate = "";
    }

    void displayDetails() {
        cout << "Book Id: " << bookid << endl;
        cout << "Book Name: " << bookname << endl;
        cout << "Author Name: " << authorname << endl;
        cout << "Is Issued: " << (isIssued ? "Yes" : "No") << endl;
        if (isIssued) {
            cout << "Issued To: " << issuername << endl;
            cout << "Issue Date: " << issuedate << endl;
        }
        if (!returndate.empty()) {
            cout << "Returned By: " << returnername << endl;
            cout << "Return Date: " << returndate << endl;
        }
        cout << "-----------------------------" << endl;
    }
};

// Function to get current date as YYYY-MM-DD string
string getCurrentDate() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    char dateStr[11];
    snprintf(dateStr, sizeof(dateStr), "%04d-%02d-%02d", 
             1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);
    return string(dateStr);
}

// Load books from CSV file
void loadBooks(vector<Book> &books, const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) return; // file not found, start fresh

    string line;
    getline(file, line); // skip header

    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        Book b;

        // Read CSV line, assuming format:
        // bookid,bookname,authorname,isIssued,issuername,issuedate,returnername,returndate
        getline(ss, token, ','); b.bookid = stoi(token);
        getline(ss, b.bookname, ',');
        getline(ss, b.authorname, ',');
        getline(ss, token, ','); b.isIssued = (token == "Yes");
        getline(ss, b.issuername, ',');
        getline(ss, b.issuedate, ',');
        getline(ss, b.returnername, ',');
        getline(ss, b.returndate, ',');

        books.push_back(b);
    }
    file.close();
}

// Save all books to CSV file (overwrite)
void saveBooks(const vector<Book> &books, const string &filename) {
    ofstream file(filename);
    // Write header
    file << "BookID,BookName,AuthorName,IsIssued,IssuerName,IssueDate,ReturnerName,ReturnDate\n";

    for (const auto &b : books) {
        file << b.bookid << ","
             << b.bookname << ","
             << b.authorname << ","
             << (b.isIssued ? "Yes" : "No") << ","
             << b.issuername << ","
             << b.issuedate << ","
             << b.returnername << ","
             << b.returndate << "\n";
    }
    file.close();
}

int main() {
    vector<Book> books;
    string filename = "library.csv";

    // Load existing books from file
    loadBooks(books, filename);

    int choice;
    do {
        cout << "\n===== Library Menu =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Issue Book" << endl;
        cout << "3. Return Book" << endl;
        cout << "4. Search Book by ID" << endl;
        cout << "5. View All Books" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Book newBook;
            cout << "Enter Book ID: ";
            cin >> newBook.bookid;
            cin.ignore();
            cout << "Enter Book Name: ";
            getline(cin, newBook.bookname);
            cout << "Enter Author Name: ";
            getline(cin, newBook.authorname);
            newBook.isIssued = false;
            newBook.issuername = "";
            newBook.issuedate = "";
            newBook.returnername = "";
            newBook.returndate = "";

            // Check if book id already exists
            bool exists = false;
            for (auto &b : books) {
                if (b.bookid == newBook.bookid) {
                    cout << "Book ID already exists! Cannot add." << endl;
                    exists = true;
                    break;
                }
            }
            if (!exists) {
                books.push_back(newBook);
                saveBooks(books, filename);
                cout << "Book added successfully!" << endl;
            }

        } else if (choice == 2) {
            int id;
            cout << "Enter Book ID to Issue: ";
            cin >> id;
            cin.ignore();

            bool found = false;
            for (auto &b : books) {
                if (b.bookid == id) {
                    found = true;
                    if (b.isIssued) {
                        cout << "Book is already issued to " << b.issuername << " on " << b.issuedate << endl;
                    } else {
                        cout << "Enter Issuer Name: ";
                        getline(cin, b.issuername);
                        b.isIssued = true;
                        b.issuedate = getCurrentDate();
                        b.returnername = "";
                        b.returndate = "";
                        saveBooks(books, filename);
                        cout << "Book issued successfully on " << b.issuedate << endl;
                    }
                    break;
                }
            }
            if (!found) {
                cout << "Book ID not found!" << endl;
            }

        } else if (choice == 3) {
            int id;
            cout << "Enter Book ID to Return: ";
            cin >> id;
            cin.ignore();

            bool found = false;
            for (auto &b : books) {
                if (b.bookid == id) {
                    found = true;
                    if (!b.isIssued) {
                        cout << "Book is not issued currently." << endl;
                    } else {
                        cout << "Enter Returner Name: ";
                        getline(cin, b.returnername);
                        b.isIssued = false;
                        b.returndate = getCurrentDate();
                        saveBooks(books, filename);
                        cout << "Book returned successfully on " << b.returndate << endl;
                    }
                    break;
                }
            }
            if (!found) {
                cout << "Book ID not found!" << endl;
            }

        } else if (choice == 4) {
            int id;
            cout << "Enter Book ID to Search: ";
            cin >> id;
            cin.ignore();

            bool found = false;
            for (auto &b : books) {
                if (b.bookid == id) {
                    found = true;
                    b.displayDetails();
                    break;
                }
            }
            if (!found) {
                cout << "Book ID not found!" << endl;
            }

        } else if (choice == 5) {
            if (books.empty()) {
                cout << "No books in library." << endl;
            } else {
                for (auto &b : books) {
                    b.displayDetails();
                }
            }
        } else if (choice == 6) {
            cout << "Thank you for using the Library system." << endl;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
