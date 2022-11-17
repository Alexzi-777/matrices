//
//  main.cpp
//  Matrices
//
//  Created by Alex  on 11/16/22.
//

#include <iostream>


// print matrix function
int get_row(){
    int row=0;
    std::cout << "Enter number of rows: ";
    std::cin >> row;
    return row;
}

int get_column(){
    int col = 0;
    std::cout << "Enter number of columns: ";
    std::cin >> col;
    return col;
}

double * get_mat(int row,int col){
    
    double * mat = new double[100];
    int i, j, k = 0;
    for(i = 0; i < row; i++){
        std::cout << "Enter values for row " << i + 1 << "\n";
        for(j = 0; j < col; j++){

            std::cin >> mat[k];
            k++;
            
        }
    }
    
    return mat;
    
}

void print_mat(int row, int col, double  mat[]){
    int i,j,k=0;
    for(i = 0; i < row; i++){
        std::cout << "[ ";
        for(j = 0; j < col; j++){
            std::cout << mat[k] << " ";
            k++;
        }
        std::cout << "]\n";
    }
    return;
};


int main(int argc, const char * argv[]) {

// oat // x -> -z // y -> x // z -> -y //

    int row = get_row();
    int col = get_column();
    double * pMat1 = new double;
    pMat1 = get_mat(row,col);
    print_mat(row, col, pMat1);
    
    
}

