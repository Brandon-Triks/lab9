#include "header.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
//int main() {
    //task 1
    /*const int size = 12;
    char* str  = new char[size]{"string10100"};
    char* copy;
    copy = CopyString(str,size);    //копирование
    std::cout << copy << '\n';
    delete[] str;
    str = nullptr;
    delete[] copy;
    copy = nullptr;


    const int size_a = 5,size_b = 7;
    char* a = new char[size_a]{"str1"};
    char* b = new char[size_b]{"str100"};
    char* result = ConcatinateStrings(a,b,size_a,size_b);   //конкатинация
    std::cout << result << '\n' << '\n';
    delete[] a;
    delete[] b;
    delete[] result;
    a = nullptr;
    b = nullptr;
    result = nullptr; */


    //task2
    //Matrix out;                   //констракт, дестракт матрицы
    //Construct(out,5,6);
    /*for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << out.data_[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    //Destruct(out);
    Matrix m_copy = Copy(out);
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << m_copy.data_[i][j] << ' ';
        }
        std::cout << std::endl;
    }*/


    /*Matrix a1;
    Construct(a1, 3,4);
    Matrix b1;
    Construct(b1, 3,4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            a1.data_[i][j] = 7;
            b1.data_[i][j] = 7;
        }
    }*/
    // Matrix res = Add(a1,b1);     //сложить, вычесть, умножить и сравнить матрицы а1, b1
    // Matrix res = Sub(a1,b1);
    //Matrix res = Mult(a1,b1);
    /*for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << res.data_[i][j] << ' ';
        }
        std::cout << std::endl;
    }*/
    //std::cout << operator==(a1,b1);


   /* Matrix res1;          //транспонирование через ввод элементов матрицы
    Construct(res1,4,3);
    int v;
    for (int i = 0; i < res1.m_; i++) {
        for (int j = 0; j < res1.n_; j++) {
            std::cin >> v; std::cout << '\n';
            res1.data_[i][j] = v;
        }
    }

    for (int i = 0; i < res1.m_; i++) {
        for (int j = 0; j < res1.n_; j++) {
            std::cout << res1.data_[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    Transposition(res1);
    std::cout << std::endl;
    for (int i = 0; i < res1.m_; i++) {
        for (int j = 0; j < res1.n_; j++) {
            std::cout << res1.data_[i][j] << ' ';
        }
        std::cout << std::endl;
    }*/

}