#include "header.h"
void Construct(Matrix& out, size_t n, size_t m) {
    out.m_ = m;
    out.n_ = n;
    out.data_ = new int*[m];
    for (int i = 0; i < m; i++) {
        out.data_[i] = new int[n]{};
        }
    }


void Destruct(Matrix& in) {
    for (int i = 0; i < in.m_; i++) {
        delete[] in.data_[i];
        in.data_[i] = nullptr;
    }
    delete[] in.data_;
    in.data_ = nullptr;
}

Matrix Copy(const Matrix& matrix) {
    Matrix M_copy;
    Construct(M_copy, matrix.n_ ,matrix.m_);
    for (int i = 0; i < matrix.m_;i++) {
        std::copy(matrix.data_[i], matrix.data_[i] + matrix.n_, M_copy.data_[i]);  //копирую построчно
    }
    return M_copy;
}

Matrix Add(const Matrix& a, const Matrix& b) {
    if (a.m_ == b.m_ && a.n_ == b.n_) {
        Matrix Sum;
        Construct(Sum,a.n_,a.m_);
        for (int i = 0; i < a.m_; i++) {
            for (int j = 0; j < a.n_; j++){
                Sum.data_[i][j] = a.data_[i][j] + b.data_[i][j];
            }
        }
        return Sum;
    }
    else {
        Matrix empty;
        return empty;
    }
}

Matrix Sub(const Matrix& a, const Matrix& b) {
    if (a.m_ == b.m_ && a.n_ == b.n_) {
        Matrix Sub;
        Construct(Sub,a.n_,a.m_);
        for (int i = 0; i < a.m_; i++) {
            for (int j = 0; j < a.n_; j++){
                Sub.data_[i][j] = a.data_[i][j] - b.data_[i][j];
            }
        }
        return Sub;
    }
    else {
        Matrix empty;
        return empty;
    }
}

Matrix Mult(const Matrix& a, const Matrix& b) {
    if (a.n_ == b.m_) {
        Matrix Mult;
        Construct(Mult,a.n_,b.m_);
        for (int i = 0; i < a.m_; i++) {
            for (int j = 0; j < b.n_; j++) {
                Mult.data_[i][j] = 0;
                for (int k = 0; k < a.n_; k++) {
                    Mult.data_[i][j] += a.data_[i][k] * b.data_[k][j];
                }
            }
        }
        return Mult;
    }
    else {
        Matrix empty;
        return empty;
    }
}
Matrix CopyWithoutResize(const Matrix& matrix) { //делаю несимметричную матрицу симметричной, добавляя нули
    Matrix C;
    bool flag = matrix.m_ > matrix.n_;
    switch (flag) {
        case 1 :
            Construct(C,matrix.m_,matrix.m_);
            break;
        case 0 :
            Construct(C,matrix.n_,matrix.n_);
            break;
    }
    for (int i = 0; i < matrix.m_; i++) {
        for (int j = 0; j < matrix.n_; j++) {
            C.data_[i][j] = matrix.data_[i][j];
        }
    }
    return C;
}
void Transposition(Matrix& matrix) {
    bool flag = 0;
    if (matrix.m_ != matrix.n_) { //проверяю матрицу на симметричность
        matrix = CopyWithoutResize(matrix);
        flag = 1;
    }
    for (int i = 0; i < matrix.m_; i++) {
        for (int j = i + 1; j < matrix.n_; j++) {
            std::swap(matrix.data_[i][j], matrix.data_[j][i]); //транспонирую
        }
    }
    if (flag == 1) {                                //отрезаю лишние нули
        if (matrix.data_[matrix.m_-1][0] == 0) {
            matrix.m_--;
        }
        else {
            matrix.n_--;
        }
    }
}

bool operator==(const Matrix& a, const Matrix& b) {
    if (a.m_ == b.m_ && a.n_ == b.n_) {
        int c = a.m_ * a.n_, k = 0;
        for (int i = 0; i < a.m_; i++) {
            for (int j = 0; j < a.n_; j++) {
                if (a.data_[i][j] == b.data_[i][j]) {
                    k++;
                }
            }
        }
        if (k==c) {
            return true;
        }
    }
    return false;
}
