#include <iostream>
using std::cout,std::cin;
int main(){
    std::string name;
    cin>>name;
    int rotations {},cur_pos {},len {(int)name.size()},i {};
    while(len--){
        int next_char = name[i++] - 'a';
        if(next_char == cur_pos) continue;
        if(abs(next_char-cur_pos) < 13)
            rotations+=abs(next_char-cur_pos);
        else
            rotations+= 26 - abs(next_char-cur_pos);
        cur_pos = next_char;
    }
    cout<<rotations;
}