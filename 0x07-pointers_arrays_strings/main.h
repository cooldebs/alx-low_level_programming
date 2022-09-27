1 #ifnef MAIN.H
2 #define MAIN.H
3
4 char *_memset(char *s, char b, unsigned int n);
5 char *_memcpy(char *dest, char *src, unsigned int n);
6 char *_strchr(char *s, char c);
7 unsigned int _strspn(char *s, char *accept);
8 char *_strpbrk(char *s, char *accept);
9 char *_strstr(char *haystack, char *needle);
10 void print_chessboard(char (*a)[8]);
11 void print_diagsums(int *a, int size);
12 void set_string(char **s, char *to);
13 int _putchar(char c);
14
15 #endif
