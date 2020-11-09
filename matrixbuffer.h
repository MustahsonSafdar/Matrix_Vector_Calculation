#ifndef MATRIXBUFFER_H
#define MATRIXBUFFER_H

#include <iostream>
#include <iomanip>


class Matrixbuffer
{
public:
    Matrixbuffer();

    Matrixbuffer(const int32_t row, const int32_t col);

    int m_Mat[100][100];

    /// These functions will be used to fill up the matrix
    void fillMatrix(int32_t row, int32_t column);
    void fillMatrix2(int32_t row, int32_t column);

   /// This function will be used to display the matrix
    void displayMatrix();

    //getters
    int32_t getRow() const{return m_Row;}
    int32_t getColumn() const{return m_Column;}

    //setters
    void setRow(const int32_t &row){m_Row =row;}
    void setColumn(const int32_t &col){m_Column =col;}

private:

    int32_t m_Row=1;
    int32_t m_Column=1;

};

#endif // MATRIXBUFFER_H
