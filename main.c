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
int	main(void)
{
	char	c;

	c = 'a';
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
	return (0);
}
*/
// ISDIGIT
/*
int	main(void)
{
	char	c;

	c = '5';
	printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
	return (0);
}
*/
// ISALNUM
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
	return (0);
}
*/
// ISASCII
/*
int	main(void)
{
	int	c;

	c = -1;
	printf("ft_isascii(%d) = %d\n", c, ft_isascii(c));
	return (0);
}
*/
// ISPRINT
/*
int	main(void)
{
	int	c;

	c = 127;
	printf("ft_isprint(%d) = %d\n", c, ft_isprint(c));
	return (0);
}
*/
// STRLEN
/*
int	main(void)
{
	char	*s;

	s = "Hello";
	printf("ft_strlen(\"%s\") = %zu\n", s, ft_strlen(s));
	return (0);
}
*/
// MEMSET
/*
int	main(void)
{
	char	og[10] = "Socorro";

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
int	main(void)
{
	char	str[10] = "Hello";

	printf("Before: \"%s\" (length: %zu)\n", str, strlen(str));
	ft_bzero(str, 3);
	printf("After bzero(3): \"%s\" (length: %zu)\n", str, strlen(str));
	return (0);
}
*/
// MEMCPY
/*
int	main(void)
{
	char	src[10] = "hola";
	char	dest[10] = "";

	ft_memcpy(dest, src, 4);
	printf("%s\n", dest);
	return (0);
}
*/
// MEMMOVE
/*
int	main(void)
{
	char	b[10] = "hello";

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
	char	buffer[8];
	size_t	cpy;

	char	*source= "Stardew Valley";
	cpy = ft_strlcpy(buffer, source, sizeof(buffer));
	printf("Src is %s \n", source);
	printf("Dest is %s \n", buffer);
	printf("Src is %zu characters long", cpy);
	return(0);
}
*/
// STRLCAT
/*
int	main(void)
{
	char	dst[20] = "Stardew";
	size_t	result;

	result = ft_strlcat(dst, " Valley", sizeof(dst));
	printf("Result: %zu, String: \"%s\"\n", result, dst);
	return (0);
}
*/
// TOUPPER
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("ft_toupper('%c') = '%c'\n", c, ft_toupper(c));
	return (0);
}
*/
// TOLOWER
/*
int	main(void)
{
	char	c;

	c = 'A';
	printf("ft_tolower('%c') = '%c'\n", c, ft_tolower(c));
	return (0);
}
*/
// STRCHR
/*
int	main(void)
{
	char	*str;
	char	*result;

	str = "Hello World";
	result = ft_strchr(str, 'o');
	printf("ft_strchr(\"%s\", 'o') = \"%s\"\n", str, result);
	return (0);
}
*/
// STRRCHR
/*
int	main(void)
{
	char	*str;
	char	*result;

	str = "Hello World";
	result = ft_strrchr(str, 'l');
	printf("ft_strrchr(\"%s\", 'l') = \"%s\"\n", str, result);
	return (0);
}
*/
// STRNCMP
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	int		result;

	s1 = "Hello";
	s2 = "Hello";
	result = ft_strncmp(s1, s2, 5);
	printf("ft_strncmp(\"%s\", \"%s\") = %d\n", s1, s2, result);
	return (0);
}
*/
// MEMCHR
/*
int	main(void)
{
	char	*str;
	char	*result;

	str = "Hello World";
	result = ft_memchr(str, 'W', 11);
	printf("\"%s\" = \"%s\"\n", str, result);
	return (0);
}
*/
// MEMCMP
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	printf("\"%s\" - \"%s\" = %d\n", s1, s2, ft_memcmp(s1, s2, 5));
	return (0);
}
*/
// STRNSTR
/*
int	main(void)
{
	char	*haystack;
	char	*needle;
	char	*result;

	haystack = "Hello World";
	needle = "o";
	result = ft_strnstr(haystack, needle, 11);
	printf("\"%s\", \"%s\" = \"%s\"\n", haystack, needle, result);
	return (0);
}
*/
// ATOI
/*
int	main(void)
{
	char	*str;

	str = "42";
	printf("\"%s\" = %d\n", str, ft_atoi(str));
	return (0);
}
*/
// CALLOC
/*
int	main(void)
{
	char	*str;

	str = (char *)ft_calloc(5, sizeof(char));
	printf("String after calloc: \"%s\" (length: %zu)\n", str, strlen(str));
	free(str);
	return (0);
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
int	main(void)
{
	char	*s1;
	char	*dup;

	s1 = "Hello, World!";
	dup = ft_strdup(s1);
	printf("Original: %s\n", s1);
	printf("Duplicate: %s\n", dup);
	free(dup);
	return (0);
}
*/
// STRJOIN
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*joined;

	s1 = "Hello, ";
	s2 = "World!";
	joined = ft_strjoin(s1, s2);
	printf("Joined String: %s\n", joined);
	free(joined);
	return (0);
}
*/
// STRTRIM
/*
int	main(void)
{
	char	*s1;
	char	*set;
	char	*trimmed;

	s1 = "  Hello, World!  ";
	set = " ";
	trimmed = ft_strtrim(s1, set);
	printf("Trimmed String: '%s'\n", trimmed);
	free(trimmed);
	return (0);
}
*/
// SPLIT
/*
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hola Mundo Adios", ' ');
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
int	main(void)
{
	int		num;
	char	*str;

	num = -12345678;
	str = ft_itoa(num);
	printf("ft_itoa(%d) = \"%s\"\n", num, str);
	return (0);
}
*/
// STRMAPI
/*
char	ft_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
int	main(void)
{
	char	*a;
	char	*new;

	a = "h0l iwis";
	new = ft_strmapi(a, ft_upper);
	printf("Original String: %s\n", a);
	printf("Resulting String: %s\n", new);
	free(new);
	return (0);
}
*/
// STRITERI
/*
void	ft_upper_test(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char	str[] = "holiwis 123";

	printf("Original String: %s\n", str);
	ft_striteri(str, ft_upper_test);
	printf("Resulting String: %s\n", str);
	return (0);
}
*/
// LSTNEW
/*
int	main(void)
{
	t_list	*node_new;
	char	*str;

	str = "Hola Mundo Adios";
	node_new = ft_lstnew(str);
	printf("Content: %s\n", (char *)node_new->content);
	printf("Next: %p\n", (void *)node_new->next);
	free(node_new);
	return (0);
}
*/
// LSTADDFRONT
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*current;

	list = NULL;
	node1 = ft_lstnew("Hola");
	node2 = ft_lstnew("Mundo");
	node3 = ft_lstnew("Adios");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	printf("List:\n");
	current = list;
	while (current)
	{
		printf("- %s\n", (char *)current->content);
		current = current->next;
	}
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/

