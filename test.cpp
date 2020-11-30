#include <stdio.h>
int main(void)
{
    int count;
    printf("this%n is a test\n", &count);
    printf("%d", count);
    return 0;
}