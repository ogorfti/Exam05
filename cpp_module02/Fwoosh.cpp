/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:39:58 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 14:57:07 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	this->name = "Fwoosh";
	this->effects = "fwooshed";
}

Fwoosh::Fwoosh(const Fwoosh& other)
{
	*this = other;
}

Fwoosh& Fwoosh::operator=(const Fwoosh& other)
{
	(void)other;
	return (*this);
}

Fwoosh::~Fwoosh() {}

Fwoosh* Fwoosh::clone() const
{
	return (new Fwoosh);
}
