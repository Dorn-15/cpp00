/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:53:47 by adoireau          #+#    #+#             */
/*   Updated: 2025/06/27 18:24:14 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_CLASS_H
# define PhoneBook_CLASS_H

#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class PhoneBook {
private:
	Contact contact[8];

public:
	PhoneBook( void );
	~PhoneBook( void );

	void	Add( void );
	void	Search( void );
};

#endif
