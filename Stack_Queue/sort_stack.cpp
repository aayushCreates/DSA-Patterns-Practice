
//  ----------------------------------------- Sort Stack ----------------------------------

//  APPROACH - 1 =>   Using array + sorting + replacing ele in the stack
//  APRROACH - 2 =>   USING "RECURSION" + O(1)-> SPACE      

#include<iostream>
#include<stack>

using namespace std;

void insert_into_sorted(stack<int>& tempStack, int ele) {
    if(tempStack.empty()) {
        tempStack.push(ele);
    }else if (tempStack.top() >= ele) {
        tempStack.push(ele);
    }else {
        int tempStackTop = tempStack.top();
        tempStack.pop();

        insert_into_sorted(tempStack, ele);

        tempStack.push(tempStackTop);
    }
}

void sort_stack(stack<int>& tempStack) {
    if(tempStack.empty()) {
        return;
    }

    int currEle = tempStack.top();
    tempStack.pop();

    sort_stack(tempStack);
    insert_into_sorted(tempStack, currEle);
}

int main() {

}


