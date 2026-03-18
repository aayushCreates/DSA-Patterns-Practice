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

void preOrder(Node* root) {     //  CURR -> LEFT -> RIGHT  
    if(root == NULL) {
        return;
    }

    cout<<root->data<<" ";

    preOrder(root->left);
    preOrder(root->right);

}
void inOrder(Node* root) {     //  LEFT -> CURR -> RIGHT  
    if(root == NULL) {
        return;
    }

    inOrder(root->left);

    cout<<root->data<<" ";

    inOrder(root->right);
}
void postOrder(Node* root) {     //  LEFT -> RIGHT -> CURR 
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);

    cout<<root->data<<" ";
}


void level_order(Node* root) {          //  NOT Telling that when one LEVEL is finished.....
    queue<Node* >q;
    q.push(root);

    while(!q.empty()) {
        Node* front = q.front();
        cout<<front->data<<" ";

        if(front->left != NULL) {
            q.push(front->left);
        }
        if(front->right != NULL) {
            q.push(front->right);
        }

        q.pop();
    }

}
void marker_level_order(Node* root) {          //  NOT Telling that when one LEVEL is finished....."-1/NULL" => Marker CONCEPT
    queue<Node* >q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 1) {
        Node* front = q.front();
        cout<<front->data<<" ";
        q.pop();

        if(q.front() == NULL) {
            cout<<endl;
            q.pop();

            q.push(NULL);           // Curr node ke left and right will be added
        }else {
            cout<<root->data<<" ";
        }

        if(front->left != NULL) {
            q.push(front->left);
        }
        if(front->right != NULL) {
            q.push(front->right);
        }

        q.pop();
    }

}