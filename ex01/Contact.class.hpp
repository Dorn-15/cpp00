/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:01:51 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/24 17:11:26 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_CLASS_H
# define Contact_CLASS_H

#include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phone;
	std::string secret;

public:
	Contact( void );
	~Contact( void );

	void SetContact(std::string fn, std::string ln, std::string nm,
					std::string ph, std::string sc);
	std::string GetContact(int index);
};

#endif
