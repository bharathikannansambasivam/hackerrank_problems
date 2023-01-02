#include<stdio.h>
#include<string.h>

int main(){
    printf("enter the str \t");
    reverse();
    return 0;
}
void reverse(){
char c;
scanf("%c",&c);

if(c != '\n'){
    reverse();
    printf("%c",c);
}
}