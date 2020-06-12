#include<iostream>
using namespace std;

int myfunction(int x,int y){
    if (x>y)
        return x;
    else
        return y;
}

int main(){
    
    int a,b,c;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;

    cout<<"Greatest value:";
    c=myfunction(a,b);
    cout<<c;
}