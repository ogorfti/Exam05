/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:15:45 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 17:22:17 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const ATarget& other)
{
	*this = other;
}

ATarget& ATarget::operator=(const ATarget& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

ATarget::~ATarget() {}

const std::string& ATarget::getType() const
{
	return (this->type);
}

ATarget::ATarget(const std::string& newType)
{
	this->type = newType;
}

void ATarget::getHitBySpell(const ASpell& other) const
{
	std::cout << this->type << " has been " << other.getEffects() << "!" << '\n';
}
