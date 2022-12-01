/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminasya <sminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:41:16 by sminasya          #+#    #+#             */
/*   Updated: 2022/03/15 16:01:57 by sminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short int	ft_len(int num)
{
	short int	count;

	count = 1;
	num /= 10;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				digits;
	unsigned int	number;

	number = n;
	digits = ft_len(n);
	if (n < 0)
	{
		number = n * -1;
		digits++;
	}
	else
		number = n;
	str = (char *)malloc(digits + 1);
	if (!str)
		return (NULL);
	*(str + digits) = '\0';
	while (digits--)
	{
		*(str + digits) = (number % 10) + 48;
		number /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
