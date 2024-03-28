#include <iostream>
using std::cout,std::cin;
int main() {
    int tests; cin>>tests;
    while(tests--){
        std::string str;
        cin>>str;
        if(str.size()>10)
            cout<<str[0]<<str.size()-2<<str[str.size()-1]<<"\n";
        else cout<<str+"\n";
    }
    return 0;
}