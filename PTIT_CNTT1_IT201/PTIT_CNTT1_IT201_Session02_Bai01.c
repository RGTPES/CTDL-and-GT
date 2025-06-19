#include<stdio.h>
#include <stdlib.h>
void maxNumber(int arr[],int n) {
    int maxNumber =0;
    for (int i =0;i<n;i++) {
        if (arr[i]>maxNumber) {
            maxNumber = arr[i];
        }
    }
    printf("%d",maxNumber);
}
int main() {
    int *arr;
    int n;
    arr = (int *)malloc(sizeof(int)*n);


    if (arr == NULL) {
        printf("Loi cap phat bo nho\n");
        return 1;
    }
    printf("nhap so cac phan tu trong mang \n");
    scanf("%d",&n);
    for (int i =0;i<n;i++) {
        printf("nhap phan tu trong mang \n ");
        scanf("%d",&arr[i]);
    }
    maxNumber(arr,n);
    free(arr);

}
