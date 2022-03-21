/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:45:33 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/07 16:19:36 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	private:
		int		len;
		int		index;
		int		front;
		int		rear;
		Contact contacts[8];
	public:
		void	setVar(void);
		void	insertContact(Contact contact);
		void	displayContacts(void);
		void	displayContactInfo(int index);
		int		getIndex(void);
};

#endif