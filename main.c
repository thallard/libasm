/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:49:56 by thallard          #+#    #+#             */
/*   Updated: 2020/12/26 16:37:58 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libasm.h"

int main()
{
	char oui[10] = "oui";
	char non[10] = "non";
	
	printf("%s\n", ft_strcpy(oui, non));
	return (0);
}