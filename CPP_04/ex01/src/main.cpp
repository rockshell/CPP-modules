/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:13:22 by arch              #+#    #+#             */
/*   Updated: 2025/06/02 19:25:12 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	testingAnimalClass() {
	std::cout << "====================\nAnimal class testing step\n====================" << std::endl;
	const Animal* meta = new Animal();
	std::cout << "Meta should produce some generic animal sounds" << std::endl;
	meta->makeSound();
	delete (meta);
};

void	testingCatClass() {
	std::cout << "====================\nCat class testing step\n====================" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "Cat should produce an cat's sound" << std::endl;
	cat->makeSound();
	std::cout << "The type for this object should be Cat" << std::endl;
	std::cout << cat->getType() << std::endl;
	delete (cat);
	const Cat* new_cat = new Cat();
	const Cat* peow_cat = new_cat;
	new_cat->makeSound();
	peow_cat->makeSound();
};

void	testingDogClass() {
	std::cout << "====================\nDog class testing step\n====================" << std::endl;
	const Animal* dog1 = new Dog();
	const Animal* dog2 = new Dog();
	std::cout << "Dog should produce an dog's sound" << std::endl;
	dog1->makeSound();
	std::cout << "The type for this object should be Dog" << std::endl;
	std::cout << dog1->getType() << std::endl;
	std::cout << "Copy-assignement should be called" << std::endl;
	dog2 = dog1;
	std::cout << "Dog should produce an dog's sound" << std::endl;
	dog2->makeSound();
	delete (dog1);
	delete (dog2);
};

void	testingBrainCopies() {
	std::cout << "====================\nSome brain shenenigans testing step\n====================" << std::endl;
	const Dog* dog1 = new Dog();
	const Dog* dog2 = new Dog(*dog1);
	dog1->readTheMind();
	delete (dog1);
	dog2->readTheMind();
	delete(dog2);
}

int main() {
	// testingAnimalClass();
	// testingCatClass();
	testingDogClass();
	// testingBrainCopies();
	std::cout << "====================\nEnd of tests\n====================" << std::endl;
	return (0);
}
