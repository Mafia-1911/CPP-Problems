#include<iostream>
using namespace std;

int main(){
    char str[100];
    //cin>>str !BAD WAY TO TAKE STRING INPUT
    //cin doesn't see the space . 
    //Inorder to take input with space we use a overloaded method 
    cin.getline(str,100);
    cin.ignore();//This function ignores one input , To flush the enter pressed 
    cout<<str;

    string input;
    
}