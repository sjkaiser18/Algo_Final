//
// Created by Sarah Kaiser on 4/25/20.
//


#include "Lexi.h"

template <typename T>
Lexi<T>::Lexi(){
    std::cout<<"This is the lexographical implementation"<<std::endl;
}

template <typename T>
void Lexi<T>::shuffle(){
    //will need to pass in the specific vector for that input
    std::cout<<"Shuffling... lexographically!"<<std::endl;

//int n=0;
    //vector<T> new_vec;
    int i;
    /*while(n<vector.length){
     *  i=floor(random()*vector.length);
     *  for(int j=0;j<vector.length;j++){
     *      if(i==vector.at(j)){
     *          new_vec.push_back(i);
     *           vector.erase (vector.begin()+j);
     *      }
     *  }
     *  n++;
     * }//end of while loop
     */
}

template <typename T>
Lexi<T>::~Lexi(){
    std::cout<<"Hasta la vista"<<std::endl;
}

template class Lexi <std::string>;