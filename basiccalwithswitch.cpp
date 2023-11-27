#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter your operator: ";
    cin>>op;
    cout<<"enter number a: ";
    cin>> a;
    cout<<"enter number b: ";
    cin>> b;
    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"wrong operator entered";
    
    }
    return 0;
}