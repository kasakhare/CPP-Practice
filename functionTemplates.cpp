#include<iostream>
using namespace std;

template<typename T>
T add(T x,T y){
    return x+y;
}

int main(){

    cout<<"Addition of 3 and 4 is : "<<add<int>(3,4)<<endl;
    cout<<"Addition of 3.5 and 4.9 is : "<<add<float>(3.5f,4.9f)<<endl;
    return 0;
}