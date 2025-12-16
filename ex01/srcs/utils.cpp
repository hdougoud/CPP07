/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 12:59:40 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/13 13:50:42 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>

void	toUpperStr(std::string &str)
{
	std::string::iterator it;
	
	for (it = str.begin(); it != str.end(); it++)
	{
		*it = std::toupper(*it);
	}
}
