/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:49:57 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/09 13:26:29 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Warlock
{
	private:
		 std::string name;
		 std::string title;

		Warlock();
		Warlock(const Warlock& other);
		Warlock& operator=(const Warlock& other);
	public:
		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& newName);
		
		void introduce() const;
		
		Warlock(const std::string& newName, const std::string& newTitle);
		~Warlock();
};