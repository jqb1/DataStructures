/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Generator.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

//make file with random integers
void Generator::makeFile(int size){
    ofstream file;
    srand(time(NULL));
    file.open("RandInt.txt",ios::trunc);
    
    int randInt;
    if(file.is_open()){
        for(int i=0;i<size;i++){
            randInt=rand()%1000;
            file<<randInt<<"\n";
        }
        file.close();
    }
    else{
        cout<<"Failed to open and write the file!";
    }
    
}
void Generator::readFromFile(){
    int line;
    ifstream file;
    
    
    file.open("RandInt.txt");
    if(file.is_open()){
//      read all numbers from file
        while(file>>line){
            cout<<line<<"\n";
        }
        file.close();
    }
    else{
        cout<<"Failed to open and read from file!";
    }
    
}