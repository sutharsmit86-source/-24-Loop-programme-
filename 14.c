#include <stdio.h>

int main() {
    int i, num, sum = 0;
    float mean;

    printf("Enter 10 numbers:\n");
    for(i = 1; i <= 10; i++) {
        scanf("%d", &num);   // read each number
        sum = sum + num;     // add to sum
    }

    mean = sum / 10.0;       // calculate mean

    printf("Sum = %d\n", sum);
    printf("Mean = %f\n", mean);

    return 0;
}