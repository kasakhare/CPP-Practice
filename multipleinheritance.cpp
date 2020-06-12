#include<iostream>
using namespace std;

class ca{
public:
    void print(){
        cout<<"A"<<endl;
    }
};

class cb{
public:
    void print(){
        cout<<"B"<<endl;
    }
};

class cab:public ca, public cb{
public:
    void print(){
        ca::print();
        cb::print();
        cout<<"AB"<<endl;
    }
};


int main(){

    cab o;
    o.print();
    
    return 0;
}