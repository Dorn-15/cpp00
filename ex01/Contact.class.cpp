/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:01:54 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/24 17:11:27 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ){
	return;
}

Contact::~Contact( void ){
	return;
}

void Contact::SetContact(std::string fn, std::string ln, std::string nm,
						std::string ph, std::string sc){
	firstName = fn;
	lastName = ln;
	nickName = nm;
	phone = ph;
	secret = sc;
}

std::string Contact::GetContact(int index){
	if (index == 0)
		return(firstName);
	else if (index == 1)
		return(lastName);
	else if (index == 2)
		return(nickName);
	else if (index == 3)
		return(phone);
	else if (index == 4)
		return(secret);
	return (NULL);
}
