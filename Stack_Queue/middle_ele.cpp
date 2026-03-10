
// ---------------------- Middle Ele of Stack WIthout REmoving ANY element -----------------------------

#include<iostream>
#include<stack>

using namespace std;

int middle_ele_using_extraSpace(stack<int>input) {
    stack<int>temp;
    int n = input.size();
    int i = 0;

    while(i < n / 2) {
        temp.push(input.top());
        input.pop();
        i++;
    }

    int ans = input.top();
    input.pop();

    while(temp.size()) {
        input.push(temp.top());
        temp.pop();
    }

    return ans;
}  

void middle_ele_recursion(stack<int> &input, int size, int &count) {
    if(count >= size / 2) {
        cout<<"Mid element is: "<<input.top();
        return;
    }

    int stackTop = input.top();
    input.pop();
    middle_ele_recursion(input, size, ++count);
    input.push(stackTop);
}

int main() {



    return 0;
}

