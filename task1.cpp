#include "header.h"
char* CopyString(const char* str, const int& size) {
    char* copy = new char[size];
    std::copy(str,str + size, copy);
    return copy;
}

char* ConcatinateStrings(const char* a, const char* b, const int& size_a,const int& size_b) {
    const int total = size_a + size_b - 1;
    char* result = new char[total];
    for (int i = 0; i < size_a - 1; i++) {      //добавление первой строки без последнего \0
        result[i] = a[i];
    }
    for (int k = 0; k < size_b - 1; k++) {      //конкатинация
        result[size_a - 1 + k] = b[k];
    }
    result[size_a + size_b - 2] = '\0';         //завершение си строки
    return result;
}