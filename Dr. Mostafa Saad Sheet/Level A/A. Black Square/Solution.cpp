#include <iostream>
using std::cin,std::cout;
int main(){
    int calories[4],total {};
    std::string seq;
    for(int i=0;i<4;i++)
        cin>>calories[i];
    cin>>seq;
    for(int i=0;i<seq.size();i++)
        total+=calories[seq[i]-'1'];
    cout<<total;
}