#ifndef __main_h
#define __main_h

#include <cmath>

class TestClassHeader
{
  public:

    /** TestClassMain constructor  */
    TestClassHeader (){};                             // constructor
    /** TestClassMain deconstructor  */
    virtual ~TestClassHeader (){};                            // destructor


    int m_Bh;

}; // -----  end of class TestClassMain  -----

int 
func ( int a )
{

  return 2*a;
}


#endif 
