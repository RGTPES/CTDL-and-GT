#include <stdio.h>


void Sum(int n) {
    int sum = 0;
    for (int i =0;i<=n;i++) {
        sum+=i;
    }
    printf("%d",sum);
    return;
}
// Độ phư tạp về không gian là O(n)
void Sum2(int n) {
    int d = 1;
    int a1= 1;
 int sum2 = (n*(2*a1+(n-1)*d))/2;
    printf("%d\n",sum2);
    return;

}
// Đọ phức tạp về không gian là o(1)
int main() {
     Sum2(3);
    Sum(3);
    return 0;
}
