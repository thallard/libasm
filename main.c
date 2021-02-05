/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:49:56 by thallard          #+#    #+#             */
/*   Updated: 2021/02/05 14:35:09 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libasm.h"

int main()
{
	// int		nb;
	// char oui[10] = "123";
	// char non[10] = "456";

	// char oui1[10] = "123";
	// char non1[10] = "456";
	
	// printf("%s\n", ft_strcpy(oui, non));
	// printf("%s\n", strcpy(oui1, non1));

	// printf("Partie STRCMP :\n");
	// printf("%s | %s : %d\n", "something", "somethinge", ft_strcmp("somethinge", "something"));
	// printf("%s | %s : %d\n", "something", "somethinge", strcmp("somethinge", "something"));

	// dprintf(1, "Partie WRITE :\n");
	// nb = ft_write(3422, "Bonjour tout le monde", 21);
	// dprintf(1, "\nNombre de caracteres : %d\n\n", nb);
	// nb = ft_write(1, "", 0);
	// dprintf(1, "\nNombre de caracteres %d\n\n", nb);

	char *oui = ft_strdup("bonjour");
	printf("%s\n", oui);
	return (0);
}