/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminasya <sminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:39:10 by sminasya          #+#    #+#             */
/*   Updated: 2022/03/14 17:01:17 by sminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res_d;
	size_t	res_s;

	i = ft_strlen(dst);
	j = 0;
	res_d = ft_strlen(dst);
	res_s = ft_strlen(src);
	if (dstsize < 1)
		return (res_s + dstsize);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < res_d)
		return (res_s + dstsize);
	else
		return (res_d + res_s);
}
