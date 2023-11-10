/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:28:01 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 18:50:56 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include <vector>

class SpellBook
{
	private:
		std::vector <ASpell*> book;

		SpellBook(const SpellBook& other);
		SpellBook operator=(const SpellBook& other);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* other);
		void forgetSpell(std::string const &spellName);
		ASpell* createSpell(std::string const &spellName);
};