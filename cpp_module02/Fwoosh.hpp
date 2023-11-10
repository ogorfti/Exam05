/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:39:56 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 14:51:46 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		Fwoosh(const Fwoosh& other);
		Fwoosh& operator=(const Fwoosh& other);
		~Fwoosh();
		Fwoosh* clone() const;
};