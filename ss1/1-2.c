#include <stdio.h>
void PrinDouble(int n) {
int i =1;
    while (i<n) {
        printf("%d",i);
        i*=2;
    }
}

//Độ phức tạp veef thời gian là O(log n)