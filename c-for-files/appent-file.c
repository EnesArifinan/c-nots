#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("filename.txt", "a");

    fprintf(fptr, "\nHi agein me :)");

    fclose(fptr);
    return 0;
}
