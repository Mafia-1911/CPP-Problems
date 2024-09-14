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
