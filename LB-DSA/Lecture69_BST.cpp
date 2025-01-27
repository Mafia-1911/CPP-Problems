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
void takeInput(Node* &root){
    cout<<"Enter values ";
    int data;cin>>data;

    while(data != -1){
        insertIntoBst(root,data);
        cin>>data;
    }
}
Node* insertIntoBst(Node* &root , int data){
   //the tree doesnt exist
   if(root == nullptr){
       root=new Node(data);
       return root;
   }
   if(data>root->data){
       //insert to the right
        root->right = insertIntoBst(root->right,data);
   }else if(data < root->data){
       //insert to the right
       root->left= insertIntoBst(root->left,data);
   }
};
int main(){
    Node* root= nullptr;
    cout<<"Enter data to create bst";
    takeInput(root);

}
