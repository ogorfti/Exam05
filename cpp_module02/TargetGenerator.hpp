/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:28:01 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/10 19:09:33 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
	private:
		std::vector <ATarget*> book;

		TargetGenerator(const TargetGenerator& other);
		TargetGenerator operator=(const TargetGenerator& other);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* other);
		void forgetTargetType(std::string const &typeName);
		ATarget* createTarget(std::string const &typeName);
};