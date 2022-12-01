/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminasya <sminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:44:33 by sminasya          #+#    #+#             */
/*   Updated: 2022/03/11 18:42:59 by sminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	n;

	if (!b)
		return (NULL);
	n = 0;
	while (n < len)
	{
		*(unsigned char *)(b + n) = (unsigned char)c;
		n++;
	}
	return (b);
}
