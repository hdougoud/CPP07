/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:44:51 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/22 10:20:34 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "color.hpp"

#define MAX_VAL 750

int		subject_main(int, char**);
void	second_test(void);
void	copy_const_test(void);

int main(int argc, char** argv)
{
	if (subject_main(argc, argv))
	{
		std::cout << F_BOLD << C_RED << "subject main failed" << RESET << std::endl;
		return (1);
	}
	second_test();
	copy_const_test();
	return (0);
}

int subject_main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << RESET << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << RESET << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}

void	second_test(void)
{
	Array<std::string>	strs(5);
	std::string			array[] = {"Hello", "World", "Test", "123", "Random Words"};

	for (int i = 0; i < 5; i++)
		strs[i] = array[i];
	for (int i = 0; i < 7; i++)
	{
		try
		{
			std::cout << strs[i] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << C_RED << e.what() << RESET << std::endl;
		}
	}
}

void	copy_const_test(void)
{
	Array<int>	numbers(8);
	Array<int>	assignment(8);
	const int array[] = {12, 14, 16, 18, 20, 22, 24, 25};

	for (int i = 0; i < 8; i++)
	{
		numbers[i] = array[i];
		assignment[i] = array[i] + 10;
	}

	const Array<int> copy(numbers);
	for (int i = 0; i < 8; i++)
		std::cout << copy[i] << std::endl;

	std::endl(std::cout);
	assignment = copy;
	for (int i = 0; i < 8; i++)
		std::cout << assignment[i] << std::endl;
}