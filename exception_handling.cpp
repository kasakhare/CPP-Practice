#include<iostream>
using namespace std;

int main(){

    int n,m,r;

    cout<<"Enter numerator and denominator"<<endl;
    cin>>n>>m;

    try{
        if(m==0){
            throw m;
        }
        r=n/m;
    }
    catch(int exception){
        cout<<"divide by zero not allowed";
    }
    


    return 0;
}