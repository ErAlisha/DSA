#include <bits/stdc++.h> 

bool isSafe(int val,int row,int col,vector<vector<int>>&sudoku){
    for(int i=0;i<sudoku.size();i++){
        //row check
        if(sudoku[row][i]==val){
            return false;
        }
        //col check
        if(sudoku[i][col]==val){
            return false;
        }
        //grid check
        if(sudoku[3*(row/3)+ i/3] [3*(col/3)+i%3] == val){
         return false;
        }
    }
    return true;
}

bool sudokuSolver(vector<vector<int>>&sudoku){
    int n=sudoku[0].size();
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(sudoku[row][col]==0){
                for(int val=1;val<=9;val++){
                    if(isSafe(val,row,col,sudoku)){
                        sudoku[row][col]=val;
                        bool aageKaSol = sudokuSolver(sudoku);
                        if(aageKaSol){
                            return true;
                        }
                        else{
                            //backtrack krenge
                            sudoku[row][col]=0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<int>>& sudoku)
{
	sudokuSolver(sudoku);
}