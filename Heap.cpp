/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Heap.h"
#include <iostream>
#include <chrono>
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
    //check new element (last in new table)
    this->rebuildHeapAfterAdding(heapSize-1);
  
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
    
    //     change table pointer
    delete heapPointer;
    heapPointer=newTable;
//  if value was found decrement size
    if(valueIndex!=-1){
      heapSize--; 
    }
    
    //after changing table and pointer for table, rebuild table to heap
    this->rebuildHeapAfterDeletion();
        
    
    
}
void Heap::rebuildHeapAfterDeletion(){
    
    int parent=-1;

//  iterate through all elements and check their parents
    for(int i=heapSize-1;i>=0;i--){
        parent=this->getParent(i);
        if((heapPointer[i]>heapPointer[parent]) && parent>=0){
//          change positions of parent and child
            int temp=heapPointer[parent];
            heapPointer[parent]=heapPointer[i];
            heapPointer[i]=temp;
        }
    }
    
    
}
void Heap::rebuildHeapAfterAdding(int added){
//    check heap starting from the end
//  set parent of new element
    int parent=this->getParent(added);
    
//  check parent of element and repeat for all parents
    if(added>=0 && parent>=0&& heapPointer[added]>heapPointer[parent]){
        int temp=heapPointer[parent];
        heapPointer[parent]=heapPointer[added];
        heapPointer[added]=temp;
        rebuildHeapAfterAdding(parent);
    }
}
int Heap::getParent(int index){
    int parent=(index-1)/2;
    if (index==0){
        return -1;
    }
    else
        return parent;
    
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
    cout<<"\n";
    int enter=1;
    int countPrinted=0;
    for(int i=0;i<heapSize;i++){
        cout<<heapPointer[i]<<" "; 
        countPrinted++;
        if(countPrinted==enter){
            enter=enter*2;
            cout<<"\n";
            countPrinted=0;
           
        }
    }
  
   
    
    
}