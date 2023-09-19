#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int integer1, integer2;
    float float1, float2;
    
    scanf("%d %d", &integer1, &integer2);
    scanf("%f %f", &float1, &float2);
    
    printf("%d %d\n", integer1+integer2, integer1-integer2);
    printf("%.1f %.1f\n", float1+float2, float1-float2);
    
    return 0;
}
