#include<iostream>
using namespace std;

class myclass{
public:
    static int count;
    myclass(){
        count++;
    }
};

int myclass::count=0;

int main(){

    cout<<"count intially: "<<myclass::count<<endl;
    myclass obj1;
    cout<<"count : "<<myclass::count<<endl;
    myclass obj2;
    cout<<"count : "<<myclass::count<<endl;

    return 0;
}