#include<iostream>
using namespace std ;

class Node{
public:
    Node* left;
    Node* right;
    int data;

    Node(int data):data(data){
        this->left= nullptr;
        this->right= nullptr;
    }
};
//LOGIC FOR DELETING
// First go to the node
// Check for Single and 0 childs
// For 2 nodes : take the min value from the right subtree
//              or Take the maximum value from the left subtree
// we shall boil the 2nodes case into deleting a 0 child node , Thats why we find the leftmost or rightmost
