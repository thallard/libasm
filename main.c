/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:49:56 by thallard          #+#    #+#             */
/*   Updated: 2020/12/28 16:33:39 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libasm.h"

int main()
{
	// char oui[10] = {0};
	// char non[10] = "";

	// char oui1[10] = {0};
	// char non1[10] = "";
	
	// printf("%s\n", ft_strcpy(oui, non));
	// printf("%s\n", strcpy(oui1, non1));

	printf("%d\n", ft_strcmp("oui", "ouie"));
	printf("%d\n", strcmp("oui", "ouie"));
	return (0);
}