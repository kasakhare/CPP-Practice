#include<iostream>
using namespace std;

class distance1{
    private:
        int meters;
    public:
        distance1(){
            meters=0;
        }
        void display(){
            cout<<"Meters value: "<<meters<<endl;
        }

        friend void add(distance1 &d);

};

void add(distance1 &d){
    d.meters=d.meters+5;
}

int main(){
    distance1 d1;
    d1.display();

    add(d1);
    d1.display();

    return 0;
}