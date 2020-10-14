/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 08:21:26 by ldutriez          #+#    #+#             */
/*   Updated: 2020/10/14 15:27:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H

/*
**	The t_list structure is designed to put any data in it as a void pointer.
**	The second variable is a pointer to the next t_list, in a chain of linked
**	lists.
*/

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;


t_list			*ft_lst_create_node(void *p_data);
void			ft_lst_add_back(t_list **p_list, t_list *p_node);
void			ft_lst_add_front(t_list **p_list, t_list *p_node);
void			ft_lst_clear(t_list **lst, void (*del)(void*));
void			ft_lst_rm_data(t_list *lst, void (*del)(void*));
void			ft_lst_iter(t_list *lst, void (*f)(void*));
t_list			*ft_lst_map(t_list *lst, void *(*f)(void*), void (*del)(void*));
int				ft_lst_size(t_list *lst);
void			ft_lst_rm_node(t_list **lst, size_t num, void (*del)(void*));

#endif
