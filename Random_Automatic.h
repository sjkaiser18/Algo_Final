//
// Created by Sarah Kaiser on 5/1/20.
//

#ifndef INC_20S_3353_PA04_RANDOM_AUTOMATIC_H
#define INC_20S_3353_PA04_RANDOM_AUTOMATIC_H

#include <iostream>
#include <unordered_map>
#include <math.h>
#include <vector>
#include <fstream>
#include <random>
#include <algorithm>
#include <chrono>
template <class T>
class Random_Automatic {
public:
    std::ofstream outFile;
    Random_Automatic();
    void shuffle(std::vector<std::pair<std::string,int>> old_vec,std::string out_filename);
    ~Random_Automatic();
};


#endif //INC_20S_3353_PA04_RANDOM_AUTOMATIC_H
