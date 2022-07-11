#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

std::vector<int> genVec(
    const unsigned int seed,
    const int min,
    const int max,
    const int size) {

        std::vector<int> vec;
            srand(seed);
                for (int i = 0; i < size; i++) {
                    int interval = max - min;
                    int elem = rand() % interval + min;
                    vec.push_back(elem);
                }

    return vec;
}

/**
 * This function prints the vector in the standard output.
 * @param the vector that will be printed.
 */

void printVec(std::vector<int> vec) {
    std::cout << ">";
        for (const int elem : vec) {
            std::cout << " " << elem;
        }
    std::cout << std::endl;
}

/**
 * This function reads the stats of a vector from the standard input. Values
 * are copied into variables through pointer assignments.
 * @param seed the initializer of the random number generator.
 * @param min the minimum possible element in the vector.
 * @param max the maximum possible element in the vector.
 * @param size the size of the vector.
 */

void readVecData(unsigned int *seed, int* min, int* max, int* size) {
    std::cin >> *seed;
    std::cin >> *min;
    std::cin >> *max;
    std::cin >> *size;
}

/**
 * This function produces the Hadamard product of two vectors. If v1 is (a1, b1)
 * and v2 is (a2, b2), then it produces the new vector v1 * v2 = (a1*a2, b1*b2).
 * @param v1 the first vector in the product.
 * @param v2 the second vector in the product.
 * @return the Hadamard product of v1 and v2.
 */

std::vector<int> hadProd(std::vector<int> v1, std::vector<int> v2) {
  // Complete o código aqui.
}


/**
 * This function produces the dot product of two vectors. If v1 is (a1, b1)
 * and v2 is (a2, b2), then it produces the integer v1 . v2 = a1*a2 + b1*b2.
 * @param v1 the first vector in the product.
 * @param v2 the second vector in the product.
 * @return the dot product of v1 and v2.
 */
int dotProd(std::vector<int> v1, std::vector<int> v2) {
  // Complete o código aqui.
}

int main() {
    unsigned int seed1, seed2;
    int min1, min2;
    int max1, max2;
    int size1, size2;

// Read the first vector:

    readVecData(&seed1, &min1, &max1, &size1);
    std::vector<int> vec1 = genVec(seed1, min1, max1, size1);

// Read the second vector:
    readVecData(&seed2, &min2, &max2, &size2);
    std::vector<int> vec2 = genVec(seed2, min2, max2, size2);

// Print the vectors:
    printVec(vec1);
    printVec(vec2);
// Print the dot product of the two vectors, which is an integer:
    std::cout << dotProd(vec1, vec2) << std::endl;
// Print the Hadamard product of the two vectors, which is another vector:
    printVec(hadProd(vec1, vec2));
}
