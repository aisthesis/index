/**
 * index.h
 * Simple class for conversion between 1- and 2-D
 * indexing.
 *
 * Copyright (c) 2014 Marshall Farrier
 * license http://opensource.org/licenses/gpl-license.php GNU Public License
 *
 * Author Marshall Farrier
 * Since 2014-05-28
 */

#ifndef INDEX_H
#define INDEX_H

class Index {
    private:
    // the number of columns
    int cols_;

    public:
    Index(const int &);
    ~Index() {};

    int row(const int &) const;
    int col(const int &) const;
    int index(const int &, const int &) const;
};

#endif
