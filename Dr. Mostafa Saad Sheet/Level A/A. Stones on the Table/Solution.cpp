#include <iostream>
using std::cout,std::cin;
int main() {
    int stones,to_remove {},i {};
    std::string seq_stones;
    cin>>stones;
    cin>>seq_stones;
    while(stones--){
        if(seq_stones[i+1]=='\0')
           break;
        if(seq_stones[i++] == seq_stones[i])
            to_remove++;
    }
    cout<<to_remove;
    return 0;
}