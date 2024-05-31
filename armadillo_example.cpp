#include <armadillo>
#include <iostream>

int main() {
    arma::mat A = arma::randu<arma::mat>(4, 4);
    arma::vec b = arma::randu<arma::vec>(4);

    arma::vec x = arma::solve(A, b);

    A.print("Matrix A:");
    b.print("Vector b:");
    x.print("Solution x:");

    return 0;
}