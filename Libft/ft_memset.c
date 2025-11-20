/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcardos <thcardos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:24:49 by thcardos          #+#    #+#             */
/*   Updated: 2025/11/12 17:38:53 by thcardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *ptr;
    size_t  i;

    ptr = (unsigned char*)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
/*
#include <stdio.h>

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
