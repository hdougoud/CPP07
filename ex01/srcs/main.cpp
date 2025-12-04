/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:15:25 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/04 22:16:35 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "iter.hpp"

void	ft_print(std::string str);

int main(void)
{
	std::string array[] = {"Hello", "World", "Test", "123"};
	iter(array, 4, ft_print);
}

void	ft_print(std::string str)
{
	std::cout << str << std::endl;
}
