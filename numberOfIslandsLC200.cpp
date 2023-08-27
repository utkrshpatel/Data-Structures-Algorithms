/* Problem Statement :- 

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3

Difficulty Level = Medium
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void dfsTraversal(vector<vector<char>>& grid,int i, int j,unordered_map<string,bool>&mp) {
    if(i == grid.size() || i < 0 || j == grid[0].size() || j < 0 || grid[i][j] == '0') {
        return;
    }

    string st = to_string(i)+ "," + to_string(j);
    if(mp[st] == true) {
        return;
    }

    mp[st] = true;
    dfsTraversal(grid,i,j+1,mp);
    dfsTraversal(grid,i,j-1,mp);
    dfsTraversal(grid,i+1,j,mp);
    dfsTraversal(grid,i-1,j,mp);
}

bool isVisited(int i, int j, unordered_map<string,bool>&mp) {
  string st = to_string(i) +"," + to_string(j);
  if(mp[st] == true) {
    return false;
  }

  return true;

}

int numIslands(vector<vector<char>>& grid) {
    unordered_map<string,bool>mp;
    int m = grid.size();
    int n = grid[0].size();
    int totalIslands = 0;

    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            if(grid[i][j] == '1' && isVisited(i,j,mp)) {
                dfsTraversal(grid,i,j,mp);
                totalIslands++;

            }


        }
    }

    return totalIslands;
        
}
int main() {
    vector<vector<char>>grid = {
   {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
};

numIslands(grid);
}




 
 
