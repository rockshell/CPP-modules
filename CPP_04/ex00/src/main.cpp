/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:13:22 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:58:58 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

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
};

void	testingDogClass() {
	std::cout << "====================\nDog class testing step\n====================" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "Dog should produce an dog's sound" << std::endl;
	dog->makeSound();
	std::cout << "The type for this object should be Dog" << std::endl;
	std::cout << dog->getType() << std::endl;
	delete (dog);
};

void	testingWrongCat() {
	std::cout << "====================\nWrong Cat class testing step\n====================" << std::endl;
	const WrongAnimal* cococat = new WrongCat();
	std::cout << "This cat should produce very strange noise" << std::endl;
	cococat->makeSound();
	std::cout << "The type of this 'cat'" << std::endl;
	std::cout << cococat->getType() << std::endl;
	delete (cococat);
};


int main() {
	testingAnimalClass();
	testingCatClass();
	testingDogClass();
	testingWrongCat();
	std::cout << "====================\nEnd of tests\n====================" << std::endl;
	return (0);
}
