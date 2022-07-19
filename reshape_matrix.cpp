
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int noOfElements = 0;

        for(int i = 0; i < mat.size(); i ++) {
            noOfElements += mat[i].size();
        
        }
        cout << noOfElements << endl;
        int noOfNewElements = r * c;

        if(noOfNewElements > noOfElements) {
            return mat;
        }

        vector<vector<int>> newMatrix(r);

        int rows = 0;
        int columns = 0;
        int currentEelemnts = 0;

        for(int i = 0; i < mat.size(); i ++) {
            for(int j = 0; j < mat[i].size(); j ++) {

                newMatrix[rows].push_back(mat[i][j]);
                columns ++;
                currentEelemnts ++;
                 
                if(columns >  c - 1) {
                    
                    columns = 0;
                     if(rows + 1 < r) {
                    rows ++;

                }

                }

               

            }

        }

        return newMatrix;

}

        
    

    int main() {

        vector<vector<int>> mat = { {1,2} ,{3,4}};

        vector<vector<int>> result = matrixReshape(mat,127,4);

        for(int i = 0; i < result.size(); i ++) {
            for(int j = 0; j < result[i].size(); j ++) {
               cout << i << " " << j << endl;
            }
        }
    }

   