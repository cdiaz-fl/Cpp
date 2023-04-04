/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:11:44 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/06 13:09:45 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include	<algorithm>
# include	<list>

class	Span{
	public:
		//			CONSTRUCTORS & DESTRUCTOR
		Span();
		Span(unsigned int n);
		Span(Span const &copy);
		~Span();


		//			OVERLOADS
		Span &	operator=(Span const &rhs);


		//			EXCEPTIONS
		class	No_space_left : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("There's no space left to add a number\n");}
		};

		class	No_numbers_to_compare : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("There aren't enough numbers to compare\n");}
		};


		//			FUNCTIONS
		void	addNumber(int nb);
		void	insertion(int *val, int size);
		int 	shortestSpan(void)const;
		int		longestSpan(void)const;
		void	print(void)const;


	private:
		unsigned int		_size_left;
		std::list<int>	_values;	
};

#endif
