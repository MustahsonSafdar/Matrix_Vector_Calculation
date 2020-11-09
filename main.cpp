//  Created by Mustahson Safdar on 16.06.20.
//  Copyright © 2020 Mustahson Safdar. All rights reserved.

#include<iostream>
#include<math.h>
#include <vector>
#include "matrixbuffer.h"
#include "vectorbuffer.h"
#include "mathematics.h"

enum operation {addition=0, multiplication=1, scalarmultiply=2};

int main()
{
    int32_t input;
    int32_t rows, cols, VecSize = 0, k = 0;
    Mathematics maths;

    std::cout<<"Enter the columns and rows of Matrix: "<<std::endl;
    std::cin>> rows;
    std::cin>> cols;

    Matrixbuffer matBuf(rows, cols);
    Matrixbuffer matBuf2(rows, cols);

    matBuf.fillMatrix(rows, cols);
    matBuf.displayMatrix();

    VectorBuffer vecBuf(VecSize);

    std::cout<<"Enter operation number: Addition=[0], Multiplication=[1] or ScalarMultiply=[2] "<<std::endl;
    std::cin >> input;

    switch(input)
    {
    case addition:
        matBuf2.fillMatrix2(rows,cols);
        maths.addition(matBuf,matBuf2);
        break;

    case multiplication:
        maths.multiply(matBuf,vecBuf);
        break;

    case scalarmultiply:
        maths.scalarmultiply(matBuf, k);
        break;

    default:
        std::cout << "Invalid Selection\n";
        break;
    };
        char restart;
        std::cout<<"\nEnter Y or y for Restart and n for end program...";
        std::cin>>restart;
        if(restart == 'y' || restart == 'Y')
        {
            std::cout<<"+++++++++++++++++++-------------------+++++++++++++++++++++++++"<<std::endl;
            main();
        }

};
