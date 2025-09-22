#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cstdlib>
#include <iomanip>

double random(double min, double max)
{
    return (double)(rand())/RAND_MAX*(max - min) + min;
}
void output(std::string str) {


    int count = 0;

    std::string words[1] {str};

    for (std::string word : words) {
        for (char i: word) {
            std::cout << i;
            std::this_thread::sleep_for(std::chrono::milliseconds(80));
        }
    }
    std::cout << std::endl;
}
int main() {

    int n,m;
    const int time = 10000;
    std::cin >> n >> m ;
    //int arr[n][m];
    output("matrix 1");
    double** matrix = new double*[n];
    for(int i=0;i<n;++i) {
        matrix[i] = new double[m];
        for(int j=0;j<m;++j) {

            matrix[i][j] = random(0.00, 100.00);
            std::cout << std::setprecision(2) << matrix[i][j] << "\t";
        }
        std::cout<<std::endl;
    }

    int n2,m2;
    std::cin >> n2;
    std::cin >> m2;
    output("matrix 2");
    double** matrix2 = new double*[n2];
    for(int i=0;i<n2;++i) {
        matrix2[i] = new double[m2];
        for(int j=0;j<m2;++j) {
            matrix2[i][j] = random(0.00, 100.00);
            std::cout<< std::setprecision(2) << matrix2[i][j] << "\t";
        }
        std::cout<<std::endl;
    }
    std::cout<<"================================================================="<<std::endl;
    if (m==n2) {
        output("Start");
        double** matrix3 = new double*[n];
        for (int i = 0; i < n; ++i) {
            matrix3[i] = new double[m2];
            for (int j = 0; j < m2; ++j) {
                double sum = 0;
                for (int k = 0; k < m; ++k) {
                    sum += matrix[i][k] * matrix2[k][j];
                    std::cout << "___";
                    std::this_thread::sleep_for(std::chrono::milliseconds(time/m/2/(n*m2)));
                    std::cout << "\b\b\b" << "   " << "\b\b\b";
                    std::this_thread::sleep_for(std::chrono::milliseconds(time/m/2/(m*m2)));
                }
                matrix3[i][j] = sum;
                std::cout << std::setprecision(5) << matrix3[i][j] << "\t";
            }
            std::cout<<std::endl;
        }
        output("End");
    } else
        output("Incorrect sizes");




}