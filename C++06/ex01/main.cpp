#include "Serializer.hpp"

int main()
{
	struct Data data;
	data.importantLetter = 'b';
	std::cout << &data << std::endl;
	std::cout << Serializer::deserialize(Serializer::serialize(&data)) << std::endl;
}
