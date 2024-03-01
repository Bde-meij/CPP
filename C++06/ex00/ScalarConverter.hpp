#ifndef SCALARCONVERTER_HPP_HPP
#define SCALARCONVERTER_HPP_HPP

#include <iostream>
#include <string>

// there is no such thing as a static class

class ScalarConverter
{
   public:
      ScalarConverter();
      ScalarConverter(const ScalarConverter &ScalarConverter);
      ScalarConverter &operator=(const ScalarConverter &ScalarConverter);
      ~ScalarConverter();

      static int checkIfTof(std::string strArg);
      static void convert(std::string strArg);
};

#endif