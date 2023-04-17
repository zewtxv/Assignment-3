// Zeke White
// zewtxv@umsytem.edu
//
#include <iostream>
#include <stack>

using namespace std;

//Check if a character is an operator
bool isOperatorCheck(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%';
}

//Checks if a character is an opening parenthesis
bool openParenthesisCheck(char c) {
    return c == '(' || c == '{' || c == '[';
}

//Checks if a character is a closing parenthesis
bool closeParenthesisCheck(char c) {
    return c == ')' || c == '}' || c == ']';
}

// Function to check if two operators have the same precedence
bool hasSamePrecedence(char operatorOne, char operatorTwo) {
    if ((operatorOne == '*' || operatorOne == '/' || operatorOne == '%') &&
        (operatorTwo == '+' || operatorTwo == '-')) {
        return false;
    } else {
        return true;
    }
}

// Function to perform infix to postfix conversion
string infixToPostfix(string userInput) {
    stack<char> stack;
    string postfix = "";

    for (char c: userInput) {
        if (isOperatorCheck(c)) {
            while (!stack.empty() && stack.top() != '(' && stack.top() != '{' && stack.top() != '[' &&
                   hasSamePrecedence(stack.top(), c)) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(c);
        } else if (openParenthesisCheck(c)) {
            stack.push(c);
        } else if (closeParenthesisCheck(c)) {
            while (!stack.empty() && !openParenthesisCheck(stack.top())) {
                postfix += stack.top();
                stack.pop();
            }
            stack.pop();
        } else {
            postfix += c;
        }
    }

    while (!stack.empty()) {
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

// Function to perform balanced parentheses check
bool balancedCheck(string userInput) {
    stack<char> stackParenthesis;

    for (char c: userInput) {
        if (openParenthesisCheck(c)) {
            stackParenthesis.push(c);
        } else if (closeParenthesisCheck(c)) {
            if (stackParenthesis.empty()) {
                return false;
            } else if ((c == ')' && stackParenthesis.top() == '(') || (c == '}' && stackParenthesis.top() == '{') ||
                       (c == ']' && stackParenthesis.top() == '[')) {
                stackParenthesis.pop();
            } else {
                return false;
            }
        }
    }
    return stackParenthesis.empty();
}