/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:06:13 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/25 12:55:46 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

/*get data from user*/
std::string GetForm(std::string str)
{
	std::string buff;

	std::cout << str;
	if (!std::getline( std::cin, buff ))
		return "";

	return (buff);
}

int add(Contact *contact) {
	std::string firstName = GetForm("First name: ");
	if (firstName.empty())
		return 1;

	std::string lastName = GetForm("Last name: ");
	if (lastName.empty())
		return 1;

	std::string nickName = GetForm("Nickname: ");
	if (nickName.empty())
		return 1;

	std::string phone = GetForm("Phone number: ");
	if (phone.empty())
		return 1;

	std::string secret = GetForm("Darkest secret: ");
	if (secret.empty())
		return 1;

	contact->SetContact(firstName, lastName, nickName, phone, secret);
	return 0;
}

/*print data on 10 char*/
void printVar (std::string str)
{
	int n = 10 - str.length();

	if (n == 0)
		std::cout << str << "|";
	else if (n < 0)
	{
		std::cout.write(str.c_str(), 9);
		std::cout << ".|";
	}
	else
		std::cout << std::string(n, ' ') << str << "|";
}

void search(Contact contact[8])
{
	std::string buff;
	int n;

	/*display table*/
	std::cout << "|     index|first name| last name|  Nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		for (int j = 0; j < 3; j++)
			printVar(contact[i].GetContact(j));
		std::cout << std::endl;
	}

	/*question*/
	std::cout << "choos index. ";
	if (!(std::getline( std::cin, buff )) || buff.length() != 1)
	{
		std::cout << "error: bad index" << std::endl;
		return;
	}
	n = std::atoi(buff.c_str());
	if (n < 1 || n > 8)
	{
		std::cout << "error: bad index" << std::endl;
		return;
	}
	else if ((contact[n - 1].GetContact(0)).empty())
	{
		std::cout << "error: index is empty" << std::endl;
		return;
	}

	/*display contact*/
	std::cout << "    First name: " << contact[n - 1].GetContact(0) << std::endl;
	std::cout << "     Last name: " << contact[n - 1].GetContact(1) << std::endl;
	std::cout << "      Nickname: " << contact[n - 1].GetContact(2) << std::endl;
	std::cout << "  Phone number: " << contact[n - 1].GetContact(3) << std::endl;
	std::cout << "Darkest secret: " << contact[n - 1].GetContact(4) << std::endl;
}

int main(){
	int n =0;
	std::string buff;
	PhoneBook instance;

	while (1)
	{
		std::cout << "> ";
		if (!(std::getline( std::cin, buff )))
			break;
		if (buff == "add" || buff == "ADD" || buff == "Add")
		{
			if (!(add(instance.GetContact(n))))
			{
				n++;
				if (n >= 8)
					n = 0;
			}
		}
		else if (buff == "search" || buff == "SEARCH" || buff == "Search")
			search(instance.GetBook());
		else if (buff == "exit" || buff == "EXIT" || buff == "Exit")
			break;
	}
	return 0;
}


