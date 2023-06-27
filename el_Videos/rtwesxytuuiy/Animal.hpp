#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const &);
		// Animal &operator=(Animal const &);
		~Animal();
		void run(int distance);
		void eat(int kilograms);
		
	protected:
		std::string name;
		int _noLegs;
	};

#endif