#include <bits/stdc++.h>
#include<iostream>
using namespace std;



//Copy of Dynamic Object
class cricketer{
public:
    int jersey_no;
    string country;
    cricketer(int n,string s):jersey_no(n),country(s){

    }
};
int main(){
    cricketer* dhoni=new cricketer(100,"Indian");
    cricketer* kohli=new cricketer(25,"India");
  //Instead of dhoni = kohli just do 
   *dhoni=*kohli;
  

}
