#ifndef MATHEMATICS_H
#define MATHEMATICS_H

#include <iostream>
#include <math.h>
#include <vector>
#include <matrixbuffer.h>
#include <vectorbuffer.h>

class Mathematics : public Matrixbuffer, public VectorBuffer
{
public:
    Mathematics();

    void multiply (Matrixbuffer &m,VectorBuffer &v);
    void scalarmultiply (Matrixbuffer &m, int32_t k);
    void addition (Matrixbuffer &m1,Matrixbuffer &m2);

private:

};

#endif // MATHEMATICS_H
