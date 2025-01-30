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


Node* deleteFromBST(Node* root,int target){
    if(root==nullptr){

    }
    if(root->data == target){
        //no child
        if(root->left == nullptr && root->right== nullptr){
            Node* temp = root;
            delete root;
            return temp;
        }

        //1 child
            //Left Child
            if(root->left != nullptr && root->right == nullptr){
                Node* temp=root;
                delete root;
                return temp;
            }
            //Right Child
            if(root->right != nullptr && root->left == nullptr){
            Node* temp=root;
            delete root;
            return temp;
        }

        //2 child
            if(root->left != nullptr && root->right != nullptr){
                //Finding value of the leftmost in the right subtree
                int minimum=findMin(root->right) -> data;
                //swapping the value
                root->data = minimum;
                //deleting that 0 child node
                root->right= deleteFromBST(root->right,minimum);
                return root;
            }
    }
    else if(target > root->data){
        deleteFromBST(root->right,target);
    }else if(target < root->data){
        deleteFromBST(root->left,target);
    }
}
