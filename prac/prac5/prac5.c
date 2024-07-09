/*
Обчислити кількість послідовностей довжиною n,
що складаються лише з нулів і одиниць, де 
не зустрічається три одиниці підряд.
Вхідні дані: Довжина послідовностей n (1 < n < 10000)
Вихідні дані: Вивести кількість шуканих послідовностей за модулем 12345
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the sequence length: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("2\n");
        return 0;
    }

    int a = 1, b = 1, c = 0;
    int dp = 2;

    for (int i = 2; i <= n; ++i) {
        int new_a = (a + b + c) % 12345;
        int new_b = a;
        int new_c = b;

        dp = (new_a + new_b + new_c) % 12345;
        a = new_a;
        b = new_b;
        c = new_c;
    }

    printf("Number of searched sequences: %d\n", dp);
    return 0;
}
