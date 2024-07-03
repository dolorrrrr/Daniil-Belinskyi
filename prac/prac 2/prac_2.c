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


int main(void)
{
    int size, gcd;
    char nums[10] = {0};
    
    printf("Enter size: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        scanf("%d", &nums[i]);
    }

    gcd = nums[0];
    for(int i = 0; i < size; i++){
        gcd = gcd_two_nums(gcd, nums[i]);
    }

    printf("GCD: %d", gcd);

    
    
    return 0;
}