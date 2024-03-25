#include <iostream> 
using std::cin,std::cout;
int main(){
    int statements,x {0};
    cin>>statements;
    while(statements--){
        std::string statement;
        cin>>statement;
        if(statement[1]=='-')
            x--;
        else
            x++;
    }
    cout<<x;
    return 0;
}