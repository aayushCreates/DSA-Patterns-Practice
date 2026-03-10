
// ---------------------------------- Valid Parentheses -------------------------------

#include<iostream>
#include<stack>

using namespace std;

bool valid_parentheses(string &str) {
     stack<char>temp;
    
    for(int i = 0; i < str.length(); i++) {
            if(str[i] == '{' || str[i] == '(' || str[i] == '[') {
                temp.push(str[i]);
            }
            else if(str[i] == '}') {
                if(temp.empty() || temp.top() != '{') return false;
                temp.pop();
            }
            else if(str[i] == ')') {
                if(temp.empty() || temp.top() != '(') return false;
                temp.pop();
            }
            else if(str[i] == ']') {
                if(temp.empty() || temp.top() != '[') return false;
                temp.pop();
            }
        }
    
    return temp.empty(); 
}

int main() {
    stack<char>temp;


    return 0;
}
