#ifndef SWAP_HPP
#define SWAP_HPP

template<typename T> void swap(T &one, T &two)
{
   T three = two;
   two = one;
   one = three;
}

template<typename T> T min(T one, T two)
{
   return(one < two ? one : two);
}

template<typename T> T max(T one, T two)
{
   if (one > two)
      return (one);
   return (two);
}
#endif