#include <iostream>
using namespace std;

template<class T>
class makeDynamicArrays{
private:
    int size;
    T* arr;
public:
    makeDynamicArrays(int n){
        this->size=n;
        arr=new T[n];
    }
    void iterate(){
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void show(){
        for(int i=0;i<size;i++){
            cout<< arr[i]<<endl;
        }
    }
};

        int main(){
            cout<<"hello";
            makeDynamicArrays obj1= makeDynamicArrays<int>(5);
            obj1.iterate();
            obj1.show();
        
        }