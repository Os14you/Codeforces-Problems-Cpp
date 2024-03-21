#include <iostream>
using std::cin,std::cout;
int main(){
    int tests;
    cin>>tests;
    while(tests--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a-1 < abs(b-c)+abs(c-1))
            cout<<1<<std::endl;
        else if(a-1 > abs(b-c)+abs(c-1))
            cout<<2<<std::endl;
        else
            cout<<3<<std::endl;
    }
    return 0;
}