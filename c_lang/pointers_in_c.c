#include <stdio.h>

// Updates the value of the memory address a and b with sum and absolute difference of a and b.
void update(int *a,int *b) {
    int sum = *a + *b;
    int abs_diff = *a > *b ? *a - *b : *b - *a;
    *a = sum;
    *b = abs_diff;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
