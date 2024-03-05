#include <iostream>
using std::cin,std::cout;
int main(){
    int numOfProblems,problemsSolved {};
    cin>>numOfProblems;
    while(numOfProblems--){
        int view,is_sure {};
        for(int i=0;i<3;i++){
            cin>>view;
            if(view==1)
                is_sure++;
        }
        if(is_sure>=2)
            problemsSolved++;
    }
    cout<<problemsSolved;
}