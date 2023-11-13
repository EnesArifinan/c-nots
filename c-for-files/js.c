#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("main.js", "a");

    fprintf(fptr, "console.log('You Hacked')");

    fclose(fptr);
    printf("Hacking is sucses");
    return 0;
}
