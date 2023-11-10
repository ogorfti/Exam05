/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:39:56 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 18:24:04 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph();
		Polymorph(const Polymorph& other);
		Polymorph& operator=(const Polymorph& other);
		~Polymorph();
		Polymorph* clone() const;
};