/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:38:50 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/26 14:57:30 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;

	while (*str != c)
	{
		if(*str == '\0')
			return(0);
		str++;
	}
	return (str);
}

/*int main()
{
	char *target = "hello world!";
	int	lf = 'a';

	printf("%s\n",ft_strchr(target, lf));
}
*/
