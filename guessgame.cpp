#include<iostream>
using namespace std;
int main(){
    int secretnum=9;
    int num, guesscount=0;
    bool guess=false;
    
    while ( num!=secretnum && !guess){
        if(guesscount<3){
            cout<<"enter the number: ";
            cin>>num;
            guesscount++;

        }else{
            guess=true;
            
        }
    }
    if(guess){
        cout<<"you loss!!!";
    }else{
        cout<<"you win!!!!!";
    }
    
    return 0;
}