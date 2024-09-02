#include <iostream>
using namespace std;

class Cookies{
private: 
    string color;

public:
   Cookies(string color){
                        this->color=color;
                        }
   string getColor(){
        cout<<"\n"<<this->color;
        return this->color;
    }
   void setColor(string newColor){
        this->color=newColor;
        cout<<"Color Set to: "<<newColor;
    }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Cookie* myCookie1=new Cookie("red");
    Cookie* myCookie2=new Cookie("Orange");
    myCookie2->getColor();
    myCookie2->setColor("navy");
    myCookie2->getColor();



    return 0;
}
