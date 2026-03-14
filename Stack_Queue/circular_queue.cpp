#include<iostream>

using namespace std;

class circular_queue {
    int rear = -1;
    int front = -1;
    int size;
    int *cq;

    circular_queue(int size) {
        this->size = size;
        cq = new int[size];
    }

    void push(int val) {
        if(front == 0 && rear == size - 1) {
            //  OVERFLOW condition
        }else if(front != 0 && rear == size - 1) {
            rear = 0;
            cq[rear] = val;
        }else if(front == -1 && rear == -1) {
            rear++;
            front++;
            cq[rear] = val;
        }else {
            rear++;
            cq[rear] = val;
        }
    }

};