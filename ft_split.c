/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:55:06 by zchoo             #+#    #+#             */
/*   Updated: 2025/08/11 14:13:22 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_is_whitespace(char c, char *charset)
{
	int	found;

	found = 0;
	while (*charset && !found)
		found = (c == *charset++);
	return (found);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (ft_is_whitespace(*str, charset))
			str++;
		if (*str == '\0')
			break ;
		while (*str && !ft_is_whitespace(*str, charset))
			str++;
		count++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strndup(char *str, int n)
{
	char	*copy;
	int		i;

	if (!(*str))
		return (NULL);
	copy = malloc(sizeof(char) * (n + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	int		i;
	char	*start;
	char	**arr;

	words = ft_count_words(str, charset);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (ft_is_whitespace(*str, charset))
			str++;
		if (*str == '\0')
			break ;
		start = str;
		while (*str && !ft_is_whitespace(*str, charset))
			str++;
		arr[i] = ft_strndup(start, str - start);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

/* #include <stdio.h>
int main(void)
{
	char *str = "Ao0  Ba CU1 !\nDohoho";
	printf("count words: %d\n", ft_count_words(str, " \n"));
	char *new;
	new = ft_strndup(str, ft_strlen(str));
	if (new != NULL)
	{
		printf("New: %s\n", new);
		free(new);
	}

	char **arr = ft_split(str, " \n");
	if (arr != NULL)
	{
		for (int i = 0; arr[i] != NULL; i++)
		{
			printf("arr[%d]: %s\n", i, arr[i]);
			free(arr[i]);
		}
		free(arr);
	}

	str = "aaabbbaaaccc";
	printf("count words: %d\n", ft_count_words(str, " \n"));
	new = ft_strndup(str, ft_strlen(str));
	if (new != NULL)
	{
		printf("New: %s\n", new);
		free(new);
	}
	arr = ft_split(str, "ab");
	if (arr != NULL)
	{
		for (int i = 0; arr[i] != NULL; i++)
		{
			printf("arr[%d]: %s\n", i, arr[i]);
			free(arr[i]);
		}
		free(arr);
	}
} */