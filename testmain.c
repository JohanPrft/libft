#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[10];
	char	str2[10];
	int		i;
	int		len;

	len = 10;
	memset(str1, 1, len);
	ft_memset(str2, 2, len);
	i = 0;
	while (i < len + 10)
	{
		printf("memset %i = %u\n", i, str1[i]);
		printf("ft_memset %i = %u\n\n", i, str2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[10];
	char	str2[10];
	int		i;
	int		len;

	len = 10;
	bzero(str1, len);
	ft_bzero(str2, len);
	i = 0;
	while (i < len + 5)
	{
		printf("bzero %i = %c\n", i, str1[i]);
		printf("ft_bzero %i = %c\n\n", i, str2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[6];
	char	dst2[6];
	char	src[]= "merci";
	int		len;

	len = 6;
	memcpy(dst1, src, len);
	ft_memcpy(dst2, src, len);
	printf("memcpy = %s\n", dst1);
	printf("ft_memcpy = %s", dst2);
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[10];
	char	dst2[10];
	char	src[]= "merci";
	int		len;

	len = 6;
	printf("strlcpy = %lu\n", strlcpy(dst1, src, len));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(dst2, src, len));
	printf("strlcpy = %s\n", dst1);
	printf("ft_strlcpy = %s\n", dst2);
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[11] = "1111111111";
	char	dst2[11] = "1111111111";
	char	src[]= "merci";
	int		dstsize;

	dstsize = 10;
	strlcat(dst1, src, dstsize);
	printf("strlcat = %s\n", dst1);
	ft_strlcat(dst2, src, dstsize);
	printf("ft_strlcat = %s", dst2);
	return (0);
	//dstsize = 0 et dst1 n'a pas de '/0' = erreur
}


#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "Cherche dans cette string";
	char	c = '\0';

	printf("strchr = %s\n", strchr(str, (int)c));
	printf("ft_strchr = %s\n", ft_strchr(str, (int)c));
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "Cherche dans cette string";
	char	c = 'c';

	printf("strrchr = %s\n", strrchr(str, (int)c));
	printf("ft_strrchr = %s\n", ft_strrchr(str, (int)c));
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[11] = "s";
	char	str2[11] = "za";
	int		n;

	n = 10;
	printf("strncmp = %d\n", strncmp(str1, str2, n));
	printf("ft_strncmp = %d", ft_strncmp(str1, str2, n));
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "Cherche dans cette string";
	char	c = '\0';
	int		n = 40;

	printf("memchr = %s\n", memchr(str, (int)c, n));
	printf("ft_memchr = %s\n", ft_memchr(str, (int)c, n));
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[20] = "Compare ces strings";
	char	str2[20] = "Compare ces strings";
	int		n;

	n = 0;
	printf("memcmp = %d\n", memcmp(str1, str2, n));
	printf("ft_memcmp = %d", ft_memcmp(str1, str2, n));
	return (0);
}

// #include "libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	char	*res;

// 	if (*needle == '\0')
// 		return ((char *)haystack);
// 	res = NULL;
// 	while (*haystack != '\0' && len > 0)
// 	{
// 		if (*haystack == *needle && ft_strncmp(haystack, needle,
// 				ft_strlen(needle)) == 0 && len >= ft_strlen(needle))
// 			return ((char *)haystack);
// 		haystack++;
// 		len--;
// 	}
// 	return (res);
// }

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	haystack[] = "mississippi";
	char	needle[] = "si";
	int		n;

	n = 5;
	printf("strnstr = %s\n", strnstr(haystack, needle, n));
	printf("ft_strnstr = %s", ft_strnstr(haystack, needle, n));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int	main (void)
{
	char	str[] = " 	  	 -199999991";

	printf("atoi = %d\n", atoi(str));
	printf("ft_atoi = %d", ft_atoi(str));
	return (0);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    char	s[5]="nype";
	char	*cpy1;
	char	*cpy2;
	int		i;

    cpy1 = strdup(s);
	cpy2 = ft_strdup(s);
	i = 0;
	while (i < 5)
		printf("%c ", cpy1[i++]);
	printf("\n");
	i = 0;
	while (i < 5)
		printf("%c ", cpy2[i++]);
    return 0;
}

#include <stdio.h>

int	main(void)
{
	char	*str = "ma string";

	printf("%s\n", ft_substr(str, 0, 10));
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*s1 = "ae ae ae";
	char	*set = "ae";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}

int	main(void)
{
	char	s[] = " Copie ceci  plz ";
	char	c = ' ';
	char	**tab = 0;
	int		i;

	tab = ft_split(s, c);
	i = 0;
	while (tab[i][0])
	{
		printf("tab[%i] :	%s\n", i, tab[i]);
		i++;
	}
	printf("tab[%i] :	%s\n", i, tab[i]);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	n = 0;

	printf("%i est %s", n, ft_itoa(n));
	return (0);
}
