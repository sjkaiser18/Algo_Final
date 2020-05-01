//
// Created by Sarah Kaiser on 4/30/20.
//

#include "Mix.h"
template <typename T>
Mix<T>::Mix(){
    std::cout<<"This is the mixed implementation"<<std::endl;
}

template <typename T>
void Mix<T>::shuffle(std::vector<std::pair<std::string,int>> old_vec,std::string out_filename) {
    std::cout << "Shuffling... mixed!" << std::endl;

    std::random_shuffle(old_vec.begin(),old_vec.end());

    outFile.open(out_filename,std::ofstream::app);

    if (!outFile.is_open()) {
        std::cout << "Mix = ";
        for (int j = 0; j < old_vec.size(); j++) {
            std::cout << old_vec[j].first << " ";
            if(j%10==0){std::cout<<std::endl;}
        }
        std::cout<<std::endl;
    }
    else{
        outFile << "Mix = ";
        for (int j = 0; j < old_vec.size(); j++) {
            outFile << old_vec[j].first << " ";
            if(j%10==0){outFile<<std::endl;}
        }
        outFile<<"\n\n";
    }
    outFile.close();

}

template <typename T>
Mix<T>::~Mix(){}

template class Mix <std::string>;