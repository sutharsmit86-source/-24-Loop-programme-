#include <stdio.h>

int main() {
    int i, n, num, sum = 0;
    float mean;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &num);   // read each number
        sum = sum + num;     // add to sum
    }

    mean = sum / (float)n;   // mean = total sum / n

    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}