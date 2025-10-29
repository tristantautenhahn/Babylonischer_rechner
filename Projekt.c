#include <stdio.h>
#include <math.h>

int main() {
    int current;
    printf("Zahl in Basis 10: ");
    scanf("%d", &current);
    int result_size = 0;
    while(current > pow(60, ++result_size));
    int result[result_size];

    while(current > 0) {
        result[--result_size] = current % 60;
        current /= 60;
    }

    printf("Zahl in Basis 60: ");
    for(int i = 0; i < sizeof(result)/sizeof(result[0]); i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
