#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout<<add(1,3)<<endl;
    
    cout<<add(1,3,5)<<endl;

    cout<<add(2.501,5.904)<<endl;
    return 0;
}