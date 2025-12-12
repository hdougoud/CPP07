/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:21:42 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/12 13:59:24 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	printvalue(T &value)
{
	std::cout << value << std::endl;
}

template <typename T, typename F>
void	iter(T array[], const int size, void(*f)(T &))
{
	for(int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

template <typename T, typename F>
void	iter(T array[], const int size, void(*f)(const T &))
{
	for(int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}
