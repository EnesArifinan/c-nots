#include <stdio.h>


void myFunction(char name[], int age) {

    printf("Hello dear %s you are %d years old\n", name, age); 
}

int myNewFunction(char name[], int age){
    return printf("Hi dear %s , your age is %d years old\n", name, age);
}

int main() {
    myNewFunction("ahmet", 21);
    myNewFunction("ayse",24);
    myNewFunction("zeynep",18);
    myNewFunction("mehmet",16);
    return 0;
}