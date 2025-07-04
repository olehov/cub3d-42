/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <dmelnyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:31:08 by dmelnyk           #+#    #+#             */
/*   Updated: 2025/06/23 13:31:08 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXT_H
# define TEXT_H

# define EXPECTED_NUM_OF_FONTS 1
# define FONTS_DIR "./assets/fonts/"

# include "cube.h"

bool	text_init(t_engine *eng);
void	text_destroy(t_engine *eng);
void	*text_load_font(t_freetype *fr, const char *path);
bool	text_load_fonts(t_freetype *fr, const char *dir);
void	text_put_char(t_engine *eng, t_point p, char c, unsigned int color);
void	text_put_str(t_engine *eng, t_point start, const char *str, unsigned int color);
void	text_put_int(t_engine *eng, t_point start, t_ui num, unsigned int color);
void	text_set_font_size(t_engine *eng, int size, int font);

#endif
