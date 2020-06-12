#include <iostream>
using namespace std;

int main(){
    int var=5;
    int *ip;

    ip=&var;

    cout<<"address in pointer"<<ip<<endl;
    cout<<"value pointer points to "<<*ip<<endl;

    *ip=7;

    cout<<"address in pointer"<<ip<<endl;
    cout<<"value pointer points to "<<*ip<<endl;

    cout<<"value of var x = "<<var;

}