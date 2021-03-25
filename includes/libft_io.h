/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_io.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:15:30 by ldutriez          #+#    #+#             */
/*   Updated: 2021/03/25 13:57:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H
# define LIBFT_IO_H

void			ft_putchar(char c);
void			ft_putchar_fd(int fd, char c);
void			ft_putstr(char *str);
void			ft_putstr_fd(int fd, char *str);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int fd, int nb);
void			ft_print_str_tab(char *name, char **tab);
void			ft_print_str_tab_fd(int fd, char *name, char **tab);
void			ft_print_int_tab(char *name, int *tab, size_t len);
void			ft_print_int_tab_fd(int fd,
				char *name, int *tab, size_t len);

#endif
