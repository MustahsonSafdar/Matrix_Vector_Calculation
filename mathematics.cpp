#include "mathematics.h"


Mathematics::Mathematics()
{

}
void Mathematics::multiply (Matrixbuffer &m,VectorBuffer &v)
{
    v.fillVector(v.getVecSize());
    std::vector<int> solution;

     if(m.getColumn() != v.getVecSize())
    {
        std::cout<<"Error: Multiplication not possible"<<std::endl;
        exit(0);
    }
    else
    {
      solution.resize(v.getVecSize()); //resize solution to specifc size.
    }
     std::cout<<"Vector Size:"<<solution.size()<<std::endl;
     std::cout<<std::endl;
     for(int i=0;i<v.getVecSize();i++)
    {
        for(int j=0;j<m.getRow();j++)
        {
             solution[i]+=( m.m_Mat[i][j]*v.m_Vec[j]);
        }
    }
        std::cout<<std::endl;
        std::cout<<"The Multiplication of Matrix and Vector is: "<<std::endl;
        for(int i=0;i<m.getColumn();i++)
        {
           std::cout<<"|"<<solution[i]<<"|"<<std::endl;
        }
};

void Mathematics::scalarmultiply(Matrixbuffer &m, int32_t k)
{
    std::cout<<"Enter the value of Scalar Multiplier: "<<std::endl;
    std::cin>> k;
       for(int i=0; i<m.getRow(); i++)
        for(int j=0; j<m.getColumn(); j++)
        {
                    m.m_Mat[i][j] = m.m_Mat[i][j]*k;
        }
       std::cout<<"Scalar Product of the Matrix is: "<<std::endl;
       m.displayMatrix();
};

void Mathematics::addition(Matrixbuffer &m1, Matrixbuffer &m2)
{
    Matrixbuffer result;
    for(int i = 0; i < m1.getRow() ; ++i)
    {
        for(int j = 0; j < m1.getColumn(); ++j)
        {
            result.m_Mat[i][j] = m1.m_Mat[i][j] + m2.m_Mat[i][j];
        }
    }
    std::cout<<"Sum of two Matrix is: "<<std::endl;
    for(int i=0; i<m2.getRow(); i++)
    {
        for (int j=0; j< m2.getColumn(); j++)
            std::cout<<std::setw(4)<<result.m_Mat[i][j];
        std::cout<<std::endl;
    }
};
