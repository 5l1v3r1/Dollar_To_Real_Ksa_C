#include <stdio.h>
#include <stdlib.h>
void convertrd(float dollar);
int main()
{
    float dollar;
    printf(" Write You To Dollar:");
    scanf("%f",&dollar);
    convertrd(dollar);
    return 0;
}
void convertrd(float dollar)
{
    float saudi = dollar * 3.75;
    printf("\n%.2f Dollar = %2.f Saudi Reyal",dollar,saudi);
    return 0;
}

