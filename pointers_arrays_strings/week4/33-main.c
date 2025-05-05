#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";
    char s3[] = "Holberton";
    char s4[] = "Holbeerton";
    char s5[] = "Holberton";
    char s6[] = "Holbeerton";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    printf("%d\n", _strcmp(s3, s4));
    printf("%d\n", _strcmp(s4, s3));
    printf("%d\n", _strcmp(s3, s3));
    printf("%d\n", _strcmp(s5, s6));
    printf("%d\n", _strcmp(s6, s5));
    printf("%d\n", _strcmp(s5, s5));
    return (0);
}
