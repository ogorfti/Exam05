/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:27:58 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 19:10:19 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* other)
{
    this->book.push_back(other->clone());
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    for (std::vector<ASpell*>::iterator it = book.begin(); it != book.end();)
	{
		ASpell* tmp = *it;
		if (tmp->getName() == spellName)
		{
			it = book.erase(it);
		}
		else
			++it;
	}
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    for (std::vector<ASpell*>::iterator it = book.begin(); it != book.end(); it++)
	{
		ASpell* tmp = *it;
		if (tmp->getName() == spellName)
            return(tmp->clone());
	}
    return (NULL);
}
