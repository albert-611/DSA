#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isSafe(vector<vector<char>> &board, int rows, int cols){
    int n = board.size();
    //horizontal
    for(int j = 0; j < n; j++){
        if (board[rows][j] == 'Q') return false;   
    }

    //vertical
    for (int i = 0; i < rows; i++){
        if (board[i][cols] == 'Q') return false;     
    }
    
    //diagonal Left
    for (int i = rows, j = cols; i >= 0 && j >= 0; i--,j--){
        if (board[i][j] == 'Q') return false;     
    }

    //diagonalRight
    for (int i = rows, j = cols; i >= 0 && j<n; i--,j++){
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

void printBoard(vector<vector<char>> &board){

    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< board[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
}

void nQueens(vector<vector<char>>&board, int row){
    int n = board.size();
    if (row == n){
        printBoard(board);
        return;
    }
    
    for (int j = 0; j < n; j++){ //columns
       if(isSafe(board,row,j)){
        board[row][j] = 'Q';
        nQueens(board,row+1);
        board[row][j] = '.';  
       }
    }
}

int main()
{
    vector<vector<char>> board;
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for(int j=0; j<n; j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    
    nQueens(board,0);
    
    return 0;
}