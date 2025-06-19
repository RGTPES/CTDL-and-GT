#include <stdio.h>
#include <stdlib.h>

int* add(int *arr, int *n, int value, int pos);

int main() {
    int *arr;
    int n, value, pos;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can them : ");
    scanf("%d", &pos);
    pos--;

    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    arr = add(arr, &n, value, pos);

    printf("Mang sau khi them:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}

int* add(int *arr, int *n, int value, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le.\n");
        return arr;
    }

    arr = (int*) realloc(arr, (*n + 1) * sizeof(int));
    if (arr == NULL) {
        printf("Loi cap phat bo nho!\n");
        exit(1);
    }

    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*n)++;
    return arr;
}
