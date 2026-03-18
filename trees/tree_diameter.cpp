#include<iostream>

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

    int height(Node* root) {    
        if(root == NULL) {
            return 0;
        }

        int left_height = height(root->left);
        int right_height = height(root->right);

        return max(left_height, right_height) + 1;
    }
    int diameterOfBinaryTree(Node* root) {              //  O(n2)
        if(root == NULL) {      
            return 0;
        }

        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int curr = height(root->left) + height(root->right);

        int maxDiameter = max(left, max(right, curr));

        return maxDiameter;
    }


        int diameter_with_height(Node* root, int& diameter) {
        if(root == NULL) {
            return 0;
        }

        int left_height = diameter_with_height(root->left, diameter);
        int right_height = diameter_with_height(root->right, diameter);

        int curr = left_height + right_height;

        diameter = max(diameter, curr);

        return max(left_height, right_height) + 1;
    }

    int getDiameter(Node* root) {                                       //    O(n)
        int diameter = 0;
        diameter_with_height(root, diameter);

        return diameter;
    }