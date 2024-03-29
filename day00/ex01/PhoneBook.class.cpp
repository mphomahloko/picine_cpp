/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:19:56 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/05 13:27:24 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void )
{
	return ;
}

PhoneBook::~PhoneBook( void ) {	return ; }

Contact	PhoneBook::addCont()
{
	Contact		cont;

	cont.createContact();
	return cont;
}

void	PhoneBook::searchCont(Contact cont[], int numConts) const
{
	Contact		c;

	c.searchCont(cont, numConts);
	return ;
}