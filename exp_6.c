#include <stdio.h>

void counter() {
    /*
    NAME:- HAMMAD RAFI AHMAD KHAN
    CLASS:- COMPS F.Y. DIVISION:- C-3
    UNI:- 251P053
    */
    static int c = 0;   // static retains value
    c++;
    printf("Function called %d times\n", c);
}

int main() {
    for(int i=0; i<5; i++)
        counter();
    return 0;
}
