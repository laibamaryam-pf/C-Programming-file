#include <iostream>
using namespace std;

int main() {
    int guess = 0;
    int sec_num = 21;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < 1 || guess > 100) 
		{
            cout << "Please enter a valid number between 1 and 100." << endl;
        } 
	     if (guess < sec_num) 
		{
            cout << "Too low! Try again." << endl;
        } 
		else if (guess > sec_num)
		 {
            cout << "Too high! Try again." << endl;
        } 
		else {
            cout << "Congratulations! You've guessed the number!" << endl;
        }
    } 
	while (guess != sec_num);

    return 0;
}