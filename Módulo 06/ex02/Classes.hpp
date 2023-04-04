/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:38:18 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/19 09:05:11 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLASSES_HPP
# define CLASSES_HPP


class	Base
{
public:
	virtual ~Base() {};
};

class	A : public Base
{
public:
	A(){ return;}
	virtual ~A(){};
};

class	B : public Base
{
public:
	B(){ return;}
	virtual ~B(){};
};

class	C : public Base
{
public:
	C(){ return;}
	virtual ~C(){};
};
#endif
