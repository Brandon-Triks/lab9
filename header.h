//
// Created by user on 17.11.2025.
//

#ifndef LAB9_HEADER_H
#define LAB9_HEADER_H

#include <iostream>
#include <vector>


struct Matrix {
    // двумерный массив с данными.
    int** data_ = nullptr;
    // количество столбцов
    size_t n_ = 0u;
    // количество строк
    size_t m_ = 0u;
};

char* CopyString(const char* str, const int& size);
char* ConcatinateStrings(const char* a, const char* b, const int& size_a,const int& size_b);


void Construct(Matrix& out, size_t n, size_t m);
void Destruct(Matrix& in);
Matrix Copy(const Matrix& matrix);
Matrix Add(const Matrix& a, const Matrix& b);
Matrix Sub(const Matrix& a, const Matrix& b);
Matrix Mult(const Matrix& a, const Matrix& b);
void Transposition(Matrix& matrix);
bool operator==(const Matrix& a, const Matrix& b);
#endif //LAB9_HEADER_H