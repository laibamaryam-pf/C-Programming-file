#include <iostream>
 #include <string>
using namespace std;
int main() 
    {
    string correct_password = "laiba@123";
    string input_password; 
    int attempts = 0; 
    const int max_attempts = 3; 

    do {
        cout << "Enter your password: ";
        cin >> input_password; 
        attempts++; 

        if (input_password == correct_password) 
		{
            cout << "Access granted!" << endl;
            break; 
        } else 
		    {
            cout << "Incorrect password. Try again." << endl;
        }

    } 
	    while (attempts < max_attempts); 
	    {
        cout << "Too many attempts. Exiting the program." << endl;
    }
    return 0; 
}