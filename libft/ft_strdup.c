/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalueva <abalueva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:01:54 by abalueva          #+#    #+#             */
/*   Updated: 2019/10/12 01:05:32 by abalueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(char *str)
{
	int		i;
	char	*new_str;

	i = ft_strlen(str);
	if (!(new_str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strcpy(new_str, str);
	new_str[i] = '\0';
	return (new_str);
}
