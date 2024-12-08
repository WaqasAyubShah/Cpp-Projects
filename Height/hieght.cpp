#include<iostream>
using namespace std;

int main(){
    int height;

    cout<< "Enter the height: "<<endl;
    cin>> height;

    if(height > 0)
    {
        if(height > 0 && height <= 20)
        cout<<"The layerof Atmosphere is Troposhpere! ";

        else if(height> 20 && height <= 50){
            if(height> 30 && height <= 45){
            cout<<"The layer is Ozone!";
            }
           // else
           // cout<<"Not Ozone!";
        }
        else if(height> 50 && height <= 85)
        cout<<"The layerof Atmosphere is Mesoshpere! ";

        else if(height> 85 && height <= 400)
        cout<<"The layerof Atmosphere is Thermoshpere! ";

        else
        cout<<"The layer is Exosphere!";

    }
    else 
    cout<<"Invalid!";
}