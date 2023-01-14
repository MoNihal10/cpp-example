#include <iostream>

using namespace std;

int main() {
    int choice;
    int first,second;
    cout << "***************** CALCULATOR *****************" << endl;
    cout << endl;
    while(true) {
        cout << "Here are your choices: " << endl
             << "1. Addition" << endl
             << "2. Subtraction" << endl
             << "3. Multiplication" << endl
             << "4. Division" << endl
             << "5. Quit Calculator"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice==5)
            break;
        cout<<"Enter first number: ";
        cin>>first;
        cout<<"Enter second number: ";
        cin>>second;
        if(choice==1)
            cout<<"Sum is "<<first+second<<endl;
        else if(choice==2)
            cout<<"Difference is "<<first-second<<endl;
        else if(choice==3)
            cout<<"Product is "<<first*second<<endl;
        else if(choice==4)
            cout<<"Quotient is "<<first/second<<endl;
        else
            cout<<"Invalid choice, Try Again!"<<endl;
    }



}
