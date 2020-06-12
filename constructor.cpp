#include<iostream>
using namespace std;

class car
{
private:
    string  company_name;
    string model_type;
    string fuel_type;
    float mileage;
    double price;
public:

    car(){
        cout<<"default constructor"<<endl;
    }

    car(string cname,string mname,string ftype,float m,double p){
        cout<<"parameterized constructor"<<endl;
        company_name=cname;
        model_type=mname;
        fuel_type=ftype;
        mileage=m;
        price=p;
    }

    car(car &obj){
        cout<<"copy constructor"<<endl;
        company_name=obj.company_name;
        model_type=obj.model_type;
        fuel_type=obj.fuel_type;
        mileage=obj.mileage;
        price=obj.price;

    }

    void setdata(string cname,string mname,string ftype,float m,double p){
        company_name=cname;
        model_type=mname;
        fuel_type=ftype;
        mileage=m;
        price=p;
    }
    
    void getdata(){
        cout<<"Car Properties- "<<endl<<endl;
        cout<<"company name- "<<company_name<<endl;
        cout<<"model type- "<<model_type<<endl;
        cout<<"fuel type- "<<fuel_type<<endl;
        cout<<"mielage- "<<mileage<<endl;
        cout<<"price- "<<price<<endl<<endl;
    }

    ~car(){
        cout<<"Destructor called"<<endl;
    }

};

int main(){
    car car1, car2("toyota","fortuner","diesel",15.3,1500000);
    car1.setdata("toyota","altis","petrol",15.3,1500000);
    car1.getdata();
    car2.getdata();
    car car3=car1;
    car3.getdata();
    return 0;
}