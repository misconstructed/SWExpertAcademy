
#include <stdio.h>
#include <stdlib.h>

int t;
int n;

int main(void) {
    scanf("%d", &t);
    int* arr = (int*)malloc(sizeof(int) * t);
    for(int i = 0; i < t; i++) {
        int sum = 0;
        for(int j = 0; j < 10; j++) {
            scanf("%d", &n);
            if(n % 2 == 1) {
                sum += n;
            }
        }
        arr[i] = sum;
    }
    for(int i = 0; i < t; i++) {
        printf("#%d %d\n", i+1, arr[i]);
    }
}

