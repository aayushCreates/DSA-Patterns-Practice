#include<iostream>
#include<queue>

using namespace std;

class Node {
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int using_level_order(Node* root) {
    queue<Node*>q;
    int height = 0;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1) {
        Node* front = q.front();
        q.pop();
        if(q.front() == NULL) {
            height++;
        }else {
            q.push(root);
        }

        if(front->left != NULL) {
            using_level_order(root->left);
        }
        
        if(front->right != NULL) {
            using_level_order(root->right);
        }
    }

    return height;
}

int tree_height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int hl = tree_height(root->left);
    int hr = tree_height(root->right);

    return max(hl, hr) + 1;
}