/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:42:16 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/02 11:10:19 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include	<vector>
# include	<deque>
# include	<list>
# include	<stack>
# include	<queue>
# include	<set>
# include	<map>
# include	<algorithm>
# include <iterator>

template	<typename T>
int	easyfind(T &container, int const &i)
{
	if (container.end() == find(container.begin(), container.end(), i))
		return (-1);
	return	(std::distance(container.begin(), find(container.begin(), container.end(), i)));
}

#endif
