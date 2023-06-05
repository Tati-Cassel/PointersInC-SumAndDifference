#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) 
{
    int sm, dif;
    
    sm = (*a + *b);
    dif = abs(*a - *b);

    *a = sm;
    *b = dif;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
