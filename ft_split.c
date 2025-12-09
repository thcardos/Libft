/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcardos <thcardos@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:25:35 by thcardos          #+#    #+#             */
/*   Updated: 2025/12/09 18:25:39 by thcardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    char    **result;
    size_t  i;
    size_t  j;
    size_t  word_count;
    if (!s)
        return (NULL);
    word_count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            word_count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    result = malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > start)
            result[j++] = ft_substr(s, start, i - start);
    }
    result[j] = NULL;
    return (result);
}
