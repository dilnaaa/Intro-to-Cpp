#include <iostream>
using namespace std;

int main () {
    cout <<"        ##### CALCULATOR #####       \n";
    cout <<"     ********     MENU      *******    \n";
    cout << "Please select your operation to be implemented:  \n";
    cout << "Enter:-  \n";
    cout << "A for Addition; \n";
    cout << "S for Subtraction; \n";
    cout << "M for Multiplication; \n";
    cout << "D for Division. \n";
    cout << "Letter of operator to be implemented: ";
    char Operator;
    cin >> Operator;
    float num1, num2;
    cout << "Enter two numbers to implement this operation:  \n";
    cout << "1st number -  ";
    cin >> num1;
    cout << "2nd number -  ";
    cin >> num2;
   
 switch (Operator) {
        case 'A':
        cout << "You have selected the Addition operation. \n";
        cout << "Result is : " << num1 + num2 << ". \n";
        break;
        
        case 'S':
        cout << "You have selected the Subtraction operation. \n";
        cout << "Result is: " << num1 - num2 << ". \n";
        break;
        
        case 'M':
        cout << "You have selected the Multiplication operation. \n";
        cout << "Result is : " << num1 * num2 << ". \n";
        break;
        
        case 'D':
        cout << "You have selected the Division operation. \n";
        cout << "Result is : " << num1 / num2 << ".  \n";
        break;
   
        default:
        cout << "Oops! An invalid operator. Try again.";
    }
        return 0;
    
    }
