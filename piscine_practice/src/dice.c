#include <stdio.h>

int main(void){
    int times;
    int red, yellow, green;
    int sum = 0;
    int num;
    double average;

    scanf("%d", &times);

    for(int i = 1; i <= times; i++){
        scanf("%d %d %d", &red, &yellow, &green);


        num = red * 100 + yellow * 10 + green;
        sum += num;
        average = (double)sum / i;

        printf("%d. you rolled: %d, current average: %.1lf\n", i, num, average);
    }

    return 0;
}
