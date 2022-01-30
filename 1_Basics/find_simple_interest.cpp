#include<iostream>
#include<conio.h>
using namespace std;

int main() {

    int P;
    float R,T,SI;
    cout <<"Enter the principle amount"<<endl;
    cin>>P;
    cout <<"Enter the rate"<<endl;
    cin>>R;
    cout <<"Enter the time"<<endl;
    cin>>T;
    SI = P*R*T/100;
    cout <<"The simple Interest is "<<SI<<endl;
    getch();

}