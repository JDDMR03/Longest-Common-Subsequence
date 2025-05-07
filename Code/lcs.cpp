/*********************************************************************************
** MIT License
**
** Copyright (c) 2025 Vikas Awadhiya
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:

** The above copyright notice and this permission notice shall be included in all
** copies or substantial portions of the Software.

** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE.
*********************************************************************************/

#include "lcs.hpp"

#include <vector>

using namespace std;


namespace {

    string bottomUpTraversalOfTable(vector< vector<size_t> > table, const string& str2) {

        string subSeq(table.back().back(), ' ');

        auto sRIt = subSeq.rbegin();

        size_t row = table.size() - 1;
        size_t col = table.front().size() - 1;

        while (row > 0) {

            if (table[row - 1][col] == table[row][col]) {

                --row;
            }
            else if (table[row][col - 1] == table[row][col]) {

                --col;
            }
            else {

                *sRIt = str2[row - 1];
                ++sRIt;

                --row;
                --col;
            }
        }

        return subSeq;
    }

}

string lcs::subsequence(const string& str1, const string& str2) {

    if ( str1.empty() || str2.empty() ) {

        return "";
    }

    vector< vector<size_t> > table( str2.size() + 1, vector<size_t>(str1.size() + 1) );

    for (size_t i = 0; i < str2.size(); ++i) {

        for (size_t j = 0; j < str1.size(); ++j) {

            if (str1[j] == str2[i]) {

                table[i + 1][j + 1] = table[i][j] + 1;
            }
            else {

                table[i + 1][j + 1] = max(table[i][j + 1], table[i + 1][j]);
            }
        }
    }

    return bottomUpTraversalOfTable(std::move(table), str2);
}