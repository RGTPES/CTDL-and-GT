////PTIT_CNTT1_IT201_Session02_Bai07
#include <stdio.h>
#include <stdlib.h>
void check(int arr[],int n) {
    int value;
    printf("nhap gia tri \n");
    scanf("%d",&value);

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (arr[i]+arr[j] == value) {
                printf("%d ",arr[j]);
                printf("%d ",arr[i]);
                return;
            }
        }
    }
    printf("ko co cap nao");

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
    check(arr,n);
    free(arr);
}
