/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:15:50 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 17:26:10 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ASpell;

class ATarget
{
	protected:
		std::string type;
	public:
		ATarget();
		ATarget(const ATarget& other);
		ATarget& operator=(const ATarget& other);
		virtual ~ATarget();

		ATarget(const std::string& newType);
		const std::string& getType() const;

		virtual ATarget* clone() const = 0;

		void getHitBySpell(const ASpell& other) const;
};
