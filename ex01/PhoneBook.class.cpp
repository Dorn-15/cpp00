/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:52:43 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/27 18:25:34 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ){
	return;
}

PhoneBook::~PhoneBook( void ){
	return;
}

/*get data from user*/
std::string GetForm(std::string str)
{
	std::string buff;

	std::cout << str;
	if (!std::getline( std::cin, buff ))
		return "";

	return (buff);
}

void ErrorForm(std::string str){
	std::cout << "error: " << str << " is empty" << std::endl;
}

void PhoneBook::Add() {
	static int n = 0;

	std::string firstName = GetForm("First name: ");
	if (firstName.empty())
		return (ErrorForm("First name"));

	std::string lastName = GetForm("Last name: ");
	if (lastName.empty())
		return (ErrorForm("Last name"));

	std::string nickName = GetForm("Nickname: ");
	if (nickName.empty())
		return (ErrorForm("Nickname"));

	std::string phone = GetForm("Phone number: ");
	if (phone.empty())
		return (ErrorForm("Phone number"));

	std::string secret = GetForm("Darkest secret: ");
	if (secret.empty())
		return (ErrorForm("Darkest secret"));

	contact[n].SetContact(firstName, lastName, nickName, phone, secret);
	n++;
	if (n >= 8)
		n = 0;
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

void PhoneBook::Search() {
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
