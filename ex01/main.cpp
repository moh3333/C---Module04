/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:40:48 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/25 16:22:20 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"



int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	Dog A;
	A.makeSound();
	Dog B = A;
	B.makeSound();
	const Animal *d[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4 ; i++){
		d[i]->getType();
		d[i]->makeSound();
	}
	for (int i = 0; i < 4 ; i++){
		delete d[i];
	}
	return 0;
}