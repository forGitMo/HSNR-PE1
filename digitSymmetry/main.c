#include <stdio.h>
char* digit_symmetry(int n){
    char *result;
    int original_n = n;
    int reversed_n = 0;

    while (n > 0){
        reversed_n = reversed_n * 10 + n % 10;
        n/= 10;
    }

    if(original_n == reversed_n){
        result = "ja";
    }else{
        result = "nein";
    }

    return result;
}


int main() {
    int n = 12321;
    printf("%s",digit_symmetry(n));
    return 0;
}
