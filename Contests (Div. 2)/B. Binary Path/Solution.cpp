
/*
 * Not Finished
 */

#include <iostream>
//#include <vector>
using namespace std;

int main(){
    int test_cases,columns,paths=1;
    cin>>test_cases;
    while(test_cases--){
        cin>>columns;
        string grid[2];
        for(int i=0;i<2;i++)
            cin>>grid[i];
        string path="";
        path+=grid[0][0];
        for(int row=0,column=0;;){
            if(grid[0][column]=='\0') break;
            if(row == 1 || grid[row][column+1] < grid[row+1][column])
                path+=grid[row][column+1],column++;
            else if(grid[row+1][column] < grid[row][column+1])
                path+=grid[row+1][column],row++;
            else
                path+=grid[row+1][column],row++,paths++;
        }
        cout<<path<<"\n"<<paths<<"\n";
    }
    
    return 0;
}