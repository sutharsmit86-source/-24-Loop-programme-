#include <stdio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 1; i <= n; i++)
     {
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;
    }

    printf("Count of Positive numbers = %d\n", positive);
    printf("Count of Negative numbers = %d\n", negative);
    printf("Count of Zero numbers = %d\n", zero);

    return 0;
}