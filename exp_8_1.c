#include <stdio.h>

int main() {
     /*
    NAME:- HAMMAD RAFI AHMAD KHAN
    CLASS:- COMPS F.Y. DIVISION:- C-3
    UIN:- 251P053
    */
    char str[100];
    int i = 0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
        i++;

    printf("Length = %d", i);
    return 0;
}
