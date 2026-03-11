//      ------------------------------  Next MIN element  ------------------------------

//  APPROACH - 1:   Brute force using 2 LOOP    O(n2)

//  APPROACH - 2:   USING "Stack" -> Just push ele either which is big or small but based on the condition ::::
                    //  "Condition First" => ele is equal or greater than top then just "PUSH".
                    //  "Condition Second" => ele is less than top then pop element till right top to apply "First condition" and push reset after that.

#include<iostream>
#include<vector>
#include<stack>

using namespace std;


void place_right(vector<int>& arr, int& idx, stack<int>& s) {
    if(idx >= arr.size()) {
        return;
    }

    if(arr[idx] > s.top()) {
        s.push(arr[idx]);
        idx++;
        place_right(arr, idx, s);
    }else if(arr[idx] < s.top()) {
        int stackTop = s.top();
        s.pop();
        place_right(arr, idx, s);
        s.push(stackTop);
    }else {
        s.push(arr[idx]);
        idx++;
        place_right(arr, idx, s);
    }
}

void nextMin_using_stack(stack<int>& s, int &count, int &ans) {
    if(s.size() < 2) {
        return;
    }
    if(s.size() > 2 && count == s.size() - 2) {
        ans =  s.top();
        return;
    }

    int topStack = s.top();
    s.pop();
    nextMin_using_stack(s, ++count, ans);
    s.push(topStack);
}

int main() {
    vector<int>arr;

    stack<int> temp;
    temp.push(-1);

    int idx = 0;
    place_right(arr, idx, temp);

    int secondMin = -1; 
    int count = 0;
    nextMin_using_stack(temp, count, secondMin);
    
    if(secondMin == -1) {
        cout<<"Seond min Ele is not exists"<<endl;
    }else {
        cout<<"Seond min Ele is:"<<secondMin<<endl;
    }

    return 0;
}
