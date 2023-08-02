#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
void set_string(char **s, char *to);

#endif /* MAIN_H */