/**
 * index.cpp
 * Simple class for conversion between 1- and 2-D
 * indexing.
 *
 * Copyright (c) 2014 Marshall Farrier
 * license http://opensource.org/licenses/gpl-license.php GNU Public License
 *
 * Author Marshall Farrier
 * Since 2014-05-28
 */

//#include <cstddef>
#include "index.h"

Index::Index(const int &cols) {
    cols_ = cols;
}

int Index::row(const int &index) const {
    return index / cols_;
}

int Index::col(const int &index) const {
    return index % cols_;
}

int Index::index(const int &row, const int &col) const {
    return row * cols_ + col;
}
