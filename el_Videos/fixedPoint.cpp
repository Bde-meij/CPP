#include <iostream>
#include <algorithm>

int main()
{
	int i = 0;
	// std::cout << 1234.4321f / (1 << 8) << std::endl;
	// std::cout << (float)1234.4321f / (1 << 8) << std::endl;
	i++;
	std::cout << i << std::endl;
	i++;
	std::cout << i << std::endl;
	i++;
	std::cout << i << std::endl;
	i++;
	std::cout << i << std::endl;
	std::cout << i << std::endl;
	std::cout << i << std::endl;
}




// class FixedPoint_16_16
// {
//     short          intPart;
//     unsigned short fracPart;

// public:
//     FixedPoint_16_16(double d)
//     {
//         *this = d; // calls operator=
//     }

//     FixedPoint_16_16& operator=(double d)
//     {
//         intPart = static_cast<short>(d);
//         fracPart = static_cast<unsigned short>
//                     ((numeric_limits<unsigned short> + 1.0)*d);
//         return *this;
//     }

    // Other operators can be defined here
// };

// template <class BaseType, size_t FracDigits>
// class fixed_point
// {
//     const static BaseType factor = 1 << FracDigits;

//     BaseType data;

// public:
//     fixed_point(double d)
//     {
//         *this = d; // calls operator=
//     }

//     fixed_point& operator=(double d)
//     {
//         data = static_cast<BaseType>(d*factor);
//         return *this;
//     }

//     BaseType raw_data() const
//     {
//         return data;
//     }

//     // Other operators can be defined here
// };


// fixed_point<int, 8> fp1;           // Will be signed 24:8 (if int is 32-bits)
// fixed_point<unsigned int, 16> fp1;

// If you want 16:16

// double f = 1.2345;
// int n;

// n=(int)(f*65536);
// if you want 24:8

// double f = 1.2345;
// int n;

// n=(int)(f*256);