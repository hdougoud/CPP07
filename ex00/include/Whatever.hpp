/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:48:28 by hdougoud          #+#    #+#             */
/*   Updated: 2025/12/04 14:18:09 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(const T a, const T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(const T a, const T b)
{
	if (a > b)
		return (a);
	return (b);
}
