#include<iostream>

using namespace std;

struct person
{
    string name;
    int age;
    float salary;
};


int main(){

    person p1;

    person *ptr;
    ptr=&p1;

    cout<<"Person details"<<endl<<"Enter the person Name"<<endl;
    cin>>ptr->name;
    cout<<"Enter age"<<endl;
    cin>>ptr->age;
    cout<<"Enter salary"<<endl;
    cin>>ptr->salary;

    cout<<"Person's details are:"<<endl;
    cout<<"Name:"<<ptr->name<<endl;
    cout<<"Age:"<<ptr->age<<endl;
    cout<<"Salary:"<<ptr->salary<<endl;

}