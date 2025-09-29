#include <iostream>



int main() {
    int n , m;
    std::cin >> n;
    std::cin >> m;
    char matrix[n+2][m+2];
    int n_bomb; std::cin >> n_bomb;
    int x,y;
    for (int i = 0; i < n+2; i++) {
        for (int j = 0; j < m+2; j++) {
            matrix[i][j] = '0';
        }
    }




    for (int i = 0; i < n_bomb; i++) {
        std::cin >> x >> y;
        matrix[x][y] = '*';
    }

    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < m+1; j++) {
            if (matrix[i][j] != '*') {
                if (matrix[i+1][j] == '*')
                    matrix[i][j] += 1;
                if (matrix[i-1][j] == '*')
                    matrix[i][j] += 1;
                if (matrix[i][j+1] == '*')
                    matrix[i][j] += 1;
                if (matrix[i][j-1] == '*')
                    matrix[i][j] += 1;
                if (matrix[i+1][j-1] == '*')
                    matrix[i][j] += 1;
                if (matrix[i-1][j+1] == '*')
                    matrix[i][j] += 1;
                if (matrix[i+1][j+1] == '*')
                    matrix[i][j] += 1;
                if (matrix[i-1][j-1] == '*')
                    matrix[i][j] += 1;
            }
        }
    }

    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < m+1; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}