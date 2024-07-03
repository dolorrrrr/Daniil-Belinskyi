#include <stdio.h>
#include <math.h>

int main(void){
    int x1, y1, x2, y2;
    double res;
    printf("Enter vector coordinates: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    res = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    printf("Vector length is: %.6lf", res);

    return 0;
}