/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-rio <ddel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 03:13:02 by delirio           #+#    #+#             */
/*   Updated: 2024/10/08 03:46:43 by ddel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// SOURCES

size_t	ft_strlen(const char *str);
int ft_isprint(int c);
int ft_isdigit(int c);
void *memset(void *s, int c, size_t n);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);

#endif