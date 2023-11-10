/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:39:58 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 18:23:12 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball()
{
	this->name = "Fireball";
	this->effects = "burnt to a crisp";
}

Fireball::Fireball(const Fireball& other)
{
	*this = other;
}

Fireball& Fireball::operator=(const Fireball& other)
{
	(void)other;
	return (*this);
}

Fireball::~Fireball() {}

Fireball* Fireball::clone() const
{
	return (new Fireball);
}
