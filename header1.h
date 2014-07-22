#ifndef __header1_h
#define __header1_h

#include <cmath>

class TestClass2
{
  public:

    /** TestClass2 constructor  */
    TestClass2 ()
      {
      m_B=3;
      }                             // constructor
    /** TestClass2 deconstructor  */
    virtual ~TestClass2 (){}                            // destructor


    void print();

    int m_B;

}; // -----  end of class TestClass2  -----


#ifndef __header1_hxx
#include "header1.hxx"
#endif 

#endif 

