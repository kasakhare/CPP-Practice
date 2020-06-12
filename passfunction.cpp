#include<iostream>
using namespace std;

void pass_by_value(int x,int y){
    int z=x;
    x=y;
    y=z;
}

void pass_by_refrence(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}

void pass_by_address(int *x,int *y){
    int z=*x;
    *x=*y;
    *y=z;
}

int main(){
    int a=2,b=6;

//pass_by_value
    cout<<"1 values before swapping"<<endl;
    cout<<a<<" "<<b<<endl;

    pass_by_value(a,b);

    cout<<"values after swapping"<<endl;
    cout<<a<<" "<<b<<endl;


//pass_by_refrence
    cout<<"2 values before swapping"<<endl;
    cout<<a<<" "<<b<<endl;

    pass_by_refrence(a,b);

    cout<<"values after swapping"<<endl;
    cout<<a<<" "<<b<<endl;


//call_by_pointer or pass_by_address
    cout<<"3 values before swapping"<<endl;
    cout<<a<<" "<<b<<endl;

    pass_by_address(&a,&b);

    cout<<"values after swapping"<<endl;
    cout<<a<<" "<<b;


}