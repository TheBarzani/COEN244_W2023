#include <iostream>
using namespace std;

class Matrix {
    
    int ** mat;
    int n, m;
    
    public:

        // Default Constructor
        Matrix():n(1), m(1){
            mat = new int * [n];
            for (int i = 0; i < n; i++) {
                mat[i] = new int[m];
            }
            setValues();
        };

        // Constructor.
        Matrix(int _n, int _m) {
            n = _n;
            m = _m;
            mat = new int * [n];
            for (int i = 0; i < n; i++) {
                mat[i] = new int[m];
            }
            setValues();
        }

        // Overloading () operator.
        int & operator()(int i, int j) {
            return mat[i][j];
        }

        // Can this function be private
        // Initializing values.
        void setValues() {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    mat[i][j] = i * m + j;
                }
            }
        }

        // TODO: Redo this with the cout << operator

        // Printing Matrix.
        void print() {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
        }

        // TODO: Overload the assigment "=" operator
        
};

int main() {
    
    Matrix mat(2, 2);

    Matrix matcopy;
    matcopy.print();

    matcopy = mat;
    
    cout << "Matrix values are - \n";
    mat.print();
    matcopy.print();

    cout << "Element at 2nd row and 2nd coloumn is " << mat(1, 1);
    
    return 0;
}

/*Inspired by: https://www.scaler.com/topics/binary-operator-overloading-in-cpp/ */