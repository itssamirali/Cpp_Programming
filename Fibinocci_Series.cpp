#include<iostream>
using namespace std;

int main() {

    int a=0,b=1,num,next;

    cout <<"Enter the number of elements which you want to print"<<endl;
    cin >>num;

    cout <<"The Fibinocci series are: "<<endl;
    for( int i=0;i<num;i++)
    {
        cout <<a<<endl;
        num=a+b;
        a=b;
        b=num;
    }
}