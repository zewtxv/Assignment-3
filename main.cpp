// Zeke White
// zewtxv@umsytem.edu
//
#include "Q1.h"
#include "Q2.h"
#include <iostream>

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


    Queue queue;

    // Insert elements into the queue
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << endl << endl << "---------------Q2---------------" << endl;

    // Printing the front element and size of the queue
    cout << "Front value: " << queue.peek() << endl;
    cout << "Size: " << queue.getSize() << endl;

    // Dequeue an element
    int dequeued = queue.dequeue();
    cout << "Dequeued element: " << dequeued << endl;

    // Reprinting the front element and size of the queue after the deque
    cout << "Reprint after dequeue" << endl;
    cout << "Front element: " << queue.peek() << endl;
    cout << "Size of queue: " << queue.getSize() << endl;

    return 0;
}

