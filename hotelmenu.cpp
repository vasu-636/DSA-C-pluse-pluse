#include <iostream>
using namespace std;
int main(){

    int choice,choiceGuj,choicePun,choiceSouth,choiceSweet,Gujquan,Punquan,Southquan,Sweetquan,bill ;
    cout << "WELCOME TO OUR HOTEL" << endl;
    choice : 
    cout << " Choose 1 if you want to eat Gujarati . "     << endl; 
    cout << " Choose 2 if you want to eat Punjabi . "      << endl;
    cout << " Choose 3 if you want to eat South Indian . " << endl;    
    cout << " Choose 4 if you want to eat Sweet Dishes . " << endl;  
    cout << " Choose 5 to exit ." << endl ;
    
    cout << "Enter your choice from menu :";
    cin >> choice;
    switch(choice){
        case 1:
            choiceGuj:
            cout << "You enterd into Gujarati Menu" << endl;
            cout << "1...... Sev Tameta     $20" << endl;
            cout << "2...... Thepla         $10" << endl;
            cout << "3...... Fafda          $20" << endl;
            cout << "Enter your chaoice :" ;
            cin >> choiceGuj;
            switch (choiceGuj)
            {
            case 1:
                cout << "You have ordred Sev Tamatar. " << endl;
                cout << "How much quantity you want : " ;
                cin >> Gujquan;
                bill = 20 * Gujquan ;
                cout << "Our bill is $" << bill << " only !" << endl;
                cout << "Thanks For Visiting." << endl;
                
            break;
            case 2:
                cout << "You have ordred Thepla. " << endl;
                cout << "How much quantity you want : " ;
                cin >> Gujquan;
                bill = 10 * Gujquan ;
                cout << "Our bill is $" << bill << " only !" << endl;
                cout << "Thanks For Visiting." << endl;
                
            break;
            case 3:
                cout << "You have ordred Fafda. " << endl;
                cout << "How much quantity you want : " ;
                cin >> Gujquan;
                bill = 20 * Gujquan ;
                cout << "Our bill is $" << bill << " only !" << endl;
                cout << "Thanks For Visiting." << endl;
                
            break;
            }
            goto choice ;
        break;
        case 2:
            cout << "You have entered into Punjabi Menu" << endl;
            cout << "1...... Shahi Panner     $40" << endl;
            cout << "2...... Panner Tikka     $30" << endl;
            cout << "3...... Chhap            $20" << endl;
            cout << "Enter your choice :";
            cin >> choicePun;
            switch(choicePun){
                case 1: 
                    cout << "You want to order Shahi Panner." << endl;
                    cout << "How much quantity you want : ";
                    cin >> Punquan;
                    bill = 40 * Punquan ; 
                    cout << "Our bill is $" << bill << " only !" << endl;
                    cout << "Thaks for visiting Us." << endl;
                break;
                case 2: 
                    cout << "You want to order Panner Tikka ." << endl;
                    cout << "How much quantity you want : ";
                    cin >> Punquan;
                    bill = 30 * Punquan ; 
                    cout << "Our bill is $" << bill << " only !" << endl;
                    cout << "Thaks for visiting Us." << endl;
                break;
                case 3: 
                    cout << "You want to order Chapp." << endl;
                    cout << "How much quantity you want : ";
                    cin >> Punquan;
                    bill = 20 * Punquan ; 
                    cout << "Our bill is $" << bill << " only !" << endl;
                    cout << "Thaks for visiting Us." << endl;
                 break;
            }

            goto choice;
        break;
        case 3:
            cout << "You entered in to South Indian Menu ." << endl;
            cout << "1...... Idli            $10" << endl;
            cout << "2...... Vada            $10" << endl;
            cout << "3...... Dhosa           $15" << endl;
            cout << "Enter your choice :" ;
            cin >> choiceSouth;
            switch(choiceSouth){
                case 1: 
                    cout << "You want to eat Idli." << endl;
                    cout << "How much quantity do you want :";
                    cin >> Southquan;
                    bill = 10 * Southquan ;
                    cout << "Your Bill is $" << bill << " only !" << endl;
                    cout << "Thanks For visiting Us." << endl;
                break;
                case 2: 
                    cout << "You want to eat Vada." << endl;
                    cout << "How much quantity do you want :";
                    cin >> Southquan;
                    bill = 10 * Southquan ;
                    cout << "Your Bill is $" << bill << " only !" << endl;
                    cout << "Thanks For visiting Us." << endl;
                break;
                case 3: 
                    cout << "You want to eat Dhosa." << endl;
                    cout << "How much quantity do you want :";
                    cin >> Southquan;
                    bill = 15 * Southquan ;
                    cout << "Your Bill is $" << bill << " only !" << endl;
                    cout << "Thanks For visiting Us." << endl;
                break;

            }

            goto choice;
        break;
        case 4:
            cout << "You want to eat sweets." << endl;
            cout << "1...... Gulab Jamun     $10" << endl;
            cout << "2...... Rabdi           $10" << endl;
            cout << "3...... Barfi           $10" << endl;
            cout << "Enter your choice :";
            cin >> choiceSweet;
            switch(choiceSweet){
                case 1:
                    cout << "You want to eat Gulag Jamun." << endl;
                    cout << "How much quantity do you want :";
                    cin >> Sweetquan;
                    bill = 10 * Sweetquan ;
                    cout << "Your Bill is $" << bill << " only !" << endl;
                    cout << "Thanks For visiting Us." << endl;
                break;
                case 2:
                    cout << "You want to eat Rabdi." << endl;
                    cout << "How much quantity do you want :";
                    cin >> Sweetquan;
                    bill = 10 * Sweetquan ;
                    cout << "Your Bill is $" << bill << " only !" << endl;
                    cout << "Thanks For visiting Us." << endl;
                break;
                case 3:
                    cout << "You want to eat Barfi." << endl;
                    cout << "How much quantity do you want :";
                    cin >> Sweetquan;
                    bill = 10 * Sweetquan ;
                    cout << "Your Bill is $" << bill << " only !" << endl;
                    cout << "Thanks For visiting Us." << endl;
                break;

            }

            goto choice;
        break;
        case 5:
            cout << "Thanks for visiting Us." << endl;
            exit(0);
        break;
            
    }
    return 0;
}