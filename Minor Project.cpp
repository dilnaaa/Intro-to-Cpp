#include <iostream>

using namespace std;

 int main () {
    char Operator; 
    int numOne ,numTwo;
    
    cout << "     ### Calculator ###            \n";
    cout << "Please select the operation: \n";
    cout << "A for Addition \n";
    cout << "S for Subtraction \n";
    cout << "M for Multiplication \n";
    cout << "D for Division \n"; 
    cin>>Operator;
     
     
     cout<<"Enter any two numbers : ";
     cin>>numOne>>numTwo;
    
    
    switch(Operator) {
        case 'A':
        cout<<"You have selected Addition operation. \n";
        cout<<"Result is :"<<numOne+numTwo;
        break;
        
        case 'S':
        cout<<"You have selected Subtraction operation. \n";
        cout<<"Result is :"<<numOne-numTwo;
        break;
        
        case 'M':
        cout<<"You have selected Multiplication operation. \n";
        cout<<"Result is :"<<numOne*numTwo;
        break;
        
        case 'D':
        cout<<"You have selected Division operation. \n";
        cout<<"Result is :"<<numOne/numTwo;
        break;
        
        default:
        cout<<"Oops,Invalid operation!! \n";
        break;
        
         
    }
    
    return 0;
    
    
 }
    
