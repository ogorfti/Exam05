/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:49:54 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 17:10:56 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

const std::string& Warlock::getName() const
{
	return (this->name);
}

const std::string& Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(const std::string& newTitle)
{
	this->title = newTitle;
}

Warlock::Warlock(const std::string& newName, const std::string& newTitle)
{
	this->name = newName;
	this->title = newTitle;
	std::cout << this->name << ": This looks like another boring day." << '\n';
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << '\n';
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << '\n';
}


void Warlock::learnSpell(ASpell* other)
{
	this->store.push_back(other->clone());
}

void Warlock::forgetSpell(std::string spellName)
{
	for (std::vector<ASpell*>::iterator it = store.begin(); it != store.end();)
	{
		ASpell* tmp = *it;
		if (tmp->getName() == spellName)
		{
			it = store.erase(it);
		}
		else
			++it;
	}
}

void Warlock::launchSpell(std::string spellName, const ATarget& other)
{
	for (std::vector<ASpell*>::iterator it = store.begin(); it != store.end(); it++)
	{
		ASpell* tmp = *it;
		if (tmp->getName() == spellName)
		{
			tmp->launch(other);
		}
	}
}