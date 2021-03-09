/*
* This class is used to represent data that is used by the operations
*/

#ifndef DATA_
#define DATA_

#include <vector>

class Data {
    public:
        std::vector<unsigned char> data;

        Data() : data() {}
};

#endif