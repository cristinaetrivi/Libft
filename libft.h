/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:24:35 by ctrivino          #+#    #+#             */
/*   Updated: 2022/09/28 12:31:24 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char	*dst, char	*src, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void	*ft_memcpy(char	*dst, const void	*src, size_t n);
void	*ft_memmove(void	*dst, const void	*src, size_t	len);
unsigned int    ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

#endif