/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminasya <sminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:42:55 by sminasya          #+#    #+#             */
/*   Updated: 2022/03/15 19:40:53 by sminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*find;

	find = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			find = (char *)s;
		}
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (find);
}
