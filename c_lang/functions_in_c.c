#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    int numbers[3];
    
    numbers[0] = b;
    numbers[1] = c;
    numbers[2] = d;
    
    for (int i = 0; i < 3; i++)
        if (numbers[i] > max)
            max = numbers[i];
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
