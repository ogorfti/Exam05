/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:27:58 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 19:09:51 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* other)
{
    this->book.push_back(other->clone());
}

void TargetGenerator::forgetTargetType(std::string const &typeName)
{
    for (std::vector<ATarget*>::iterator it = book.begin(); it != book.end();)
	{
		ATarget* tmp = *it;
		if (tmp->getType() == typeName)
		{
			it = book.erase(it);
		}
		else
			++it;
	}
}

ATarget* TargetGenerator::createTarget(std::string const &typeName)
{
    for (std::vector<ATarget*>::iterator it = book.begin(); it != book.end(); it++)
	{
		ATarget* tmp = *it;
		if (tmp->getType() == typeName)
            return(tmp->clone());
	}
    return (NULL);
}
