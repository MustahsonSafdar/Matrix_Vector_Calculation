#ifndef VECTORBUFFER_H
#define VECTORBUFFER_H
#include <iostream>
#include <vector>
#include <iomanip>

class VectorBuffer
{
public:

    VectorBuffer();

    VectorBuffer(const int32_t VecSize);

    std::vector<int> m_Vec = {};

    /// This function will be used to fill up the Vector
    void fillVector(int VecSize);

    //getters
    int32_t getVecSize() const{return m_VecSize;}
    std::vector<int> getVec() const{return m_Vec;}

    //setters
    void setVecSize(const int32_t &VecSize){m_VecSize =VecSize;}
    void setVec(std::vector<int> &Vec){m_Vec =Vec;}

private:

    int32_t m_VecSize;

}; //VectorBuffer

#endif // VECTORBUFFER_H
