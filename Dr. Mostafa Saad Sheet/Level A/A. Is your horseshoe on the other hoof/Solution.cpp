#include <iostream>
#include <set>
using std::cin,std::cout;
int main(){
    std::set<int> shoes;
    int i{4},shoe;
    while(i--)
        cin>>shoe,shoes.insert(shoe);
    cout<<4-shoes.size();
    return 0;
}