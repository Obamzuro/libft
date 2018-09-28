/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 16:36:46 by obamzuro          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/09/27 17:01:38 by obamzuro         ###   ########.fr       */
=======
/*   Updated: 2018/09/24 14:34:51 by obamzuro         ###   ########.fr       */
>>>>>>> d768ecb37af9914cab8881a67e02d2db4997fc4c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_pointers(void **ptr1, void **ptr2)
{
	void	*temp;

	temp = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
}

void	ft_iswap(int *a, int *b)
{
	int	temp;

<<<<<<< HEAD
	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_dswap(double *a, double *b)
{
	double	temp;

=======
>>>>>>> d768ecb37af9914cab8881a67e02d2db4997fc4c
	temp = *a;
	*a = *b;
	*b = temp;
}
