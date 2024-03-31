#include  <stdio.h>

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int count = 0;
    for(int i = 0; i < 5; i++) {
        count += a[i];
    }
    printf("Summa massiva: %d", count);
    return 0;
}
