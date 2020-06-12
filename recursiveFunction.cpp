#include<iostream>
using namespace std;

int sum(int n){
    if (n!=0)
        return (n+sum(n-1));
    else
    {
        return n;
    }
    

}

int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    int total=sum(n);
    cout<<"Total is : "<<total<<endl;
    return 0;
}