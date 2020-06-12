#include<iostream>
using namespace std;

inline int add(int a, int b=9){
    return a+b;
}

int main(){
    cout<<"Addition value:"<<add(4,5)<<endl;
    cout<<"Addition value:"<<add(4);
}