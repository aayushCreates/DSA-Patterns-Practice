//  ----------------------------- QUEUE with PUSH, POP, TOP opertions in O(1) --------------------------------

#include<iostream>

using namespace std;

class queue {
    int rear;
    int front;
    int size = 0;
    int *q;

    queue(int size) {
        this->size = size;
        q = new int[size];
    }

    void push(int val) {
        if(rear >= size) {
            // OVERFLOW condition
        } else {
            rear++;
            q[rear] = val;
        }
    }

    void pop() {
        if(front == rear) {
            // UNDERFLOW condition
        }else {
            front++;
        }
    }

    int top() {
        if(front == rear) {
            // UNDERFLOW condition
        }else if(rear < size) {
            return q[rear];
        }else {
            return q[size - 1];
        }
    }

};