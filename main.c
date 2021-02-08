/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:49:56 by thallard          #+#    #+#             */
/*   Updated: 2021/02/08 14:56:35 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include "../includes/libasm.h"

int main()
{
	int		nb;
	char oui[10] = "123";
	char non[10] = "456";

	char oui1[10] = "123";
	
	char oui2[10] = "coucou";

	printf("Partie STRLEN :\n");
	printf("Nombre de caracteres \"123\" : %d | %d\n", ft_strlen("123"), ft_strlen("123")); 
	printf("Nombre de caracteres \"Bonjour\" : %d | %d\n\n", ft_strlen("Bonjour"), ft_strlen("Bonjour")); 

	printf("Partie STRCPY :\n");
	printf("%s | %s\n", ft_strcpy(oui, oui2), strcpy(oui1, oui2));
	printf("%s | %s\n\n", ft_strcpy(oui, non), strcpy(oui1, non));

	printf("Partie STRCMP :\n");
	printf("%s | %s : %d | %d\n", "somethin", "somethinge", strcmp("somethin", "something"), ft_strcmp("somethin", "something"));
	printf("%s | %s : %d | %d\n", "somethinge", "somethinge", strcmp("somethinge", "something"), ft_strcmp("somethinge", "something"));
	printf("%s | %s : %d | %d\n\n", "something", "something", strcmp("something", "something"), ft_strcmp("something", "something"));

	int		fd = open("test1", O_TRUNC | O_WRONLY | O_CREAT | O_RDONLY, 0666);
	int		fd2 = open("Makefile", O_RDONLY);
	
	dprintf(1, "Partie WRITE : \n");
	nb = ft_write(3422, "Bonjour tout le monde", 21);
	dprintf(1, "Nombre de caracteres : %d (errno = %d)\n", nb, errno);
	errno = 0;
	nb = ft_write(fd, "eqeq", 0);
	dprintf(1, "Nombre de caracteres : %d (errno = %d)\n", nb, errno);
	errno = 0;
	nb = write(fd2, "Une phrase", -12);
	dprintf(1, "Nombre de caracteres : %d (errno = %d)\n\n", nb, errno);
	errno = 0;
	

	printf("Partie READ :\n");
	char	read1[10];
	char	read2[10];
	read(fd2, read1, 10);
	dprintf(1, "Read normal : %s %d\n", read1, errno);
	errno = 0;
	ft_read(123123, read2, 10);
	dprintf(1, "Read qui crash : %s %d\n", read2, errno);
	errno = 0;
	ft_read(fd2, read2, -123);
	dprintf(1, "Read qui crash no.2 : %s %d\n\n", read2, errno);


	char	*test1 = ft_strdup("Bonjour");
	char	*test2 = strdup("Bonjour");
	dprintf(1, "Partie STRDUP :\n");
	dprintf(1, "Test normal : [%s] [%s]\n", test1, test2);
	dprintf(1, "Test empty : [%s] [%s]\n", ft_strdup(""), strdup(""));
	dprintf(1, "Test normal encore : [%s] [%s]\n\n", ft_strdup("Texte normal."), strdup("Texte normal."));
	return (0);
}