/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:24:51 by thallard          #+#    #+#             */
/*   Updated: 2020/12/28 16:13:32 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <errno.h>
# include <unistd.h>

int		ft_strlen(const char *str);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);

#endif