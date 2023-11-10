/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:00:11 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 18:26:59 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall()
{
	this->type = "Inconspicuous Red-brick Wall";
}

BrickWall::BrickWall(const BrickWall& other)
{
	*this = other;
}

BrickWall& BrickWall::operator=(const BrickWall& other)
{
	(void) other;
	return (*this);
}

BrickWall::~BrickWall() {}

BrickWall* BrickWall::clone() const
{
	return (new BrickWall);
}
