/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcardos <thcardos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:09:36 by thcardos          #+#    #+#             */
/*   Updated: 2025/12/11 18:09:40 by thcardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  len;
    size_t  i;
    char    *new;
    i = 0;

    if(!s || !f)
        return (NULL);
    len = ft_strlen(s);
    new = malloc((ft_strlen(s) + 1) * sizeof(char));
    while(s[i])
    {
        ft_strlcpy(new, &s[i], (ft_strlen(s) + 1));
    }
}