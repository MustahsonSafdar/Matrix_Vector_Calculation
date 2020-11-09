#include "matrixbuffer.h"

Matrixbuffer::Matrixbuffer()
{
    m_Row=1;
    m_Column=1;
}

Matrixbuffer::Matrixbuffer(const int32_t row, const int32_t col)
{
    m_Row=row;
    m_Column=col;
}

void Matrixbuffer::fillMatrix(int row, int column)
{
    m_Row=row;
    m_Column=column;
    std::cout<<"Enter the Elements of Matrix: "<<std::endl;
    for(int i=0; i<m_Row; i++)
        for(int j=0; j<m_Column; j++)
        {
            std::cout<<"Matrix:["<<i<<"]["<<j<<"] : ";
            std::cin>>m_Mat[i][j];
        }
}

void Matrixbuffer::fillMatrix2(int row, int column)
{
    std::cout<<"Enter the columns and rows of 2nd Matrix: "<<std::endl;
    std::cin>> row;
    std::cin>> column;
    int m2_Row=row;
    int m2_Column=column;
    if(m_Column != m2_Column)
    {
        std::cout<<"Error: Addition not possible"<<std::endl;
        exit(0) ;
    }
     else
    std::cout<<"Enter the Elements of 2nd Matrix: "<<std::endl;
    for(int i=0; i<m2_Row; i++)
        for(int j=0; j<m2_Column; j++)
        {
            std::cout<<"Matrix:["<<i<<"]["<<j<<"] : ";
            std::cin>>m_Mat[i][j];
        }

}

void Matrixbuffer::displayMatrix()
{
    for(int i=0; i<m_Row; i++)
    {
        for (int j=0; j< m_Column; j++)
            std::cout<<std::setw(4)<<m_Mat[i][j];
        std::cout<<std::endl;
    }
}
