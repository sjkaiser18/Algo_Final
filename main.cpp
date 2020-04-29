//
// Created by Sarah Kaiser on 4/23/20.
//

#include "Lexi.h"
#include "JT.h"

#include <iostream>
#include <chrono>
#include <fstream>
#include <unordered_map>

using namespace std::chrono;
int main(int argc, char* argv[]){


    std::string tests[4]={"bingo.txt","hoyle.txt","survey_sample.txt","raffle.txt"};
    
    std::ofstream timingFile;
    std::ifstream inputFile;
    timingFile.open("timing.txt");
    timingFile.clear();
    //input some sort of casino card testing
    //randomized surveys- how big sites like Amazon could get random feedback
    //BINGO?
    //randomization in clinical trials- list of patients


    Lexi<std::string> lex;
    JT<std::string> jt;
    for(int i =0;i<tests->size();i++){
        inputFile.open(tests[i]);
        int count=0;
        std::unordered_map<std::string, int> umap;//this hashes the values as to not do strcmp for every value
        std::unordered_map<int, std::string> switch_out; //this is just to get values for the output
        while(inputFile.good()) {
            std::string item;
            getline(inputFile, item);
            std::cout << item << " ";
            umap.insert(std::make_pair(item, count));
            switch_out.insert(std::make_pair(count,item));
            count++;
        }
        inputFile.close();
    int val=1;

    while(val<3) {
        auto start = high_resolution_clock::now();
        std::cout << "Doin time, and the living's easy" << std::endl;
        //i will have to hash the values first, probably in main, and then send them to the functions
        val == 1 ? lex.shuffle() : jt.shuffle();
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);
        if (!timingFile.is_open()) {

            std::cout << duration.count() << " microseconds" << std::endl;
        } else {
            timingFile << duration.count() << " microseconds." << std::endl;
        }
        val++;
    }
}

    timingFile.close();

    return 0;
}

