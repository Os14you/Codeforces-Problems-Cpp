#include <iostream>
#include <vector>
#include <algorithm>
using std::cin,std::cout;

int main() {
    int testCases; cin >> testCases;

    while (testCases--){
        int num; cin >> num;
        int flag = 1;
        std::vector<int> vec(num);

        for (int i = 0; i < num; ++i)
            cin >> vec[i];

        for (int i = 0; i < num - 2; ++i) {
            if (vec[i] < 0) {
                flag = 0;
                break;
            }
            int val = vec[i];
            vec[i] -= val;
            vec[i + 2] -= val;
            vec[i + 1] -= 2 * val;
        }

        if(count(vec.begin(), vec.end(), 0) == num && flag == 1) cout << "YES" << std::endl;
        else cout << "NO" << std::endl;
    }

    return 0;
}