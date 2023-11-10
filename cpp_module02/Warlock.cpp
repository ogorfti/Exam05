/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:49:54 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 19:02:27 by ogorfti          ###   ########.fr       */
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
	this->book = new SpellBook;
	std::cout << this->name << ": This looks like another boring day." << '\n';
}

Warlock::~Warlock()
{
	delete this->book;
	std::cout << this->name << ": My job here is done!" << '\n';
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << '\n';
}


void Warlock::learnSpell(ASpell* other)
{
	book->learnSpell(other->clone());
}

void Warlock::forgetSpell(std::string spellName)
{
	book->forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, const ATarget& other)
{
	ASpell* spell = book->createSpell(spellName);
	spell->launch(other);
}
