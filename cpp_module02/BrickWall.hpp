/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:58:57 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 18:26:18 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		BrickWall(const BrickWall& other);
		BrickWall& operator=(const BrickWall& other);
		~BrickWall();

		BrickWall* clone() const;
};
