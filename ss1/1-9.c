#include <stdio.h>
#include <stdlib.h>
void printArr(int arr[][3],int row,int col) {
    for (int i =0;i<row;i++) {
        for (int j=0;j<col;j++) {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
// do phuc tap thoi gian O(n^2)
// do phuc tap ko gian O(1)
void printMainDiagonal(int arr[][3],int row,int col) {
    for (int i =0;i<row;i++) {
        for (int j=0;j<col;j++) {
            if (i==j) {
                printf("%d",arr[i][j]);
            }
        }
        printf("\n");
    }
}
// do phuc tap thoi gian O(n^2)
// do phuc tap ko gian O(1)
int main() {
    int row = 3;
    int col = 3;
    int arr[3][3]= {
        {1,2,3},
        {2,3,4},
        {3,2,1}
    };
   printArr(arr,row,col);
    printMainDiagonal(arr,row,col);

}
