#include <stdio.h>
#include <string.h>

int gcd_two_nums(int a, int b)
{
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int lcm_two_nums(int a, int b)
{
    return (a * b)/gcd_two_nums(a, b);
}


int main(void)
{
    int size, lcm;
    char nums[10] = {0};
    
    printf("Enter size: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        scanf("%d", &nums[i]);
    }

    lcm = nums[0];
    for(int i = 0; i < size; i++){
        lcm = gcd_two_nums(lcm, nums[i]);
    }

    printf("lcm: %d", lcm);

    
    
    return 0;
}