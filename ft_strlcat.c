/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcardos <thcardos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:32:53 by thcardos          #+#    #+#             */
/*   Updated: 2025/11/26 19:32:58 by thcardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len;
    size_t  i;

    len = ft_strlen(dst);
    i = 0;
    if (size > len)
    {
        while (i < size - len - 1 && src[i] != '\0')
        {
            dst[len + i] = src[i];
            i++;
        }
        dst[len + i] = '\0';
    }
    return (len + ft_strlen(src));
}
