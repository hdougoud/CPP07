/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:17:25 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/16 16:33:49 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "color.hpp"
#include "iter.hpp"

void	stringTest(void);
void	intTest(void);
void	constStringTest(void);
void	constIntTest(void);
void	toUpperStr(std::string &str);
void	multiply(int &a);

int main(void)
{
	stringTest();
	intTest();
	constStringTest();
	constIntTest();
}

void	stringTest(void)
{
	std::cout << F_BOLD << F_UNDERLINED << C_BLUE << "STRING TEST" << RESET << std::endl;
	std::string array[] = {"Hello", "World", "Test", "123"};
	std::cout << C_SPRING << "Before" << RESET << std::endl;
	iter(array, 4, printValue<std::string>);
	iter(array, 4, toUpperStr);
	std::cout << C_SPRING << "After" << RESET << std::endl;
	iter(array, 4, printValue<std::string>);
}

void	intTest(void)
{
	std::cout << F_BOLD << F_UNDERLINED << C_BLUE << "\nINT TEST" << RESET << std::endl;
	int array[] = {8, 16, 32, 64, 128};
	std::cout << C_SPRING << "Before" << RESET << std::endl;
	iter(array, 5, printValue<int>);
	iter(array, 5, multiply);
	std::cout << C_SPRING << "After" << RESET << std::endl;
	iter(array, 5, printValue<int>);
}

void	constStringTest(void)
{
	std::cout << F_BOLD << F_UNDERLINED << C_BLUE << "\nCONST STRING TEST" << RESET << std::endl;
	const std::string array[] = {"Hello", "World", "Test", "123"};
	iter(array, 4, printValue<const std::string>);
}

void	constIntTest(void)
{
	std::cout << F_BOLD << F_UNDERLINED << C_BLUE << "\nCONST INT TEST" << RESET << std::endl;
	const int array[] = {8, 16, 32, 64, 128};
	iter(array, 5, printValue<const int>);
}
