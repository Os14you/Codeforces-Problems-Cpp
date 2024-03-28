#include <iostream> 
using std::cin,std::cout;
int main(){
    std::string str;
    cin>>str;
    if(str[0]>='a') str[0] = str[0] - 'a' + 'A', cout<<str;
    else cout<<str;
    return 0;
}