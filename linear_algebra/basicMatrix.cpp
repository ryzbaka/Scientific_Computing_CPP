//Basic matrix functionality using Eigen.
#include <iostream>
#include <vector>
#include <Eigen/Dense>

using Eigen::MatrixXd;

int main()
{
    MatrixXd m(2, 2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            m(i, j) = i + j;
        }
    }
    std::cout << m << "\n";

    Eigen::Matrix<float, 2, 2> m2; // another way of defining a matrix.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            m2(i, j) = i + j;
        }
    }
    std::cout << m2 << "\n";

    Eigen::Matrix<float, 2, 2> m3 = Eigen::Matrix<float, 2, 2>::Zero(); //defining identity matrix
    std::cout << m3 << "\n";

    auto m4 = Eigen::Matrix<float, 3, 3>::Random();
    std::cout << m4 << "\n";

    std::vector<float> someVector = {1, 2, 3, 4};
    Eigen::Map<Eigen::Matrix<float, 2, 2>> m5(someVector.data());
    std::cout << m5 << "\n";
    //example of using std::vector to initialize an Eigen::Matrix. (column major)
    std::cout << m5(1, 0) << "\n";
    //someVector.data() returns a pointer to the first element.

    auto m6 = Eigen::Matrix2d::Random(); //Eigen::Matrix2d is shorthand for Eigen::Matrix<double, 2, 2>
    std::cout << m6 << "\n";
    Eigen::Matrix<double, 2, 2> m7 = Eigen::Matrix<double, 2, 2>::Random(); ///same thing as code on  line 43
    std::cout << m7 << "\n";
}