#include <iostream>
#include <string>
using namespace std;

int main()
{
    // user input for password
    cout << "Enter Passcode" << endl;
    // actual password
    string password = "me";
    string userpw;
    cin >> userpw;
    
    // lambda function to check if the password entered is correct
    // capturing both passwords in capture claue
    auto checkPasscode = [userpw, &password](){
        if(userpw.compare(password)==0){
            cout << "Login Successful";
        }else{
            cout << "Incorrect password";
        }
    };
    checkPasscode();
}
