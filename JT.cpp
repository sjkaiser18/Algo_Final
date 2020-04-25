//
// Created by Sarah Kaiser on 4/25/20.
//

#include "JT.h"
template <typename T>
JT<T>::JT(){
    std::cout<<"This is the Johnson-Trotter implementation"<<std::endl;
}

template <typename T>
void JT<T>::shuffle(){

    //will need to pass in the specific vector for that input
    std::cout<<"Shuffling... the Johnson-Trotter ways!"<<std::endl;

    //int n=vector.length;
    int i;
    int temp;
    /*
     * while(n>0){
     *  i=floor(random()*n--);
     *  temp=vector.at(n);
     *  vector.at(n)=vector.at(i);
     *  vector.at(i)=temp;
     * }//end of while loop
     */
}

template <typename T>
JT<T>::~JT(){
    std::cout<<"Hasta la vista"<<std::endl;
}

template class JT <std::string>;