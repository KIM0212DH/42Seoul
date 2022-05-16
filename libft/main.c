/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dokim2 <dokim2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:08:35 by dokim2            #+#    #+#             */
/*   Updated: 2022/04/01 15:07:41 by dokim2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
int	main()
{
	char	*src1 = "123456";
	char	dst1[20];
	size_t	ret1 = ft_strlcpy(dst1, src1, 8);
	int	i = 0;
	while (dst1[i] != '\0')
	{
		write(1, &dst1[i], 1);
		i++;
	}
	write(1,"\n",1);
	printf("%zu\n", ret1);

	i = 0;
	char    *src2 = "123456";
	char    dst2[20];
	size_t  ret2 = strlcpy(dst2, src2, 8);

	while (dst2[i] != '\0')
	{
		write(1, &dst2[i], 1);
		i++;
	}
	write(1, "\n", 1);
	printf("%zu\n\n\n\n", ret2);

	printf("ft_memcpy\n");
	char	a1[6] = "abcdef";
	char	b1[6] = "abcdef";

	char	*a2 = "123456";
	char	*b2 = "123456";

	ft_memcpy(a1, a2, 0);
	memcpy(b1, b2, 0);

	printf("%s\n", a1);
	printf("%s\n", b1);

	i = 0;

	printf("\n\nft_strlcat test\n");

	char	dest3[20] = "123";
	char	*src3 = "456789";
	size_t	ret3 = ft_strlcat(dest3, src3, 11);

	char	dest4[20] = "123";
	char	*src4 = "456789";
	size_t	ret4 = strlcat(dest4, src4, 11);

	printf("strlcat: %zu\n", ret3);
	printf("%s\n", dest3);
	printf("ft_strlcat: %zu\n", ret4);
	printf("%s\n", dest4);

	printf("\n\n toupper & tolower\n");
	printf("toupper : %c\n", toupper(97));
	printf("ft_toupper : %c\n", ft_toupper(97));
	printf("tolower : %c\n", tolower(65));
	printf("ft_tolower : %c\n", ft_tolower(65));

	printf("\n\nft_strchr test\n");
	char str[] = "BlockDMask";
	char* ptr = strchr(str, 'k');
	if(ptr != NULL)
		printf("strchr : %c, %s\n", *ptr, ptr);

	char str1[] = "BlockDMask";
	char *ptr1 = ft_strchr(str1, 'D');
	if (ptr1 != NULL)
		printf("ft_strchr : %c, %s\n", *ptr1, ptr1);

	printf("\n\nft_strrchr test\n");
	char str2[] = "abcabcabc";
	char *ptr2 = ft_strrchr(str2, 'b');
	if (ptr2 != NULL)
		printf("ft_strrchr : %c, %s\n", *ptr2, ptr2);
	char	str3[] = "abcabcabc";
	char	*ptr3 = strrchr(str3, 'b');
	if (ptr3 != NULL)
		printf("strrchr : %c, %s\n", *ptr3, ptr3);

	printf("\nft_memchr test\n");
	char  *ptr4 = "badayak.com";
	printf( "found=%s\n", ( char *)ft_memchr( ptr4, 'c',  7));
	printf( "found=%s\n", ( char *)ft_memchr( ptr4, 'c',  strlen(ptr4)));

	printf("\nft_memcmp test\n");
	char	str4[] = "1257";
	char	str5[] = "124";
	printf("memcmp : %d\n", memcmp(str4, str5, 3));
	printf("ft_memcmp : %d\n", ft_memcmp(str4, str5, 3));

	printf("\nft_strnstr\n");
	char	str6[] = "123456123";
	char	str7[] = "1";
	char	str8[] = "123456123";
	char	str9[] = "1";
	printf("strnstr : %s\n", strnstr(str6, str7,20));
	printf("ft_strnstr : %s\n", ft_strnstr(str8, str9, 20));
	printf("\nft_atoi\n");
	char	str10[] = "+a23";
	char	str11[] = "-12a3";
	char	str12[] = "22222299999999999999992222222223";
	char	str13[] = "-2147483699";
	char	str14[] = "     +123";
	char	str15[] = "   +   123";
	char	str16[] = "  +-123";
	char	str17[] = "-2147483648";
	printf("%d", atoi(str17));
	printf("\n%d, %d, %d, %d, %d, %d, %d", atoi(str10), atoi(str11), atoi(str12), atoi(str13), atoi(str14), atoi(str15), atoi(str16));
	printf("\n%d, %d, %d, %d, %d, %d, %d", ft_atoi(str10), ft_atoi(str11), ft_atoi(str12), ft_atoi(str13), ft_atoi(str14), ft_atoi(str15), ft_atoi(str16));

	printf("\nft_strdup\n");
	char	*tmp = ft_strdup(str12);
	printf("%s\n", tmp);

	printf("");
}


