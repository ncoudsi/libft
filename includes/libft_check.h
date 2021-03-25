/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_check.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:12:54 by ldutriez          #+#    #+#             */
/*   Updated: 2021/03/25 14:43:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHECK_H
# define LIBFT_CHECK_H

t_bool			ft_is_char_in_str(char to_find, char *str);
t_bool			ft_is_only_digits(char *str);
t_bool			ft_is_digit(char c);
int				ft_strcmp(char *src, char *target);
t_bool			ft_is_white_space(char c);
t_bool			ft_is_uppercase(char c);
t_bool			ft_is_lowercase(char c);
t_bool			ft_is_alpha(char c);
t_bool			ft_is_alpha_num(char c);
t_bool			ft_is_valid_file_path(char *path);

#endif
