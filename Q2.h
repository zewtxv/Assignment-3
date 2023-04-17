// Zeke White
// zewtxv@umsytem.edu
//
#ifndef ASSIGNMENT_3_Q2_H
#define ASSIGNMENT_3_Q2_H

//Class Creation
class Queue {
private:
    //Node structure
    struct Node {
        int data;
        Node * next;
        Node(int data) : data(data), next(nullptr) {}
    };
    //Private Data Values
    Node * front;
    Node * rear;
    int size;

public:
    Queue();
    //Instantiate

    ~Queue();
    //Destructor

    void enqueue(int data);
    //Add to the back of the queue

    int dequeue();
    //Removes first value in queue

    int peek();
    //If the queue isn't empty, this will print the value at the front ( should be a number as this functions is made to
    //return integer values.

    bool isEmpty();
    //Check if there is nothing in the queue

    int getSize();
    //Returns the number of elements currently present in the queue.
};
#endif //ASSIGNMENT_3_Q2_H
