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

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	const WrongAnimal *wAnimal = new WrongAnimal();
	const WrongAnimal *wCat = new WrongCat();
	std::cout << wAnimal->getType() << " " << std::endl;
	std::cout << wCat->getType() << " " << std::endl;
	std::cout << "WRONG ANIMAL MAKESOUND FUN ==>>>>     ";
	wAnimal->makeSound();
	std::cout << "WRONG CAT MAKESOUND FUN ==>>>>     ";
	wAnimal->makeSound();
	delete (meta);
	delete (i);
	delete (j);
	delete (wAnimal);
	delete (wCat);

	
	return 0;
}