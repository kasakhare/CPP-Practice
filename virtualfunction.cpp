#include<iostream>
using namespace std;

class mybase{
    public:
        void show(){
            cout<<"base class show function"<<endl;
        }
        virtual void print(){
            cout<<"base class print function"<<endl;
        }
};

class myderived:public mybase{
    public:
        void show(){
            cout<<"derived class show function"<<endl;
        }
        void print(){
            cout<<"derived class print function"<<endl;
        }
};

int main(){
    mybase *baseptr;
    myderived derivedobj;

    baseptr = &derivedobj;
    baseptr->print();
    baseptr->show();

    cout<<endl;

    mybase obj;
    obj.print();
    obj.show();
    derivedobj.print();
    derivedobj.show();

    return 0;
}