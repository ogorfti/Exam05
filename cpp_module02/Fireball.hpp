/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:39:56 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 18:22:25 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball();
		Fireball(const Fireball& other);
		Fireball& operator=(const Fireball& other);
		~Fireball();
		Fireball* clone() const;
};