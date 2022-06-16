#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *sr1, char *sr2);
void reverse_array(int *a, int n);
char *leet(char *str);
char *rot13(char *str);
void print_buffer(char *b, int size);

#endif
