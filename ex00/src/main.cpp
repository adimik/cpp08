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
	// Test 1: Vector with found element
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	std::vector<int>::iterator it = easyfind(vec, 3);
	if (it != vec.end())
		std::cout << "Found: " << *it << std::endl;
	else
		std::cout << "Not found" << std::endl;

	// Test 2: Vector with not found element
	it = easyfind(vec, 10);
	if (it != vec.end())
		std::cout << "Found: " << *it << std::endl;
	else
		std::cout << "Not found in vector" << std::endl;

	// Test 3: List with found element
	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);

	std::list<int>::iterator lit = easyfind(lst, 20);
	if (lit != lst.end())
		std::cout << "Found in list: " << *lit << std::endl;
	else
		std::cout << "Not found in list" << std::endl;

	// Test 4: List with not found element
	lit = easyfind(lst, 99);
	if (lit != lst.end())
		std::cout << "Found in list: " << *lit << std::endl;
	else
		std::cout << "Not found in list" << std::endl;

	return (0);
}