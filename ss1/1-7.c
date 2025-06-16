#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
void check(int arr[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                printf("co phan tu trung nhau \n");
                return ;
            }
        }
    }
    printf("ko co phan tu trung nhau trong mang \n");
}
// độ phức tạp về thời gian o(n^2)
// độ phức tạp về không gian o(9)
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


}
void check2(int arr[],int n) {
    sort(arr,n);
    for (int i =0;i<n;i++) {
        if (arr[i]==arr[i+1]) {
            printf("co phan tu trung nhau \n");
            return ;
        }

    }
    // độ phức tạp về thời gian o(n)
    // độ phức tạp về không gian o(9)

    printf("ko co phan tu trung nhau \n");
}
int main() {
    int arr[]={1,1,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    check(arr,n);
    check2(arr,n);
    return 0;
}