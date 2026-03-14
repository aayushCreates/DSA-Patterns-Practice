
// -------------------------- Interleave QUEUE => O(n) + O(n) ------------------------

#include<iostream>
#include<queue>

using namespace std;

void interleave_queue(queue<int> &q) {

    int n = q.size();
    queue<int> firstHalf;
    int i = 0;

    while(i < n / 2) {
        int temp = q.front();
        q.pop();
        firstHalf.push(temp);
        i++;
    }

    queue<int> ans;
    int j = 0;
    int f_size = firstHalf.size();

    while(i < n && j < f_size) {
        int tempFirst = firstHalf.front();
        int tempSecond = q.front();

        ans.push(tempFirst);
        ans.push(tempSecond);

        firstHalf.pop();
        q.pop();

        i++;
        j++;
    }

    while(j < f_size) {
        ans.push(firstHalf.front());
        firstHalf.pop();
        j++;
    }

    while(i < n) {
        ans.push(q.front());
        q.pop();
        i++;
    }

    // copy result back to original queue
    while(!ans.empty()) {
        q.push(ans.front());
        ans.pop();
    }
}

int main() {

    queue<int> q;

    for(int i=1;i<=6;i++)
        q.push(i);

    interleave_queue(q);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}
