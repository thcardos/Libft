/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcardos <thcardos@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:51:10 by thcardos          #+#    #+#             */
/*   Updated: 2025/11/20 15:51:14 by thcardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// ISALPHA
/*
int main(void)
{
	char c;

	c = 'a';
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));

	return (0);
}
*/
// ISDIGIT
/*
int main(void)
{
	char c;

	c = '5';
	printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));

	return (0);
}
*/
// ISALNUM
/*
int main(void)
{
	char c;

	c = 'a';
	printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));

	return (0);
}
*/
// ISASCII
/*
int main(void)
{
	int c;

	c = -1;
	printf("ft_isascii(%d) = %d\n", c, ft_isascii(c));

	return (0);
}
*/
// ISPRINT
/*
int main(void)
{
	int c;

	c = 127;
	printf("ft_isprint(%d) = %d\n", c, ft_isprint(c));

	return (0);
}
*/
// STRLEN
/*
int main(void)
{
	char *s;

	s = "Hello";
	printf("ft_strlen(\"%s\") = %zu\n", s, ft_strlen(s));

	return (0);
}
*/
// MEMSET
/*
int main(void)
{
	char    og[10] = "Socorro";
	ft_memset(og, 'O', 4);
	printf("%s\n", og);
	return (0);
	//crea una cadena "Socorro".
	//cambia los primeros 4 caracteres por "O"
	//imprime XXXXrro
}
*/
// BZERO
/*
int main(void)
{
	char str[10] = "Hello";

	printf("Before: \"%s\" (length: %zu)\n", str, strlen(str));
	ft_bzero(str, 3);
	printf("After bzero(3): \"%s\" (length: %zu)\n", str, strlen(str));

	return (0);
}
*/
// MEMCPY
/*
int main(void)
{
	char src[10] = "hola";
	char dest[10] = "";

	ft_memcpy(dest, src, 4);
	printf("%s\n", dest);
	return (0);
}
*/
// MEMMOVE
/*
int main(void)
{
	char b[10] = "hello";

	ft_memmove(b + 2, b, 3);
	write(1, b, 6);
	write(1, "\n", 1);
	return (0);
}
*/
// STRLCPY
/*
int	main(void)
{
	char	*source= "Stardew Valley";
	char	buffer[8];
	size_t cpy = ft_strlcpy(buffer, source, sizeof(buffer));
	printf("Src is %s \n", source);
	printf("Dest is %s \n", buffer);
	printf("Src is %zu characters long", cpy);
	return(0);
}
*/
// STRLCAT
/*
int main(void)
{
	char dst[20] = "Stardew";
	size_t result;

	result = ft_strlcat(dst, " Valley", sizeof(dst));
	printf("Result: %zu, String: \"%s\"\n", result, dst);

	return (0);
}
*/
// TOUPPER
/*
int main(void)
{
	char c;

	c = 'a';
	printf("ft_toupper('%c') = '%c'\n", c, ft_toupper(c));

	return (0);
}
*/
// TOLOWER
/*
int main(void)
{
	char c;

	c = 'A';
	printf("ft_tolower('%c') = '%c'\n", c, ft_tolower(c));

	return (0);
}
*/
// STRCHR
/*
int main(void)
{
	char *str = "Hello World";
	char *result;

	result = ft_strchr(str, 'o');
	printf("ft_strchr(\"%s\", 'o') = \"%s\"\n", str, result);

	return (0);
}
*/
// STRRCHR
/*
int main(void)
{
	char *str = "Hello World";
	char *result;

	result = ft_strrchr(str, 'l');
	printf("ft_strrchr(\"%s\", 'l') = \"%s\"\n", str, result);

	return (0);
}
*/
// STRNCMP
/*
int main(void)
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	int result;

	result = ft_strncmp(s1, s2, 5);
	printf("ft_strncmp(\"%s\", \"%s\") = %d\n", s1, s2, result);

	return (0);
}
*/
// MEMCHR
/*
int main(void)
{
	char *str = "Hello World";
	char *result;

	result = ft_memchr(str, 'W', 11);
	printf("\"%s\" = \"%s\"\n", str, result);

	return (0);
}
*/
// MEMCMP
/*
int main(void)
{
	char *s1 = "Hello";
	char *s2 = "Hello";

	printf("\"%s\" - \"%s\" = %d\n", s1, s2, ft_memcmp(s1, s2, 5));

	return (0);
}
*/
// STRNSTR
/*
int main(void)
{
	char *haystack = "Hello World";
	char *needle = "o";
	char *result;

	result = ft_strnstr(haystack, needle, 11);
	printf("\"%s\", \"%s\" = \"%s\"\n", haystack, needle, result);

	return (0);
}
*/
// ATOI
/*
int main(void)
{
	char *str;

	str = "42";
	printf("\"%s\" = %d\n", str, ft_atoi(str));

	return 0;
}
*/
// CALLOC
/*
int main(void)
{
	char *str;

	str = (char *)ft_calloc(5, sizeof(char));

	printf("String after calloc: \"%s\" (length: %zu)\n", str, strlen(str));

	free(str);
	return 0;
}
*/

// CALLOC (lo del NULL)
/*
int	main(void)
{
	void	*ptr;

	printf("Test: ft_calloc(0, 10)\n");
	ptr = ft_calloc(0, 10);

	if (ptr == NULL)
		printf("Returned NULL\n");
	else
	{
		printf("Returned a valid pointer: %p\n", ptr);
		free(ptr);
	}

	printf("Test: ft_calloc(5, 10)\n");
	ptr = ft_calloc(5, 10);

	if (ptr == NULL)
		printf("Error\n");
	else
	{
		printf("Valid pointer: %p\n", ptr);
		free(ptr);
	}

	return (0);
}
*/
// STRDUP
/*
int main(void)
{
	char *s1 = "Hello, World!";
	char *dup;
	dup = ft_strdup(s1);
	printf("Original: %s\n", s1);
	printf("Duplicate: %s\n", dup);
	free(dup);
	return 0;
}
*/
// STRJOIN
/*
int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "World!";
	char *joined;
	joined = ft_strjoin(s1, s2);
	printf("Joined String: %s\n", joined);
	free(joined);
	return 0;
}
*/
// STRTRIM
/*
int main(void)
{
	char *s1 = "  Hello, World!  ";
	char *set = " ";
	char *trimmed;
	trimmed = ft_strtrim(s1, set);
	printf("Trimmed String: '%s'\n", trimmed);
	free(trimmed);
	return 0;
}
*/
// SPLIT
/*
int main(void)
{
    char	**result;
    int		i;

    result = ft_split("hola,mundo,test", ',');
    i = 0;
    while (result && result[i])
    {
        printf("result[%d] = \"%s\"\n", i, result[i]);
        i++;
    }
    return (0);
}
*/
// ITOA
/*
int main(void)
{
	int     num;
	char    *str;
	num = -12345678;
	str = ft_itoa(num);
	printf("ft_itoa(%d) = \"%s\"\n", num, str);
	return (0);
}
*/
//STRMAPI


