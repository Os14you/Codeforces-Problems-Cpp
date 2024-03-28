#include <iostream>
using std::cin,std::cout;
int main(){
    int position;
    cin>>position;
    if(position%5) cout<<position/5+1;
    else cout<<position/5;
}