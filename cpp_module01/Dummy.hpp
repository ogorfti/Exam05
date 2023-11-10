/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:58:57 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 15:17:05 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		Dummy(const Dummy& other);
		Dummy& operator=(const Dummy& other);
		~Dummy();

		Dummy* clone() const;
};
