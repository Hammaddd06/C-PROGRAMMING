#include <stdio.h>

int main() {
    /*
    NAME:- HAMMAD RAFI AHMAD KHAN
    CLASS:- COMPS F.Y. DIVISION:- C-3
    UIN:- 251P053
    */
    char str[100];
    int i, j;

    printf("Enter string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++);
    i--;

    j = 0;
    while(j < i) {
        if(str[j] != str[i]) {
            printf("Not Palindrome");
            return 0;
        }
        j++;
        i--;
    }

    printf("Palindrome");
    return 0;
}
