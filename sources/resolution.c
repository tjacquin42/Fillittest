/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/04 14:41:58 by blo               #+#    #+#             */
/*   Updated: 2016/06/04 18:18:34 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		sizemap(char **final)
{
	int i;

	i = 0;
	while (final[0][i] != '\0')
		i++;
	return (i);
}

void	process(char ***tab, char **finalmap, int nbtetris, int fouillamerde)
{
	int	line;
	int	kase;
	int lenreso;

	line = 0;
	lenreso = sizemap(final);
	while (line < lenreso)
	{
		kase = 0;
		while (kase < lenreso)
		{
			if (?)
			{
				if(fouillamerde + 1 != nbtetris)
					process(tetri, finalmap, nbtetris, fouillamerde + 1);
				else
					print_finalmap(final, lenreso);
				ccleanmap(final, ?, lenreso);
			}
			kase++;
		}
		line++;
	}
}

int		lowestmap(int nbtetris)
{
	int i;

	i = 2;
	while (i * i < nbtetris * 4)
		i++;
	return (i);
}

void	resolution(char ***tab, int nbtetris)
{
	int lenmap;

	lenmap = lowestmap(nbtetris);
	while (lenmap)
	{
		process(tab, finalmap(lenmap), nbtetris, 0);
		lenmap++;
	}
}
