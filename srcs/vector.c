/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:38:15 by mgayduk           #+#    #+#             */
/*   Updated: 2018/01/13 14:43:48 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_vector	get_vector(float x, float y, float z)
{
	t_vector v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = 0;
	return (v);
}

t_vector	subtraction(t_vector a, t_vector b)
{
	t_vector c;

	c.x = b.x - a.x;
	c.y = b.y - a.y;
	c.z = b.z - a.z;
	return (c);
}

t_vector	cross_production_right(t_vector a, t_vector b)
{
	t_vector c;

	c.x = a.y * b.z - a.z * b.y;
	c.y = a.z * b.x - a.x * b.z;
	c.z = a.x * b.y - a.y * b.x;
	return (c);
}

t_vector	cross_production_left(t_vector a, t_vector b)
{
	t_vector c;

	c.x = a.z * b.y - a.y * b.z;
	c.y = a.x * b.z - a.z * b.x;
	c.z = a.y * b.x - a.x * b.y;
	return (c);
}
