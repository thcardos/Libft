/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcardos <thcardos@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:33:00 by thcardos          #+#    #+#             */
/*   Updated: 2025/12/03 15:33:03 by thcardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  oglen;
    size_t sublen;
    size_t  a;

    oglen = ft_strlen(s);
    a = oglen - start;
    sublen = 0;
	if (!s)
		return (NULL);
    if (start >= oglen)
        return (ft_strdup(""));
    if (len <)
}
