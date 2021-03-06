//
// Created by Sarah Kaiser on 4/25/20.
//

#ifndef INC_20S_3353_PA04_LEXI_H
#define INC_20S_3353_PA04_LEXI_H
#include <iostream>
#include <unordered_map>
#include <math.h>
#include <vector>
#include <fstream>

template <class T>
class Lexi {
public:

    std::ofstream outFile;
    Lexi();
    void shuffle(std::vector<std::pair<std::string,int>> old_vec,std::string out_filename);
    ~Lexi();

};


#endif //INC_20S_3353_PA04_LEXI_H
