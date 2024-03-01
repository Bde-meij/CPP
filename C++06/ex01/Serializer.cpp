#include "Serializer.hpp"

Serializer::Serializer()
{
	// std::cout << "ser def con" << std::endl;
}

Serializer::Serializer(const Serializer &serializer)
{
	(void) serializer;
	// std::cout << "ser copy con" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &serializer)
{
	(void) serializer;
	return (*this);
	// std::cout << "ser assign con" << std::endl;
}

Serializer::~Serializer()
{
	// std::cout << "ser destroy" << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	std::cout << "in ser: " << ptr << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	std::cout << "After Serialize: " << &raw << std::endl;
	return (reinterpret_cast<Data *>(raw));
}