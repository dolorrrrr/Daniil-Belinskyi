#include <stdio.h>

int gcd_two_nums(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm_two_nums(int a, int b)
{
    return (a * b) / gcd_two_nums(a, b);
}

int main(void)
{
    int size, lcm;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    int nums[10];
    printf("Enter numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    lcm = nums[0];
    for (int i = 1; i < size; i++) {
        lcm = lcm_two_nums(lcm, nums[i]);
    }

    printf("LCM: %d\n", lcm);
    
    return 0;
}
