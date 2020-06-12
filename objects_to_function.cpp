#include<iostream>
using namespace std;

class complexno{
private:
    int real;
    float imaginary;
public:
    complexno(){   
    }
    complexno(int r,float i){
        real=r;
        imaginary=i;
    }
    void getdata(){
        cout<<"complex no. is: "<<real<<" + "<<imaginary<<"i"<<endl;
    }
    int  getrealpart(){
        return real;
    }
    float getimaginarypart(){
        return imaginary;
    }
};

complexno add(complexno n1,complexno n2){
    int r;
    float i;

    r=n1.getrealpart()+ n2.getrealpart();
    i=n1.getimaginarypart() + n2.getimaginarypart();

    complexno temp(r,i);
    return temp;
}

int main(){

    complexno cn(2,4),cn1(3,6),cn2;
    cn.getdata();
    cn1.getdata();
    cn2=add(cn1,cn);
    cn2.getdata();

    complexno *ptr;
    ptr=&cn2;
    cout<<"Pointer to object"<<endl;
    ptr->getdata();

    return 0;
}