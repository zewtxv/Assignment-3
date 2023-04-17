// Zeke White
// zewtxv@umsytem.edu
//

#include "Q1.h"

int main() {
    //Getting User Input
    string userInput;
    cout << "Enter expression: ";
    cin >> userInput;

    if (balancedCheck(userInput)) {
        //this code only runs when input is validated by balancedCheck.
        string postfixVersion = infixToPostfix(userInput);
        cout << "Postfix version: " << postfixVersion << endl;
    } else {
        cout << "Invalid expression, parentheses are not balanced" << endl;
    }
    return 0;
}

