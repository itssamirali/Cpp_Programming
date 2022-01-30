#include<iostream>
#include<conio.h>
using namespace std;

int main() {

    int a,b,c;
    cout <<"Enter the value of a,b and c\n";
    cin>>a>>b>>c;
    if(a>c){
        if(a>b){

             cout <<a;

        }
       
    }
    else if(b>c){
        if(b>a){

            cout<<b;
        }    
    }
    else{

        cout<<c;
    }

}