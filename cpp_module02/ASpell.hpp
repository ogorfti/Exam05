/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:56:52 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 17:25:38 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(const ASpell& other);
		ASpell& operator=(const ASpell& other);
		virtual ~ASpell();
		
		ASpell(const std::string& newName, const std::string& newEffects);
		const std::string& getName() const;
		const std::string& getEffects() const;
		virtual ASpell* clone() const = 0;

		void launch(const ATarget& other);
};
