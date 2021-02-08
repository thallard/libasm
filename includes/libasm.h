/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:24:51 by thallard          #+#    #+#             */
/*   Updated: 2021/02/08 14:59:30 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <errno.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_strlen(const char *str);
char				*ft_strcpy(char *s1, const char *s2);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_write(int fd, const void *buf, int size);
int					ft_read(int fd, const void *buf, int size);
char				*ft_strdup(const char *s);

#endif
