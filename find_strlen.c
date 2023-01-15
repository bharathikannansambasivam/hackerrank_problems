#include <stdio.h>

int strLength(char str[], int index)
{
    static int len = 0;
    if (str[index] == '\0')
        return len;
    len++;
    strLength(str, index + 1);
}
int main()
{
    char str[100];
    int length = 0;
    printf("enter string    ");
    scanf("%s", str);
    length = strLength(str, 0);
    printf("your string length is :%d", length);
    return 0;
}