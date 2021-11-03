/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:27:36 by anggonza          #+#    #+#             */
/*   Updated: 2021/11/03 18:16:03 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar_count(char c, int *count);
void	ft_printhexa(int nb, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putstr(char *s, int *count);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
int		ft_checkflag(const char *input, int index, int *count, va_list args);
void	ft_printptr_count(unsigned long ptr, int *count, int state);
void	ft_printunsigned_count(unsigned int nb, int *count);

#endif
