/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:19:11 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/22 18:00:48 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	unsigned int	i;
	unsigned char	*s1_b;
	unsigned char	*s2_b;

	i = 0;
	s1_b = (unsigned char *)s1;
	s2_b = (unsigned char *)s2;
	while (i < size && *s1_b && *s2_b)
	{
		if (*s1_b != *s2_b)
			return (*s1_b - *s2_b);
		s1_b++;
		s2_b++;
		i++;
	}
	if (i < size)
		return (*s1_b - *s2_b);
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