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
    void setdata(string cname,string mname,string ftype,float m,double p){
        company_name=cname;
        model_type=mname;
        fuel_type=ftype;
        mileage=m;
        price=p;
    }
    
    void getdata(){
        cout<<"Car Properties "<<endl<<endl;
        cout<<"company name "<<company_name<<endl;
        cout<<"model type "<<model_type<<endl;
        cout<<"fuel type "<<fuel_type<<endl;
        cout<<"mielage "<<mileage<<endl;
        cout<<"price "<<price<<endl;
    }
};

int main(){

    car car1;

    car1.setdata("toyota","altis","petrol",15.3,1500000);
    car1.getdata();

    return 0;
}

