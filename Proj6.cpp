// Enter email, username, password, confirmPassword

#include <iostream>
using namespace std;

int main ()
{
    string name,email,username, password, confirmPassword;

    cout << "Enter your full name: ";
    getline (cin, name);
    
    cout << "Enter your email: ";
    getline (cin, email);
    
    cout << "Enter your username: ";
    getline (cin, username);

    cout << "Enter your password: ";
    getline (cin, password);

    cout << "Enter your confirm password: ";
    getline (cin, confirmPassword);

    if (password == confirmPassword)
    {
        cout << "Registration Successful!\n";
        cout << "Welcome, " << name << "!\n";
    }
    else{
        cout << "Password does not match!\n";
    }
    return 0;
}