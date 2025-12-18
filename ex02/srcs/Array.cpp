/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:46:19 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/18 17:00:01 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template <typename T>
Array<T>::Array() : _array(0) //WARN: Segfault ?
{
	
}

template <typename T>
Array<T>::Array(const Array &src)
{
	
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &src)
{
	if (this != &src)
	{
		
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	int i = 0;
	
	while(_array[i])
		i++;
	std::cout << i << std::endl;
	//TODO: TEST THIS !
}
