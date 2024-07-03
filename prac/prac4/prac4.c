/*
Натуральне число m називається рівним дільником числа n,
якщо частка і залишок від ділення n на m рівні одне одному.
Для заданого натурального числа n знайти кількість його
рівних дільників.
Вхідні дані: Натуральне число n (1 < n < 150).
Вихідні дані: Вивести одне шукане число.
*/

#include <stdio.h>

int main(void){
    int n, res = 0;
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        if((n / i) == (n % i)){
            res++;
        }
    }

    printf("The number of equal divisors of the number 20: %d",res);

    return 0;
}