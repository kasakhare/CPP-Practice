
#include<iostream>
using namespace std;

class mybase{
    public:
        int x;
        mybase(){
            x=5;
            y=6;
            z=7;
        }
    protected:
        int y;
    private:
        int z;
};

class mydervied:public mybase{
    public:
    mydervied(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
};



int main(){
    mybase o1;
    mydervied o2;

    cout<<o2.x;
    return 0;
}