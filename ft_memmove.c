/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminasya <sminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:12:29 by sminasya          #+#    #+#             */
/*   Updated: 2022/03/11 16:19:16 by sminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*temp;

	temp = (char *)malloc(sizeof(char) * len);
	if (!dst || !src)
		return (NULL);
	if (!temp)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		*(temp + i) = *(const char *)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(char *)(dst + i) = *(temp + i);
		i++;
	}
	free(temp);
	return (dst);
}
