//PTIT_CNTT1_IT201_Session02_Bai08

#include <stdio.h>
#include <stdlib.h>
void Max(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int flag = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d ", arr[i]);
        }
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
Max(arr,n);
    free(arr);
}