// LSTSIZE
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	list = NULL;
	printf("Starting list -> size: %d\n", ft_lstsize(list));
	node1 = ft_lstnew("Hola");
	node2 = ft_lstnew("Mundo");
	node3 = ft_lstnew("Adios");
	ft_lstadd_front(&list, node1);
	printf("List with 1 nodes -> size: %d\n", ft_lstsize(list));
	ft_lstadd_front(&list, node2);
	printf("List with 2 nodes -> size: %d\n", ft_lstsize(list));
	ft_lstadd_front(&list, node3);
	printf("List with 3 nodes -> size: %d\n", ft_lstsize(list));
	printf("Head content: %s\n", (char *)list->content);
	free(node3);
	free(node2);
	free(node1);
	return (0);
}
*/
// LSTLAST
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*last;

	node1 = ft_lstnew("first");
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	last = ft_lstlast(nodo1);
	printf("Last node content: %s\n", (char *)last->content);
	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}
*/
// LSTADDBACK
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	list = NULL;
	node1 = ft_lstnew("first");
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	printf("List content:\n");
	printf("%s\n", (char *)list->content);
	printf("%s\n", (char *)list->next->content);
	printf("%s\n", (char *)list->next->next->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/
// LSTDELONE
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(strdup("first"));
	node2 = ft_lstnew(strdup("second"));
	node3 = ft_lstnew(strdup("third"));
	node1->next = node2;
	node2->next = node3;
	printf("Before deleting: ");
	printf("%s -> %s -> %s\n",
		(char *)node1->content,
		(char *)node2->content,
		(char *)node3->content);
	ft_lstdelone(node2, free);
	node1->next = node3;
	printf("After deleting 'second': ");
	printf("%s -> %s\n",
		(char *)node1->content,
		(char *)node3->content);
	ft_lstdelone(node1, free);
	ft_lstdelone(node3, free);
	return (0);
}
*/
// LSTCLEAR
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(strdup("first"));
	node2 = ft_lstnew(strdup("second"));
	node3 = ft_lstnew(strdup("third"));
	node1->next = node2;
	node2->next = node3;
	list = node1;
	printf("Before ft_lstclear: %s -> %s -> %s\n",
		(char *)list->content,
		(char *)list->next->content,
		(char *)list->next->next->content);
	ft_lstclear(&list, free);
	printf("After ft_lstclear: ");
	if (list == NULL)
		printf("NULL ✓\n");
	else
		printf("ERROR: list is NOT NULL\n");
	return (0);
}
*/
// LSTITER
/*
void	to_upper(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	char	str1[] = "hola";
	char	str2[] = "mundo";
	char	str3[] = "adios";

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	node1->next = node2;
	node2->next = node3;
	printf("Before ft_lstiter: ");
	printf("%s -> %s -> %s\n", str1, str2, str3);
	ft_lstiter(node1, to_upper);
	printf("After ft_lstiter: ");
	printf("%s -> %s -> %s\n", str1, str2, str3);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/
// LSTMAP
/*
void	*to_upper(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *)content;
	new_str = strdup(str);
	i = 0;
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
		i++;
	}
	return (new_str);
}

int	main(void)
{
	t_list	*original;
	t_list	*new_list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(strdup("a"));
	node2 = ft_lstnew(strdup("b"));
	node3 = ft_lstnew(strdup("c"));
	node1->next = node2;
	node2->next = node3;
	original = node1;
	printf("Before ft_lstmap: ");
	printf("%s -> %s -> %s\n", (char *)original->content,
		(char *)original->next->content, (char *)original->next->next->content);
	new_list = ft_lstmap(original, to_upper, free);
	printf("After ft_lstmap: ");
	printf("%s -> %s -> %s\n", (char *)new_list->content,
		(char *)new_list->next->content, (char *)new_list->next->next->content);
	ft_lstclear(&original, free);
	ft_lstclear(&new_list, free);
	return (0);
}
*/