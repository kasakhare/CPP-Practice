#include<iostream>
using namespace std;

class base{
protected:
    int val;
};

class derived1 : virtual public base
{
public:
    derived1(){
        val=1;
    }
    void getvalue(){
        cout<<"value in derived1 class is: "<<val<<endl;
    }
};

class derived2 : virtual public base
{
public:
    derived2(){
        val=2;
    }
    void getvalue(){
        cout<<"value in derived2 class is: "<<val<<endl;
    }
};

class derived3: public derived1, public derived2{
public:
    void getvalue(){
        derived2::getvalue();
        derived1::getvalue();
    }
};



int main(){
    derived3 obj;
    obj.getvalue();
    return 0;
}