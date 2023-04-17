// Zeke White
// zewtxv@umsytem.edu
//
#include "Q2.h"
#include <iostream>

using namespace std;

    // Constructor
    Queue::Queue() : front(nullptr), rear(nullptr), size(0) {}

    // Destructor
    Queue::~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // Function to insert a new element at the rear of the queue
    void Queue::enqueue(int data) {
        Node* newNode = new Node(data);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    // Function to remove the front element of the queue and return it
    int Queue::dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1; // Return a sentinel value to indicate error
        }
        Node* temp = front;
        int data = temp->data;
        front = front->next;
        delete temp;
        size--;
        return data;
    }

    // Function to return the front element present in the queue without removing it
    int Queue::peek() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot peek." << endl;
            return -1; // Return a sentinel value to indicate error
        }
        return front->data;
    }

    // Function to check if the queue is empty
    bool Queue::isEmpty() {
        return front == nullptr;
    }

    // Function to return the total number of elements present in the queue
    int Queue::getSize() {
        return size;
    };