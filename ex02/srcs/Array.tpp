/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:46:19 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/21 22:00:09 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>
#include <iostream>

template <typename T>
Array<T>::Array() : _array(new T[0]()), _size(0)
{
	//std::cout << "Array : Default constructor called" << std::endl; //DEBUG:
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n)
{
	//std::cout << "Array : Ordinary constructor called" << std::endl; //DEBUG:
	return ;
}

template <typename T>
Array<T>::Array(const Array &src) : _array(new T[src._size]()), _size(src._size)
{
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
	return ;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &src)
{
	if (this != &src)
	{
		this->_array = new T[src._size]();
		this->_size = src._size;
		for (int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
T &Array<T>::operator[](int idx)
{
	if (idx < 0 || idx >= this->_size)
		throw (outOfRangeException());
	return (this->_array[idx]);
}

template <typename T>
const char* Array<T>::outOfRangeException::what() const throw()
{
	return ("outside the memory limits");
}


template <typename T>
int Array<T>::size(void) const
{
	return (this->_size);
}


