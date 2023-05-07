template<class T>
class TestTemp
{
public:
    TestTemp();
    void SetValue(T obj_i);
    T Getalue();

private:

    T m_Obj;
};

#include "TestTemp.cpp.h"