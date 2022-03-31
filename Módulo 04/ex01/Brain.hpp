/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:26:12 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 07:43:04 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define	BRAIN_HPP

#include	<iostream>

class	Brain{
public:
	Brain();
	Brain(Brain const & copy);
	~Brain();
	Brain &	operator =(Brain const & rhs);
	std::string	get_idea(int i)const;
	int	set_idea(int i, std::string idea);
private:
	std::string	_ideas[100];
};
#endif
