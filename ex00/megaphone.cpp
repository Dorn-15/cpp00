/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:51:53 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/27 18:26:07 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				if (j == 0 && av[i][j] == ' ')
					j++;
				else if (!av[i][j + 1] && av[i][j] == ' ')
					break;
				std::cout << (char)std::toupper(av[i][j]);
			}
			if (i < ac - 1)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}
