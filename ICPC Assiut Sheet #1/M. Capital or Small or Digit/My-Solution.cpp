#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int i = (int)ch;
    if(i>=48 && i<65) cout<<"IS DIGIT";
    else{
        cout<<"ALPHA\n";
        if(i>=65 && i<97) cout<<"IS CAPITAL";
        else if(i>=97) cout<<"IS SMALL";
    }
    return 0;
}