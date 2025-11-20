/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcardos <thcardos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:24:16 by thcardos          #+#    #+#             */
/*   Updated: 2025/11/20 15:24:21 by thcardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *a;
    unsigned char   *b;
    size_t  i;

    a = (unsigned char*)dest;
    b = (unsigned char*)src;

    while(i < n)
    {
        if(dest < src)
        {
            i = 0;
            a[i] = b[i];
            i++;
        }
        if(dest > src)
        {
            i = n-1;
            a[i] = b[i];
            i++;
        }
    }
    return (dest);
}