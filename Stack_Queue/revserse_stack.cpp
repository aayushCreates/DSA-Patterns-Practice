
//  ----------------------------- Reverse STACK --------------------------

#include<iostream>
#include<stack>

using namespace std;

void reverse_stack(stack<int>& s) {
    stack<int>revStack;

    while(s.size()) {
        revStack.push(s.top());
        s.pop();
    }
    
    while(revStack.size()) {
        s.push(s.top());
        revStack.pop();
    }
}

int main() {

}
