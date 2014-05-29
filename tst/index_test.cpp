/**
 * index_test.cpp
 * Unit tests for Index class
 *
 * Copyright (c) 2014 Marshall Farrier
 * license http://opensource.org/licenses/gpl-license.php GNU Public License
 *
 * Author Marshall Farrier
 * Since 2014-05-28
 */

#include <iostream>

#include "index.h"

int main() {
    const int cols = 5;
    const int num_cases = 4;
    int test_cases[] = { 0, 5, 12, 103 };
    int rows_expected[] = { 0, 1, 2, 20 };
    int cols_expected[] = { 0, 0, 2, 3 };
    int tests_passed = 0,
        tests_failed = 0,
        actual;
    Index index(cols);

    for (int i = 0; i < num_cases; ++i) {
        actual = index.row(test_cases[i]);
        if (actual == rows_expected[i]) {
            ++tests_passed;
        } else {
            std::cout << "Test case failed!" << std::endl;
            std::cout << "expected: " << rows_expected[i] << ", actual: " << actual; 
            std::cout << ", input: " << test_cases[i] << std::endl << std::endl;
            ++tests_failed;
        }
        actual = index.col(test_cases[i]);
        if (actual == cols_expected[i]) {
            ++tests_passed;
        } else {
            std::cout << "Test case failed!" << std::endl;
            std::cout << "expected: " << cols_expected[i] << ", actual: " << actual; 
            std::cout << ", input: " << test_cases[i] << std::endl << std::endl;
            ++tests_failed;
        }
        actual = index.index(rows_expected[i], cols_expected[i]);
        if (actual == test_cases[i]) {
            ++tests_passed;
        } else {
            std::cout << "Test case failed!" << std::endl;
            std::cout << "expected: " << test_cases[i] << ", actual: " << actual; 
            std::cout << ", input: " << rows_expected[i] << ", " << cols_expected[i] << std::endl << std::endl;
            ++tests_failed;
        }
    }
    std::cout << tests_passed << " tests passed." << std::endl;
    std::cout << tests_failed << " tests failed." << std::endl;

    return 0;
}
