#include <stdio.h>
#include <string.h>

int main(){
    printf("HELLO WORLD!, THIS IS A SHOWCASE OF INPUT AND OUTPUT\n");

    char buffer[256];
    printf(">> ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("you said: %s\n", buffer);
    return 0;
}