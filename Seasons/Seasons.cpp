#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Let's find out Months and seasons"<<endl;
    cin>> x ;
    switch (x)
    {
    case 1 /* constant-expression */:
        cout<<"jan" << endl;
        break;
    case 2 /* constant-expression */:
        cout<<"Feb" << endl;
        break;
    case 3 /* constant-expression */:
        cout<<"March" << endl;
        break;
    case 4 /* constant-expression */:
        cout<<"April" << endl;
        break;
    case 5 /* constant-expression */:
        cout<<"May" << endl;
        break;
    case 6 /* constant-expression */:
        cout<<"Jun" << endl;
        break;
    case 7 /* constant-expression */:
        cout<<"July" << endl;
        break;
    case 8 /* constant-expression */:
        cout<<"Aug" << endl;
        break;
    case 9 /* constant-expression */:
        cout<<"Sep" << endl;
        break;
    case 10 /* constant-expression */:
        cout<<"Oct" << endl;
        break;
    case 11 /* constant-expression */:
        cout<<"Nov" << endl;
        break;
    case 12 /* constant-expression */:
        cout<<"Dec" << endl;
        break;
    default:
        break;
    }

    if(x == 12 || x == 1 || x == 2 )
    {
        cout<<"season is winter";
    }
    else if( x == 3 || x == 4 || x == 5 ) 
    { 
        cout<<"season is Spring"<<endl;
    }
    else if( x == 6 || x == 7 || x == 8)
    {
        cout<<"season is summer"<<endl;
    }
    else if( x == 9 || x == 10 || x == 11)
    {
        cout<<"season is autumn"<<endl;
    }
    else 
    {
        cout<<"You put the wrong value"<<endl;
    }
}