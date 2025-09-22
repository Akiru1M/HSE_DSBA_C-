#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cstdlib>
double random(double min, double max)
{
    return (double)(rand())/RAND_MAX*(max - min) + min;
}

int main() {
    int n,m;
    std::cin >> n >> m ;
    //int arr[n][m];

    double** matrix = new double*[n];
    for(int i=0;i<n;++i) {
        matrix[i] = new double[m];
        for(int j=0;j<m;++j) {

            matrix[i][j] = random(0.00, 100.00);
            std::cout << "\t" << matrix[i][j];
        }
        std::cout<<std::endl;
    }
    int n2,m2;
    std::cin >> n2;
    std::cin >> m2;
    double** matrix2 = new double*[n2];
    for(int i=0;i<n2;++i) {
        matrix2[i] = new double[m2];
        for(int j=0;j<m2;++j) {
            matrix2[i][j] = random(0.00, 100.00);
            std::cout << matrix[i][j] << "\t";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    if (m==n2) {

        double** matrix3 = new double*[m];
        for (int i = 0; i < n; i++) {
            matrix3[i] = new double[n];
            for (int j = 0; j < m2; j++) {
                double sum = 0;
                for (int k = 0; k < m; k++) {
                    sum += matrix[i][k] * matrix[k][j];
                }
                matrix3[i][j] = sum;
                std::cout << matrix3[i][j] << "\t";
            }
            std::cout<<std::endl;
        }
    }



}