#include<stdio.h>
void countMax(int arr[],int n) {
    int numberApperent;
    int maxCount = 0;
    for(int i=0;i<n;i++) {
    int count = 0;
        for(int j=0;j<n;j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (maxCount < count) {
            maxCount = count;
            numberApperent = arr[i];
        }
    }
    printf("so xuat hien nhieu nhat la so  %d xuat hien %d lan \n",numberApperent,maxCount);
}
// do phuc tap ve thoi gian la o(n^2)
// do phuc tap ve ko gian la o(n)
int main() {
    int arr[]={2,2,2,4,5,6,7,1,1,2 };
    int n = sizeof(arr)/sizeof(arr[0]);
    countMax(arr,n);
}