#include <iostream>
using std::cin,std::cout;
int main(){
    int tests,a,b,c;
    cin>>tests;
    while(tests--){
        cin>>a>>b>>c;
        if(a<b && b<c) cout<<"STAIR\n";
        else if(a<b && b>c) cout<<"PEAK\n";
        else cout<<"NONE\n";
    }
}