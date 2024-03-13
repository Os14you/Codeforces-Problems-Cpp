#include <iostream>
using std::cout,std::cin;
int main(){
    int k,r,shovels {1};
    cin>>k>>r;
    while(true){
        int sale {k*shovels};
        if(sale%10==r || !(sale%10))
            break;
        shovels++;
    }
    cout<<shovels;
}