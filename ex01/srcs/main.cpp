/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:17:25 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/12 17:13:54 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "iter.hpp"

void	testString(void);

int main(void)
{

}

void	testString(void)
{

	std::string array[] = {"Hello", "World", "Test", "123"};
	iter(array, 4, printValue<std::string>);
}
