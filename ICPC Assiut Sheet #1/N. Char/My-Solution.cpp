#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int i = (int)ch;
    if(i>=65 && i<97) cout<<(char)(i+32);
    else if(i>=97) cout<<(char)(i-32);
    return 0;
}