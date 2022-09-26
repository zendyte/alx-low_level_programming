#ifndef MAIN_H
#define MAIN_H

/* _strcat - pointerFunc that concatenates @src && @dest overwirting the '\0'. */
char *_strcat(char *dest, char *src);

/* _strncat - pointerFunc that concatenates @src && @dest overwriting the '\0' */
char *_strncat(char *dest, char *src, int n);

/* _strncpy - pointerFunc that copies @src to @dest including the '\0' */
char *_strncpy(char *dest, char *src, int n);

/* _strcmp - pointerFunc that compoares two strings @s1 && @s2 */
int _strcmp(char *s1, char *s2);

/* reverse_array - pointerFunc that reverses the content of an array @a of integers.*/
void reverse_array(int *a, int n);
#endif /* MAIN_H */