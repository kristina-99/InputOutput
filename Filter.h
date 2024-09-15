#ifndef FILTER_H
#define FILTER_H
#include <vector>
#include <iostream>
#include <string>
#include "Stream.h"

using namespace std;

class Filter {
public:
    string getFilterInput() const;
    void setFilterInput();
    Filter(Stream& streamObj, string phrase);
    ~Filter();
protected:
    vector<char> filterInput;
    string phrase;
    Stream& streamObj;
};

#endif 