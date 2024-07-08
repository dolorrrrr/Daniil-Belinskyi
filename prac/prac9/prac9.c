#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    int distance = y - x;
    if (distance == 0) return 0;

    int step = 1;
    int position = 0;
    int steps = 0;

    while (position < distance) {
        steps++;
        position += step;
        if (position >= distance) break;
        steps++;
        position += step;
        if (position >= distance) break;
        step++;
    }

    return steps;
}

int main() {
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);


    int result = minSteps(x, y);
    printf("Minimum number of steps is: %d\n", result);

    return 0;
}
