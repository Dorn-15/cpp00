/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:06:13 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/27 18:23:47 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "PhoneBook.class.hpp"

int main(){
	std::string buff;
	PhoneBook instance;

	while (1)
	{
		std::cout << "> ";
		if (!(std::getline( std::cin, buff )))
			break;
		if (buff == "add" || buff == "ADD" || buff == "Add")
			instance.Add();
		else if (buff == "search" || buff == "SEARCH" || buff == "Search")
			instance.Search();
		else if (buff == "exit" || buff == "EXIT" || buff == "Exit")
			break;
	}
	return 0;
}


