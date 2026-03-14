
// ------------- Stack design where all the "PUSH, POP, TOP, MIN_ELE" will be in O(1) -----------------------

#include<iostream>
#include<vector>

using namespace std;

class stack {
    vector<pair<int, int>> s;

    void push(int val) {
        if(s.empty()) {
            pair<int, int>p;
            make_pair(val, val);
            // p.first = val;
            // p.second = val;
            s.push_back(p);
        }else {
            pair<int, int>p;
            int minVal = min(val, s.back().second);
            make_pair(val, minVal);
            s.push_back(p);
        }
    }

    void pop() {
        if(s.empty()) {
            //  no need to worry
            return;
        }else {
            s.pop_back();
        }
    }

    int top() {
        if(s.empty()) {
            //  no need to worry
            return -1;
        }else {
            int topVal = s.back().first;
            return topVal;
        }
    }

    int getMin() {
        if(s.empty()) {
            //  no need to worry
            return -1;
        }else {
            int minVal = s.back().second;
            return minVal;
        }
    }

};
