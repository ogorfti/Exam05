/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:58:59 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 13:36:48 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

const std::string& ASpell::getName() const
{
	return (this->name);
}

const std::string& ASpell::getEffects() const
{
	return (this->effects);
}

ASpell::ASpell(const std::string& newName, const std::string& newEffects)
{
	this->name = newName;
	this->effects = newEffects;
}

ASpell::ASpell() {}

ASpell::ASpell(const ASpell& other)
{
	*this = other;
}

ASpell& ASpell::operator=(const ASpell& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->effects = other.effects;
	}
	return (*this);
}

ASpell::~ASpell() {}

void ASpell::launch(const ATarget& other)
{
	other.getHitBySpell(*this);
}
