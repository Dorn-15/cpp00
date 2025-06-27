/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:52:43 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/24 17:11:21 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ){
	return;
}

PhoneBook::~PhoneBook( void ){
	return;
}

Contact *PhoneBook::GetContact(int i)
{
	return (&contact[i]);
}

Contact *PhoneBook::GetBook()
{
	return (contact);
}
