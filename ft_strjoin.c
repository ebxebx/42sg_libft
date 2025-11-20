/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:04:53 by zchoo             #+#    #+#             */
/*   Updated: 2025/08/12 10:02:52 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (dest);
}

int	ft_calc_total_size(int size, char **strs)
{
	int	i;
	int	total_size;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		if (strs[i])
			total_size += ft_strlen(strs[i]);
		i++;
	}
	return (total_size);
}

void	loop_concat_sep(int size, char **strs, char *sep, char *str_joined)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (strs[i])
		{
			ft_strcpy(str_joined, strs[i]);
			str_joined += ft_strlen(strs[i]);
			if (i < size - 1)
			{
				ft_strcpy(str_joined, sep);
				str_joined += ft_strlen(sep);
			}
		}
		i++;
	}
	*str_joined = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*str_joined;
	char	*temp;

	total_size = ft_calc_total_size(size, strs) + (size - 1) * ft_strlen(sep);
	if (total_size < 0)
		total_size = 0;
	str_joined = malloc((total_size + 1) * sizeof(char));
	if (!str_joined)
		return (NULL);
	temp = str_joined;
	loop_concat_sep(size, strs, sep, str_joined);
	return (temp);
}

/* #include <stdio.h>
int main(void)
{
    char *result;

    // Test 1: Normal case (already tested)
    char *strs1[] = {"Hi", "Haha", "LOL"};
    result = ft_strjoin(3, strs1, ", ");
    printf("Test 1: %s\n", result ? result : "NULL");
    free(result);

    // Test 2: Empty array
    char *strs2[] = {};
    result = ft_strjoin(0, strs2, ", ");
    printf("Test 2: %s\n", result ? result : "NULL");
    free(result);

    // Test 3: Single string
    char *strs3[] = {"Hello"};
    result = ft_strjoin(1, strs3, ", ");
    printf("Test 3: %s\n", result ? result : "NULL");
    free(result);

    // Test 4: Empty strings
    char *strs4[] = {"", "Hello", ""};
    result = ft_strjoin(3, strs4, ", ");
    printf("Test 4: %s\n", result ? result : "NULL");
    free(result);

    // Test 5: Empty separator
    result = ft_strjoin(3, strs1, "");
    printf("Test 5: %s\n", result ? result : "NULL");
    free(result);

    // Test 6: NULL string in strs (requires NULL check in ft_strjoin)
    char *strs6[] = {NULL, "Haha", "LOL"};
    result = ft_strjoin(3, strs6, ", ");
    printf("Test 6: %s\n", result ? result : "NULL");
    free(result);

    // Test 7: Single empty string
    char *strs7[] = {""};
    result = ft_strjoin(1, strs7, ", ");
    printf("Test 7: %s\n", result ? result : "NULL");
    free(result);

    // Test 8: Non-ASCII characters
    char *strs8[] = {"Héllo", "Wørld"};
    result = ft_strjoin(2, strs8, "🔥");
    printf("Test 8: %s\n", result ? result : "NULL");
    free(result);

    return (0);
} */