#include <stdio.h>

int main() {
    /*
    NAME:- HAMMAD RAFI AHMAD KHAN
    CLASS:- COMPS F.Y. DIVISION:- C-3
    UIN:- 251P053
    */
    int a, b, *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    printf("Sum = %d", (*p + *q));
    return 0;
}
