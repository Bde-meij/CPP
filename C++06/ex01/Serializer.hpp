#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>

struct Data
{
   int usefulNumber;
   char importantLetter;
   void********** isLifeReal;
};

class Serializer
{
   public:
   Serializer();
   Serializer(const Serializer &serializer);
   Serializer &operator=(const Serializer &serializer);
   ~Serializer();

   static uintptr_t serialize(Data *ptr);
   static Data *deserialize(uintptr_t raw);
};

#endif