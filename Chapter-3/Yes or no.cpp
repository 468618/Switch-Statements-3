#include <iostream>
using namespace std;
int main() {
    cout << "Would you like to continue? (Y/N): "; //ask for input
    char val;//variable for user answer;
    cin>>val;//get user input

    switch (toupper(val)) { //evaluate expression
        case 'Y': //case for Y
           cout<<"You entered yes";//cout message if user enters Y
           break; //break to end case
        case 'N': //case for N
             cout<<"You entered no";//cout message if user enters N
            break;
        default: //default case
           cout<<"Please enter incorrect letter"; //default message if neither Y or N entered
    }		

}
