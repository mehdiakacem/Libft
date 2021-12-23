/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:15:59 by makacem           #+#    #+#             */
/*   Updated: 2021/12/17 11:43:36 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ptr;
	char	*pstart;

	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		ptr = malloc(ft_strlen(s));
	else
		ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	pstart = ptr;
	i = start;
	while (s[i] != '\0' && (len > 0) && i < (int)ft_strlen(s))
	{
		*ptr = s[i];
		ptr++;
		i++;
		len--;
	}
	*ptr = '\0';
	return (pstart);
}
