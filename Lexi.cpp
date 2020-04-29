//
// Created by Sarah Kaiser on 4/25/20.
//


#include "Lexi.h"

template <typename T>
Lexi<T>::Lexi(){
    std::cout<<"This is the lexographical implementation"<<std::endl;
}

template <typename T>
void Lexi<T>::shuffle(std::vector<std::pair<std::string,int>> old_vec){
    //will need to pass in the specific vector for that input
    std::cout<<"Shuffling... lexographically!"<<std::endl;

    int n=0;
    int sos=0;
    std::vector<int> new_vec;

    int i=0;
    while(n<old_vec.size()){
       i=floor(rand()%old_vec.size());

       for(int j=0;j<old_vec.size();j++){
           if(i==old_vec[j].second){
               new_vec.push_back(i);
                old_vec.erase(old_vec.begin()+j);
           }
       }
     n++;
    }//end of while loop

}

template <typename T>
Lexi<T>::~Lexi(){
    std::cout<<"Hasta la vista"<<std::endl;
}

template class Lexi <std::string>;