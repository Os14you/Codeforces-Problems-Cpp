#include <iostream>
#include <vector>
using std::cin,std::cout;
void to_case(std::string &str,std::vector<int> idx_vec,bool is_upper=true){
    if(is_upper){
        for(int i=0;i<(int)idx_vec.size();i++)
            str[idx_vec[i]] = str[idx_vec[i]]-=32;
    }
    else{
        for(int i=0;i<(int)idx_vec.size();i++)
            str[idx_vec[i]] = str[idx_vec[i]]+=32;
    }

}
int main(){
    std::string word;
    int upper {},lower {};
    std::vector<int> idx_upper,idx_lower;
    cin>>word;
    for(int i=0;i<word.size();i++){
        if(isupper(word[i]))
            upper++,idx_upper.push_back(i);
        else
            lower++,idx_lower.push_back(i);
    }
    if(upper>lower)
        to_case(word,idx_lower);
    else
        to_case(word,idx_upper,false);
    cout<<word;
    return 0;
}