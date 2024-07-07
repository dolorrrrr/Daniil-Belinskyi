/*
Скільки можна сформувати чисел із р розрядів використовуючи цифри 5 та 9,
в яких три однакові цифри не стоять поруч?
Вхідні дані: ціле число р(р<=30); 
Вихідні дані: кількість чисел із р розрядів.
*/

#include <stdio.h>

int main(void)
{
    int p, res;
    printf("Input p: ");
    scanf("%d", &p);

    int end5[31], end55[31], end9[31], end99[31];
    
    end5[1] = 1;
    end55[1] = 0;
    end9[1] = 1;
    end99[1] = 0;
    
    if(p == 1){
        printf("Result is: 2");
        return 0;
    }

    for(int i = 2; i <= p; i++){
        end5[i] = end9[i - 1] + end99[i - 1];
        end55[i] = end5 [i - 1];
        end9[i] = end5[i - 1] + end55[i - 1];
        end99[i] = end9[i - 1];
    }
    res = end5[p] + end55[p] + end9[p] + end99[p];
    printf("Result is: %d", res);

    return 0;
}