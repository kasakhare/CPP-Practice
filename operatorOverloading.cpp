#include<iostream>
using namespace std;

class complexno{
private:
    int real,imag;
public:
    // complexno(){

    // }
    complexno(int r=0,int i=0){
        real=r;
        imag=i;
    }

    void getdata(){
        cout<<"complex no. is: "<<real<<" + "<<imag<<"i"<<endl;
    }

    complexno operator +(complexno c){
        complexno temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

};


int main(){
    complexno n1(2,4),n2(5,2);
    complexno n;

    n=n1+n2;

    n.getdata();

    return 0;
}