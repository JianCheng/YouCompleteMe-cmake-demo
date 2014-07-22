

#include "main.h"
#include "header1.h"
#include "header2.h"
#include <cstdio>
#include <iostream>
#include <cmath>


class TestClassMain
{
  public:

    /** TestClassMain constructor  */
    TestClassMain (){};                             // constructor
    /** TestClassMain deconstructor  */
    virtual ~TestClassMain (){};                            // destructor


    int m_A;

}; // -----  end of class TestClassMain  -----


int 
main (int argc, char const* argv[])
{
  
  TestClass2 tc;
  tc.print();

  TestClass2T<double> tc2;
  tc2.print();

  TestClassHeader th;
  th.m_Bh= func(30);

  return 0;
}
