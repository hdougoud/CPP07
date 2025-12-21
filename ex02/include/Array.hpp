/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:46:26 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/21 21:58:29 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array &operator=(const Array &src);
		~Array();
		T &operator[](int idx);
		int size(void) const;

		class outOfRangeException;
	private:
		T	*_array;
		int	_size;
};

template <typename T>
class Array<T>::outOfRangeException : public std::exception
{
	public:
		const char* what() const throw();
};

#include "../srcs/Array.tpp"
