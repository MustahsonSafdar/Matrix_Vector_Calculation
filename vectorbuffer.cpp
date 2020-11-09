#include "vectorbuffer.h"

VectorBuffer::VectorBuffer()
{

}

VectorBuffer::VectorBuffer(const int32_t VecSize)
{
    m_VecSize=VecSize;
}

void VectorBuffer::fillVector(int VecSize)
{
    int i, value = 0;

        std::cout << "Enter the Size of Vector: " << std::endl;
        std::cin>>VecSize;
        m_VecSize=VecSize;

        std::cout<<"Enter the Elements of Vector: "<<std::endl;
        for(i=0 ; i<m_VecSize ; i++)
        {
            std::cin>>value;
            m_Vec.push_back(value);
        }
        std::cout<<"Resultant Vector is: "<<std::endl;
        for(i=0 ; i<m_VecSize ; i++)
        {
            std::cout<<std::setw(4)<<m_Vec[i];
        }
        std::cout<<std::endl;
}
