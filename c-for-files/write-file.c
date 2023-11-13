#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("filename.txt","w");
    fprintf(fptr, "Hi this is manupulating a file with c programing languice");
    fclose(fptr);
    printf("Writing is sucsesful!");
    return 0;
}
