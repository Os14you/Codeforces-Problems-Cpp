
/*
 * Not Finished
 */

#include <iostream>
//#include <vector>
using namespace std;
char bool_to_char(bool val){
    if(val)
        return '1';
    else
        return '0';
}
int main(){
    int test_cases,columns,paths=1;
    cin>>test_cases;
    while(test_cases--){
        cin>>columns;
        bool grid[2][columns];
        for(int i=0;i<2;i++){
            for(int j=0;j<columns;j++)
                cin>>grid[i][j];
        }
        string path="";
        path+=bool_to_char(grid[0][0]);
        for(int row=0,column=0;;){
            if((column+1)==columns) break;
            if(row == 1 || grid[row][column+1] < grid[row+1][column])
                path+=bool_to_char(grid[row][column+1]),column++;
            else if(grid[row+1][column] < grid[row][column+1])
                path+=bool_to_char(grid[row+1][column]),row++;
            else
                path+=bool_to_char(grid[row][column+1]),column++,paths++;
        }
        cout<<path<<"\n"<<paths<<"\n";
    }
    
    return 0;
}