/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutanstack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:16:28 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/06 13:35:00 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP

# include	<algorithm>
# include	<stack>
# include	<deque>
# include	<iterator>
# include	<iostream>

template	<typename T>
class	MutantStack : public std::stack<T>{
	public:

		typedef typename std::deque<T>::iterator	iterator;

		//			CONSTRUCTORS & DESTRUCTOR
		MutantStack() : std::stack<T>(){};
		MutantStack(MutantStack const &copy){
			*this = copy;
		}
		virtual	~MutantStack(){};

		//			OVERLOADS
		MutantStack &	operator=(MutantStack const &rhs){
			std::stack<T>::operator=(rhs);
			return *this;
		}

		iterator	begin(void) {
			return this->c.begin();
		}
		iterator	end(void) {
			return this->c.end();
		}

};

#endif
