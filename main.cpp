//
// Created by Sarah Kaiser on 4/23/20.
//

#include "Lexi.h"
#include "FY.h"
#include "Random_Manual.h"
#include "Random_Automatic.h"

#include <iostream>
#include <chrono>
#include <fstream>
#include <unordered_map>

using namespace std::chrono;
int main(int argc, char* argv[]){

    std::string tests[4]={"bingo.txt","hoyle.txt","patient_trials.txt","raffle.txt"};
    
    std::ofstream timingFile;
    std::ifstream inputFile;
    timingFile.open("timing.txt");
    timingFile.clear();

    Lexi<std::string> lex;
    FY<std::string> fy;
    Random_Manual<std::string> mx;
    Random_Automatic<std::string> ax;

    for(int i =0;i<4;i++){
        inputFile.open(tests[i]);
        std::string input_name=tests[i];
        input_name.erase (input_name.end()-4,input_name.end());
        std::string out_filename= "../output_folder/"+input_name+"_output"+".txt";
        std::ofstream outFile;

        outFile.open(out_filename);
        outFile.clear();
        outFile.close();

        int count=0;
        std::vector<std::pair<std::string,int>> old_vec;
        while(inputFile.good()) {
            std::string item;
            getline(inputFile, item);
            old_vec.push_back(std::make_pair(item, count));
            count++;
        }
        inputFile.close();
    int val=1;


    while(val<5) {
        auto start = high_resolution_clock::now();

        if(val==1)
                lex.shuffle(old_vec,out_filename);
        if(val==2)
                fy.shuffle(old_vec,out_filename);
        if(val==3)
                mx.shuffle(old_vec,out_filename);
        if(val==3)
            ax.shuffle(old_vec,out_filename);
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<nanoseconds>(stop - start);
        if (!timingFile.is_open()) {
            if(val==1)
                    std::cout<<"Lexographic Implementation: ";
            if(val==2)
                    std::cout<<"Fisher-Yates Implementation: ";
            if(val==3)
                    std::cout<<"Mixed Implementation: ";
            if(val==4)
                    std::cout<<"Auto Implementation: ";

            std::cout << duration.count() << " nanoseconds" << std::endl;
        } else {

            if(val==1)
                    timingFile<<"Lexographic Implementation: ";
            if(val==2)
                    timingFile<<"Fisher-Yates Implementation: ";
            if(val==3)
                    timingFile<<"Manual Implementation: ";
            if(val==4)
                    timingFile<<"Auto Implementation: ";
            timingFile << duration.count() << " nanoseconds." << std::endl;
        }
        val++;
    }
}

    timingFile.close();

    return 0;
}

