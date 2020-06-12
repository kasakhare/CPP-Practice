#include<iostream>
using namespace std;

class shape{
    protected:
        int width;
        int height;
    public:
        void setwidth(int w){
            width=w;
        }
        void setheight(int h){
            height=h;
        }
};

class rectangle:public shape{
    public:
        int getArea(){
            return width*height;
        }
};

int main(){
    rectangle area;
    area.setheight(4);
    area.setwidth(5);

    cout<<"Area is :"<<area.getArea();
    return 0;
}