
#include<iostream>
using namespace std;

    int main(){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;

        if(a>b && a>c){
            cout<<a <<"is largest";
        }
        else if(b>a && b>c){
            cout<<b<<"is largest";
        } 
        else{
            cout<<"c is largest";
        }
    }