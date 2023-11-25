#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter operator: ";
    cin>>op;
    if(op=='+'){
        cout<<a+b;
    }else if(op=='*'){
        cout<<a*b;
    }else if(op=='-'){
        cout<<a-b;
    }else if (op=='/'){
        cout<<a/b;
    }else{
        cout<<"invalid operator";
    }
    return 0;
}