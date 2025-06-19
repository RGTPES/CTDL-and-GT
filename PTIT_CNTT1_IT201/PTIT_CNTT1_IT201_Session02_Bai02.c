#include <stdio.h>
#include <stdlib.h>
void countOfNumber(int arr[],int n) {
    int a;
    int count = 0;
    printf("nhap phan tu ban muon tinh: \n");
    scanf("%d",&a);
    for (int i =0;i<n;i++) {
        if (arr[i] ==a) {
            count++;
        }
    }
    printf("%d",count);
    return;
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


    countOfNumber(arr,n);
    free(arr);
}
