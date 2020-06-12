#include<iostream>
using namespace std;

class weight{
    private:
        int kg;
    public:
        weight(int x=0){
            kg=x;
        }

        void printweight(){
            cout<<"weight in kg: "<<kg<<endl;
        }

        // void operator ++(){
        //     ++kg;
        // }

        weight operator ++(){
            weight temp;
            temp.kg=++kg;
            return temp;
        }

        void operator ++(int){
            kg++;
        }

};

// int x=0,y=0;

// x=++y;
// x=1;
// y=1;

// x=y++;
// x=0;
// y=1;


int main(){
    weight obj;
    obj.printweight();

    ++obj;              //obj.operator++();
    obj.printweight();

    obj++;
    obj.printweight();

    weight obj1,obj2;
    obj1=++obj2;
    obj1.printweight();
    obj2.printweight();
    

    return 0;
}