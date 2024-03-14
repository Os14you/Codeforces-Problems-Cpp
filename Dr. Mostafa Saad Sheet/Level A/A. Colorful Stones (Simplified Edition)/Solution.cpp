#include <iostream>
using std::cin,std::cout;
int main(){
    std::string stones,instructions;
    int steps {1},i {},j {};
    cin>>stones>>instructions;
    for(;j<instructions.size();){
        if(stones[i] == instructions[j++])
            steps++,i++;
    }
    cout<<steps;
}