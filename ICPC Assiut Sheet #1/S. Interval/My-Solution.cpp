#include<iostream>
using namespace std;
int main(){
    long double num;
    cin>>num;
    if(0<=num && num<=25) cout<<"Interval [0,25]";
    else if(25<num && num<=50) cout<<"Interval (25,50]";
    else if(50<num && num<=75) cout<<"Interval (50,75]";
    else if(75<num && num<=100) cout<<"Interval (75,100]";
    else cout<<"Out of Intervals";
    return 0;
}