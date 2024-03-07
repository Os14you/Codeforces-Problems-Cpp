#include <iostream>
using std::cout,std::cin;
int main(){
    int num_magnets,previous_magnet,final_num {1};
    cin>>num_magnets;
    cin>>previous_magnet;
    num_magnets--;
    while(num_magnets--){
        int magnet_pos;
        cin>>magnet_pos;
        if(magnet_pos == previous_magnet){
            previous_magnet=magnet_pos;
            continue;
        }
        final_num++;
        previous_magnet=magnet_pos;
    }
    cout<<final_num;
    return 0;
}