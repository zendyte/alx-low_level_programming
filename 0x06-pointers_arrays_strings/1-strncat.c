/**
 * _strncat - pointerFunc that concatenates @src && @dest including the '\0'.
 * @src: soucre
 * @dest: destination
 * @n: array size/lenght to be pass
 * @ref: man strncat
 *
 * Return: @dest (onSuccess)
 */

int _strlen(char *s);

char *_strncat(char *dest, char *src, int n)
{
    int i, dest_len;
    dest_len = _strlen(dest);

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return dest;
}

int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}