#ifndef __header2_h
#define __header2_h

#include <cmath>

template<class T>
class TestClass2T
{
  public:

    /** TestClass2 constructor  */
    TestClass2T ()
      {
      m_B=3;
      }                             // constructor
    /** TestClass2 deconstructor  */
    virtual ~TestClass2T (){}                            // destructor


    void print();

    T m_B;

}; // -----  end of class TestClass2  -----


#ifndef __header2_hxx
#include "header2.hxx"
#endif 

#endif 

