#include "Array.hpp"

int main()
{
    {
        std::cout << std::endl;
        std::cout << "testing limit under" << std::endl;
        Array<int> arr(40);
        try
        {
            std::cout << arr[-1] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << &e << " out of bounds" << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "testing limit over" << std::endl;
        Array<int> arr(40);
        try
        {
            std::cout << arr[40] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << &e << " out of bounds" << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "testing read" << std::endl;
        Array<int> arr(40);
        Array<int> brr(356);
        arr = brr;
        int i = 0;
        while (i < 20)
        {
            std::cout << arr[i] << std::endl;
            i++;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "testing assign / read" << std::endl;
        Array<int> arr(40);
        Array<int> brr(356);
        brr[10] = 'a';
        arr = brr;
        brr[10] = 'b';
        int i = 0;
        while (i < 12)
        {
            std::cout << arr[i] << std::endl;
            i++;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "testing construct/assign" << std::endl;
        Array<int> arr(40);
        arr[5] = 500;
        Array<int> brr = arr;
        std::cout << brr[5] << std::endl;
    }
	{
		std::cout << "testing empties" << std::endl;
		Array<int> B;
		Array<int> A = B;
	}
}