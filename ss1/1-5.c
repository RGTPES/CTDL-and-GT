#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int n) {
for (int i =0;i<n;i++) {
    for (int j =i+1;j<n;j++) {
        if (arr[i]>arr[j]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
    for (int i =0;i<n;i++) {
        printf("%d",arr[i]);
    }

}

int main() {
    int n;
    int *arr;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    printf("Nhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr == NULL) {
        printf("Loi cap phat bo nho\n");
        return 1;
    }

    sort(arr,n);

    free(arr);

    return 0;
}
// độ phức tạp về thời gian o(n^2)
// độ phức tạp về không gian o(n)