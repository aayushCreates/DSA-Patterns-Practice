
//  ---------------------------- Insert ELE AT Bottom -----------------------

#include<iostream>
#include<stack>

using namespace std;

void inset_at_bottom(stack<int>& s, int& ele) {
    if(s.size() <= 0) {
        s.push(ele);
        return ;
    }

    int topEle = s.top();
    s.pop();
    inset_at_bottom(s, ele);
    s.push(topEle);
}


int main() {

}

