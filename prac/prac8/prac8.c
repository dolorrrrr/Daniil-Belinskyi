#include <stdio.h>
#include <string.h>

int main(void){
    char str[15]; 
    int res = 1, numSameLetters = 1;
    printf("Input a word: ");
    scanf("%s", str);
    size_t length = strlen(str);

    for(int i = 0; i < length-1; i++){
        for(int j = i+1; j < length; j++){
            if(str[i] == str[j]){
                numSameLetters++;
            }
        }
    }
    for (int i = 1; i <= length; ++i) {
        res *= i;
    }

    printf("Amount of anagrams is: %d\n", res/numSameLetters);
    
    return 0;
}

int age = 0;