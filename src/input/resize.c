/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <dmelnyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:29:10 by dmelnyk           #+#    #+#             */
/*   Updated: 2025/06/23 13:29:10 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input_private.h"
#include "mlx_int.h"

int	input_event_resize(t_engine *eng)
{
	XWindowAttributes	attr;
	Window				*win;
	t_xvar				*xvar;

	xvar = eng->mlx;
	win = eng->window.win;
	XGetWindowAttributes(xvar->display, *win, &attr);
	eng->window.width = attr.width;
	eng->window.height = attr.height;
	eng->input.resizing = 1;
	minimap_update_properties(eng);
	menu_update_properties(eng);
#if DEBUG
	printf("New window dimensions: %dx%d\n", attr.width, attr.height);
#endif
	return (0);
}

