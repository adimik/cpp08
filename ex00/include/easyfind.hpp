/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:00:17 by didimitr          #+#    #+#             */
/*   Updated: 2026/03/19 15:18:56 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int value){
    return std::find(container.begin(), container.end(), value);
}