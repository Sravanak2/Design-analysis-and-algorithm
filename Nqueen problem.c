#include <stdio.h>
#include <stdbool.h>#define N 8 
int board[N][N];
bool isSafe(int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        if (board[i][col])
            return false;
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return false;
    }
    for (i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j])
            return false;
    }
    return true;
}
void printSolution() {
    static int solution = 1;
    printf("Solution %d:\n", solution++);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", board[i][j] ? 'Q' : '.');
        }
        printf("\n");
    }
    printf("\n");
}
void solveNQueens(int row) {
    if (row == N) {
        printSolution();
        return;
    }
    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row][col] = 1;
            solveNQueens(row + 1);
            board[row][col] = 0; 
        }
    }
}
int main() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }
    solveNQueens(0);
    return 0;
}
