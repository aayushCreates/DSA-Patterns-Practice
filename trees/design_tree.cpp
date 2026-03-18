
//  IF user give the "-1" means he don't want to create NODE.

#include<iostream>

using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createNode() {
        int data;
        cout<<"Enter the value of node: "<<endl;
        cin>>data;

        if(data == -1) {
            return NULL;        //  user doesn't want to create NODE.
        }

        Node* root = new Node(data);
        root->left = createNode();
        root->right = createNode();

        return root;
    }


int main() {
    Node* root = createNode();
    return 0;
}