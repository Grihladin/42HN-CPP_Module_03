/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:46:37 by mratke            #+#    #+#             */
/*   Updated: 2025/07/05 20:25:48 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main() {
  ScavTrap original("test");
  std::cout << "----------------------------------------\n";
  ScavTrap copied(original);
  std::cout << "----------------------------------------\n";
  ScavTrap g("gosha");
  g.guardGate();
  g.attack("YOU");
}
