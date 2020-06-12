#include<iostream>
using namespace std;

struct person
{
    char name[20];
    int age;
    double salary;
};


int main(){

    person p1;
    cout<<"Person details"<<endl<<"Enter the person Name"<<endl;
    cin.getline(p1.name,20);
    cout<<"Enter age"<<endl;
    cin>>p1.age;
    cout<<"Enter salary"<<endl;
    cin>>p1.salary;

    cout<<"Person's details are:"<<endl;
    cout<<"Name:"<<p1.name<<endl;
    cout<<"Age:"<<p1.age<<endl;
    cout<<"Salary:"<<p1.salary<<endl;

    return 0;
}