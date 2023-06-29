#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    vector<pair<int, int>> matrixIndices;
   
    
    int rows = matrix[0].size();
    int col = matrix.size();


       for(int i = 0; i<col; i++) {
        for(int j = 0; j<rows;j++) {
            if(matrix[i][j] == 0) {
                matrixIndices.push_back(make_pair(i,j));
              
            }
        }
       }
    


    for(int i = 0; i<col; i++) {
        for(int j = 0; j<rows;j++) {

            for(auto mat : matrixIndices) {
                if(mat.first == i && mat.second == j) {
                     for(int m = 0; m<rows; m++) {
                    matrix[i][m] = 0;
                }

                for(int n = 0; n<col; n++) {
                    matrix[n][j] = 0;

                }

                break;

                
            }
            
        }
    }
    }

}


        



int main() {
    vector<vector<int>> v{{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(v);



}
