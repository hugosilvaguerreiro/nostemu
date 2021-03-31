#ifndef DATA
#define DATA

#include <vector>

/*
 * This class represents a certain ammount of data that was loaded from the ROM
**/
class Data {
    public:
        std::vector<unsigned char> data;
        int size;

        Data(unsigned char* d, int size) {
            for(int i=0; i < size; i++) {
                data.push_back(d[i]);
            }
        }
};

#endif