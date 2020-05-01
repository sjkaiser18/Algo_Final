//
// Created by Sarah Kaiser on 4/30/20.
//

#ifndef INC_20S_3353_PA04_MIX_H
#define INC_20S_3353_PA04_MIX_H
#include <iostream>
#include <unordered_map>
#include <math.h>
#include <vector>
#include <fstream>
#include <random>
#include <algorithm>
#include <chrono>
template <class T>
class Mix {
public:
    std::ofstream outFile;
    Mix();
    void shuffle(std::vector<std::pair<std::string,int>> old_vec,std::string out_filename);
    ~Mix();

};


#endif //INC_20S_3353_PA04_MIX_H
