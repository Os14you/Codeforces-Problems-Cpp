#include <iostream>
using std::cout,std::cin;
int main(){
    std::string str1 ,str2;
    char c1,c2;
    int val1 {},val2 {};
    cin>>str1>>str2;
    for(int i=0;i<(int) str1.size();i++){
        c1 = tolower(str1[i]);
        c2 = tolower(str2[i]);
        if(c2!=c1){
            val1 = (int)c1;
            val2 = (int)c2;
            break;
        }
    }
    if(val1 == val2)
        cout<<0;
    else if(val1 > val2)
        cout<<1;
    else if(val1 < val2)
        cout<<-1;
}