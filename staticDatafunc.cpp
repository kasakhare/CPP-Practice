#include <iostream>
using namespace std;

class myclass{
public:
    static int val;

    myclass(){
        val++;
    }

    static int getcount(){
        return val;
    }

};

int myclass::val=0;

int main(){

    myclass obj;
    cout<<"value of val is : "<<myclass::getcount<<endl;
    return 0;
}