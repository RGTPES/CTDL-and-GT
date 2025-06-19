//PTIT_CNTT1_IT201_Session02_Bai05
#include <stdio.h>
#include <stdlib.h>

void Delete(int arr[],int n) {
    int pos;
    printf("nhap vi tri can xoa \n");
    if (pos > n) {
        printf("loi");
        return;
    }
    scanf("%d",&pos);
    for (int i = pos-1;i<n-1;i++) {
        arr[i] = arr[i+1];

    }
    for (int i =0;i<n-1;i++) {
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

Delete(arr,n);
free(arr);
}
