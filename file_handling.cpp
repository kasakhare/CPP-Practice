#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char arr[30],arr1[30];
    cout<<"Enter data:";
    cin.getline(arr,20);

    
    ofstream myfile("xyz.txt",ios::app);
    myfile<<arr;
    myfile.close();

    ifstream readfile("xyz.txt");
    readfile.getline(arr1,20);
    readfile.close();

    cout<<"reading from file:"<<endl;
    cout<<arr1;

    return 0;
}