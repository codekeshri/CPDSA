// sudoku solver
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        int n = board.size(); 
        solve(board, n);        
    }
    
    
    // define a function that checks along row, column and box
    bool notclash(char num, int i, int j, vector<vector<char>>& board, int n){
        for(int k=0; k<n; k++){
            if(board[i][k]==num)return false;             //checking along the horizontal row
            if(board[k][j]==num)return false;             //checking along the vertical column
        }
        // now i ll check along the box
        int s = sqrt(n);
        int startrow = i - i%s;
        int startcol = j - j%s;     
        for(int r=startrow; r<startrow+s; r++){
            for(int c=startcol; c<startcol+s; c++){
                if(board[r][c]==num)return false;
            }
        }    
        return true;
    }
    
    
    // recursive or backtracking call function  
    bool solve(vector<vector<char>>& board, int n){      
        //traverse till the empty block
        bool flag = false;
        int i, j;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(board[i][j]=='.'){
                    flag = true;
                    break;
                }
            }
            if(flag)break;
        }
        
        //base condition to stop backtracking and
        //start filling from the empty block, check if it is not clashing
        if(i==n && j==n)return true;    
        for(int num=1; num<=n; num++){
            if(notclash(num+48, i, j, board, n)){
                board[i][j]=num+48;
                if(solve(board, n)) return true;
                board[i][j]='.';                //if false, backtracking with '.'
            }
            
        }
        
        return false;
    }
    
};

int main() {
    //take board 2d vector input
    // create an instance of Solution
    
}
