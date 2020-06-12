#include<iostream>
using namespace std;

class animal{
    public:
        void makesound(){
            cout<<"animal sound"<<endl;
        }

};

class dog:public animal{
    public:
        void makesound(){
            cout<<"dogs bark"<<endl;
        }
};

int main(){
    animal a;
    dog b;
    a.makesound();
    b.makesound();
    return 0;
}