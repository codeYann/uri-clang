#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= 10; i = i + 1) {
        printf("%d x %d = %d\n", i, N, i * N);
    }       

    return 0;
}