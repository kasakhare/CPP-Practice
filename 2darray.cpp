#include <iostream>
using namespace std;

int main(){

    int myarr[3][4] = {{1,2,3,4},{4,5,6,7},{2,4,5,7}};  //declaration and initialization

    for(int a=0;a<3;a++){

        for (int b=0;b<4;b++){

            cout<<myarr[a][b]<<" ";
            
        }
        cout<<endl;
    }

    int arr1[2][2]={1,1,2,2},arr3[2][2]={2,2,3,3},arr2[2][2];

   /* cout<<"arr 1";
    for(int a=0;a<2;a++){
        for (int b=0;b<2;b++){
            cin>>arr1[a][b];
        }
        cout<<endl;
    }

    cout<<"arr 2";
    for(int a=0;a<2;a++){
        for (int b=0;b<2;b++){
            cin>>arr3[a][b];
        }
        cout<<endl;
    }*/

    cout<<"addition"<<endl;
    for(int a=0;a<2;a++){
        for (int b=0;b<2;b++){
            arr2[a][b]=arr3[a][b]+arr1[a][b];
            cout<<arr2[a][b]<<" ";
        }
        cout<<endl;
    }


    return 0;
}