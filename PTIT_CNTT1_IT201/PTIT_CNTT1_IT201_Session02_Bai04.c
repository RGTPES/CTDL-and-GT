//PTIT_CNTT1_IT201_Session02_Bai04
#include <stdio.h>
#include <stdlib.h>
void fix(int arr[],int n) {
    int pos;
    int value;
    printf("nhap vi tri muon sua \n");
    scanf("%d",&pos);
    printf("Nhap gia tri muon sua \n" );
    scanf("%d",&value);

    arr[pos-1] =value ;
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}
int main() {
    int n;
    int *arr;


    printf("ghi so phan tu trong mang: \n");
    scanf("%d",&n);
    arr = (int*) malloc(n*sizeof(int));

    if (arr == NULL) {
        printf("Loi cap phat bo nho\n");
        return 1;
    }
    printf("Nhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    fix(arr,n);
free(arr);
}