#include <stdio.h>

int max(int n, int *s){
    int max = 0;
    printf("array:  {");
    for(int i = 0; i < n; i++){
        printf("%d", s[i]);
        if(i < n-1)printf(", ");
        if(s[i] > max) max = s[i];
    }
    printf("}");
    printf("\n\n");
    return max;
}


int main() {
    int n = 5;
    int s[255]= {-1,2,3,4,-5};

    printf("max value: %d", max(n, &s));

    return 0;
}
