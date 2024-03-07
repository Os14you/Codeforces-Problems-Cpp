#include <iostream>
#include <set>
using std::cout,std::cin;
int main(){
    std::string username;
    std::set<char> distinct_username;
    cin>>username;
    for(auto c : username)
        distinct_username.insert(c);
    if(distinct_username.size()%2)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}