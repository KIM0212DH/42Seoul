/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dokim2 <dokim2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:47:23 by dokim2            #+#    #+#             */
/*   Updated: 2022/05/16 18:19:48 by dokim2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_startcheck(void)
{
	char	*rtv;

	rtv = malloc(sizeof(char));
	if (rtv == 0)
		return (NULL);
	rtv[0] = '\0';
	return (rtv);
}

static int	lencheck(char const *s, unsigned int start, size_t len)
{
	if ((ft_strlen(s) - start) < len)
		return ((ft_strlen(s) - start));
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (ft_strlen(s) < start)
		return (ft_startcheck());
	sub = (char *)malloc(sizeof(char) * (lencheck(s, start, len) + 1));
	if (sub == 0)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
