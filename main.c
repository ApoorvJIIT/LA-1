#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    printf("Average: %f\n", (double)total/n);
    
}
