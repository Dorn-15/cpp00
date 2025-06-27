/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:53:47 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/24 17:11:20 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_CLASS_H
# define PhoneBook_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {
private:
	Contact contact[8];

public:
	PhoneBook( void );
	~PhoneBook( void );

	Contact *GetContact(int i);
	Contact *GetBook( void );
};

#endif
