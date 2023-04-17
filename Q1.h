// Zeke White
// zewtxv@umsytem.edu
//
#ifndef ASSIGNMENT_3_Q1_H
#define ASSIGNMENT_3_Q1_H

#include <iostream>

using namespace std;

bool isOperatorCheck(char c);
//PRE: Takes in a char value and evaluates if it is one of the operator values in question.
//POST: Returns a true or false value based on the content of the char.

bool openParenthesisCheck(char c);
//PRE: Takes in a char value and evaluates if it is one of the opening parenthesis in question.
//POST: Returns a true or false value based on the content of the char.

bool closeParenthesisCheck(char c);
//PRE: Takes in a char value and evaluates if it is one of the closing parenthesis in question.
//POST: Returns a true or false value based on the content of the char.

bool hasSamePrecedence(char operatorOne, char operatorTwo);
//PRE: Takes in two char values to compare to each other to determine precedence.
//POST: returns a true or false based on the compared chars that were taken in.

string infixToPostfix(string userInput);
//PRE: Takes in validated user input expression.
//POST: Output Postfix version of user input to console.

bool balancedCheck(string userInput);
//PRE: Takes in a inFix expression and checks various versions of parenthesis to make sure they are all balanced
//     in the code.
//POST: Returns a true or false value based on the state of the parenthesis in the user input expression.


#endif //ASSIGNMENT_3_Q1_H
