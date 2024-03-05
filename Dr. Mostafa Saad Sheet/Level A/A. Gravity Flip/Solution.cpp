#include <iostream>
#include <algorithm>
#include <queue>
using std::cin,std::cout;
void print_vector(std::vector<int> &v){
    sort(v.begin(), v.end());
	for(int i=0;i<(int) v.size();i++) {
		cout << v[i] << " ";
	}
}
int main(){
    int box_area;
    cin>>box_area;
    std::vector<int> cubes(0);
    while(box_area--){
        int column_cubes;
        cin>>column_cubes;
        cubes.push_back(column_cubes);
    }
    print_vector(cubes);
    return 0;
}