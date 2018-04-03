/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Heap.h"
#include <iostream>

using namespace std;
//Treat heap as a table and sort it as a heap
Heap::Heap(){
    heapPointer=nullptr;
    heapSize=0;
}
Heap::~Heap(){
    if(heapPointer==nullptr){
        delete [] heapPointer;
    }
}
void Heap::addToHeap(int value){
//  check if value is on heap. Don't add if value exist
//  that's only for testing purpose (don't want heap to have 1000 nodes with the same value)
    bool exist=ifExist(value);

    if(!exist){
        //create table of pointers
        int *newTable=new int[heapSize+1];
        //adding tail to new table
        newTable[heapSize]=value;

        //adding rest to new table
        for(int i =0;i<heapSize;i++){
            newTable[i]=heapPointer[i];
        }
        //new table pointer is different, need to delete old and set new
        delete heapPointer;
        heapPointer=newTable;
        heapSize++;
    }
    else{
        cout<<"\n------Cannot add this value because it already exists in heap------\n";
    }
    
}
void Heap::deleteFromHeap(int value){
    int *newTable=new int[heapSize-1];
    int valueIndex=-1;
//    search the element in table (heap)
    for(int i=0;i<heapSize;i++){
        if(heapPointer[i]==value){
            valueIndex=i;
        }
//      don't change position of elements before deleted element
        if(valueIndex==-1){
            newTable[i]=heapPointer[i]; 
        }
//      move elements by one position after deleting value
        if(i>=valueIndex && valueIndex!=-1){
            newTable[i]=heapPointer[i+1];
        }
    }
//      change table pointer
        delete heapPointer;
        heapPointer=newTable;
        if(valueIndex!=-1){
            heapSize--;
        }
        
    
    
}
void Heap::rebuildHeap(){
    
}
bool Heap::ifExist(int value){
    bool exist=false;
    for (int i=0;i<heapSize;i++){
//      if value is found break and return true
        if(heapPointer[i]==value)
            return true;
        else
            exist=false;
    }
    return exist;
    
}
void Heap::showHeap(){
    for(int i=0;i<heapSize;i++){
        cout<<"heap["<<i<<"]="<<heapPointer[i]<<"\t";   
    }
    
}