/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:00:11 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 15:17:47 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy()
{
	this->type = "Target Practice Dummy";
}

Dummy::Dummy(const Dummy& other)
{
	*this = other;
}

Dummy& Dummy::operator=(const Dummy& other)
{
	(void) other;
	return (*this);
}

Dummy::~Dummy() {}

Dummy* Dummy::clone() const
{
	return (new Dummy);
}
