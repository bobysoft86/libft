/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:35:03 by roberodr          #+#    #+#             */
/*   Updated: 2023/01/18 16:15:46 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{	size_t i;
	size_t n;

	n = 0;
	i = 0;

if( needle[i] == '\0')
return ((char *) haystack);
	
while( haystack[i] != '\0' && i < len )
	{
		while(haystack[i] == needle[n] && i < len && haystack[i] != '\0')
		{
			i++;
			n++;
		}
			if (needle[n] != '\0' && n != 0)
			{
				n = 0;
				i--;
			}
		if( needle[n] == '\0')
		return((char *) &haystack[i - n]);
		i++;				
	}
return (NULL);
}
/*

	size_t i;
	size_t n;

	n = 0;
	i = 0;

if( needle[i] == '\0')
return ((char *) haystack);

while( i < len && haystack[i] != '\0')
{
	if(!ft_strncmp( haystack, needle, len))
		i++;
		len--;
		return ((char *) haystack);
}
return (NULL);
*/
