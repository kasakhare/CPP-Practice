#include<iostream>
using namespace std;

class shape{
    public:
        virtual void getarea()=0;
};

class circle:public shape{
    public:
        void getarea(){
            cout<<"Enter the circle radius:"<<endl;
            int r;
            cin>>r;
            cout<<"Area of circle is: "<<(3.14*r)<<endl;
        }
};

int main(){
    shape *ptr;
    circle obj;
    ptr=&obj;
    ptr->getarea();

    // circle obj;
    // obj.getarea();

    return 0;
}