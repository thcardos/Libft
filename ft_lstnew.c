/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcardos <thcardos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:06:42 by thcardos          #+#    #+#             */
/*   Updated: 2025/12/16 19:06:53 by thcardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *node;
    node = malloc(sizeof(t_list *));
    node->content=content;
    node->next=NULL;
    return (node);
}

int main(){
    new->next = primer_node_de_la_lista_que_me_han_dado;

    ultimo_nodo_de_la_lista_que_me_han_dado->next = new;
}


t_list  *ft_lstnew(void *content_of_the_new_node)
{
    t_list  *new_node;
    new_node = malloc(sizeof(t_list *));
    if (!new_node)
        return (NULL);
    new_node->content=content_of_the_new_node;
    new_node->next=NULL;
    return (new_node);
}