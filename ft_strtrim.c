/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:19:49 by flee              #+#    #+#             */
/*   Updated: 2022/06/27 12:19:51 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char			*new;
	unsigned int	end;

	if (!str)
		return (NULL);
	while (*str && ft_strchr(set, *str))
		str++;
	if (*str == '\0')
		return (ft_strdup(""));
	end = ft_strlen(str);
	while (end != 0 && ft_strchr(set, str[end]))
		end--;
	new = ft_substr((char *)str, 0, end + 1);
	if (!new)
		return (NULL);
	return (new);
}
