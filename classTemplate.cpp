#include <iostream>
using namespace std;

template <typename T>

class weight{
    private:
        T kg;
    public:
        void setdata(T x){
            kg=x;
        }
        T getdata(){
            return kg;
        }
};

int main(){

    weight <int>obj;
    obj.setdata(3);
    cout<<"weight is : "<<obj.getdata()<<endl;

    weight <double>obj1;
    obj1.setdata(34.45435);
    cout<<"weight is : "<<obj.getdata()<<endl;    


    return 0;
}