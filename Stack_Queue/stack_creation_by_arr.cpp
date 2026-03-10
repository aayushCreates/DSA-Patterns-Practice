
//  --------------------------     APPROACH     ------------------------

//  If need to make 2 stacks from one arr  ->  Instead of doing half parts of the given array 
//  we can implement it by using: "2 Pointers" -> top1 (start from -1), top2 (start from size)

//  push in First -> top1++, pop in First -> top1--
//  push in Second -> top2--, pop in Second -> top2++


//  -------------------   Multiple Stack FROM Array  --------------------

//  So in that case need to do partition of the Array 


#include<iostream>

using namespace std;

class Stack {
    int *arr;
    int size;
    int top1; int top2;

    Stack(int size) {
        top1 = -1;
        top2 = size;

        arr = new int[size];
    }

    void push1(int valInput) {
        ++top1;
        arr[top1] = valInput;
    }
    void pop1() {
        --top1;
    }

    void push2(int valInput) {
        ++top2;
        arr[top2] = valInput;
    }
    void pop2() {
        --top2;
    }

};

int main() {

}

