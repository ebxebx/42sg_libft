/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:19:11 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/19 17:33:42 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && *s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		i++;
	}
	if (i < size)
		return (*s1 - *s2);
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "ABC";
// 	s2 = "ABCZ";
// 	printf("ft_strcmp for \"%s\", \"%s\": %d\n",
// 		"AA", "AA", ft_strcmp("AA", "AA"));
// 	printf("ft_strcmp for \"%s\", \"%s\": %d\n",
// 		s1, s2, ft_strcmp(s1, s2));

// 	printf("strcmp for \"%s\", \"%s\": %d\n",
// 		"AA", "AA", strcmp("AA", "AA"));
// 	printf("strcmp for \"%s\", \"%s\": %d\n",
// 		s1, s2, strcmp(s1, s2));

// 	printf("\n");
// 	return (0);
// }