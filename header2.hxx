


#ifndef __header2_hxx
#define __header2_hxx

#include "header2.h"
#include <cstdio>
#include <iostream>

template<class T>
void
TestClass2T<T>::print()
{
  std::cout << "m_B = " << m_B << std::endl << std::flush;
}



#endif 

