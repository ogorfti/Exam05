/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:39:58 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 18:24:32 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph()
{
	this->name = "Polymorph";
	this->effects = "turned into a critter";
}

Polymorph::Polymorph(const Polymorph& other)
{
	*this = other;
}

Polymorph& Polymorph::operator=(const Polymorph& other)
{
	(void)other;
	return (*this);
}

Polymorph::~Polymorph() {}

Polymorph* Polymorph::clone() const
{
	return (new Polymorph);
}
