#include "iostream"

int rows = 50;
int cols = 5;

int main(){
    int **table = new int *[rows];
    for(int i=0; i<rows; i++){
        table[i] = new int[cols];
        std::cout << i+1 << ") " << std::ends;
        for(int j = 0; j < cols; j++){
            table[i][j] = j;
            std::cout << table[i][j] + 1 << "\t" << std::ends;
        }
        std::cout << "\n" << std::endl;
    }
    return 0;
}