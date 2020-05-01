//
// Created by Sarah Kaiser on 4/30/20.
//

#ifndef INC_20S_3353_PA04_RANDOM_MANUAL_H
#define INC_20S_3353_PA04_RANDOM_MANUAL_H
#include <iostream>
#include <unordered_map>
#include <math.h>
#include <vector>
#include <fstream>
#include <random>
#include <algorithm>
#include <chrono>
template <class T>
class Random_Manual {
public:
    std::ofstream outFile;
    Random_Manual();
    void shuffle(std::vector<std::pair<std::string,int>> old_vec,std::string out_filename);
    ~Random_Manual();

};


#endif //INC_20S_3353_PA04_RANDOM_MANUAL_H
