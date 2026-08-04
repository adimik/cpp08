/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:59:58 by didimitr          #+#    #+#             */
/*   Updated: 2026/04/20 16:52:49 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
	std::vector<int> v;
	v.push_back(4);
	v.push_back(8);
	v.push_back(15);
	v.push_back(16);

	std::vector<int>::iterator it = easyfind(v, 15);
	if (it != v.end())
		std::cout << *it << std::endl;
	else
		std::cout << "not found" << std::endl;

	it = easyfind(v, 42);
	if (it != v.end())
		std::cout << *it << std::endl;
	else
		std::cout << "not found" << std::endl;

	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	std::list<int>::iterator lit = easyfind(l, 2);
	if (lit != l.end())
		std::cout << *lit << std::endl;
	else
		std::cout << "not found" << std::endl;

	return (0);
}
