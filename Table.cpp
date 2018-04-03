#include "Table.h"
#include <iostream>

using namespace std;
Table::Table(){
    
//    first initialisation 
    tableSize=0;
    tablePointer=nullptr;
    
}
Table::~Table(){
    if(tablePointer==nullptr){
        delete [] tablePointer;
    }
}

void Table::addHead(int value){
    int *newTable=new int[tableSize+1]; //setting new table
//    setting value of head
    newTable[0]=value; 
   
//    table elements don't store next element info, that's why need to make 
//    another table
    for(int i=0;i<tableSize;i++){
//    setting new table with new head
        newTable[i+1]=tablePointer[i];
    }
    //delete old table
    delete tablePointer;
    
    //head of new table
    tablePointer=newTable;
    
    tableSize++;     
}
void Table::addTail(int value){
    //create Table of pointers
    int *newTable=new int[tableSize+1];
    //adding tail to new table
    newTable[tableSize]=value;
    
    //adding rest to new table
    for(int i =0;i<tableSize;i++){
        newTable[i]=tablePointer[i];
    }
    //new table pointer is different, need to delete old and set new
    delete tablePointer;
    tablePointer=newTable;
    tableSize++;
    
}
void Table::addAnywhere(int value,int index){
    if(index>tableSize || index<0){
        cout<<"Wrong index value - array out of bound";
    }
    else{
        int *newTable=new int[tableSize +1];

        for(int i=0;i<tableSize+1;i++){
            if(i<index){
                newTable[i]=tablePointer[i];
            }
            if(i==index){
                newTable[i]=value;
            }
            if(i>index){
                newTable[i]=tablePointer[i-1];
            }
        }

        delete tablePointer;
        tablePointer=newTable;
        tableSize++;
    }
}
void Table::deleteHead(){
    if(tablePointer==nullptr){
        cout<<"Array is empty - can't delete head";
    }
//    if only one element in array head==tail so w
    else if(tableSize==1){
        delete tablePointer;
    }
    else{
        int *newTable=new int[tableSize-1];
        
        //setting new table with old table without head element
        for(int i=0;i<tableSize-1;i++){
            newTable[i]=tablePointer[i+1];
            
        }
        delete tablePointer;
        tablePointer=newTable;
        
        //decrement size of table by 1
        tableSize--;
    }
}
void Table::deleteTail(){
    if(tablePointer==nullptr){
    cout<<"Array is empty- can't delete tail";
    }
    else if(tableSize==1){
        delete tablePointer;
    }
    else{
        int *newTable=new int[tableSize-1];
        
        //new table without last element
        for(int i=0;i<tableSize-1;i++){
           newTable[i]=tablePointer[i];
        }
        delete tablePointer;
        tablePointer=newTable;
        
        //decrement size after deletion
        tableSize--;
    
    }
}
void Table::deleteAnywhere(int index){
    if(tablePointer==nullptr){
    cout<<"Array is empty- can't delete element";
    }
    if(index>tableSize || index<0){
        cout<<"Wrong index  - out of bounds";
    }
    
    else{
        int *newTable=new int[tableSize-1];
        
        for(int i=0;i<tableSize-1;i++){
            if(i<index){
                newTable[i]=tablePointer[i];
            }
            //skip element which will be deleted
            if(i>=index){
                newTable[i]=tablePointer[i+1];
            }
           
        }
        delete tablePointer;
        tablePointer=newTable;
        tableSize--;
        
    }
}
void Table::showTable(){
    for(int i=0;i<tableSize;i++){
        cout<<"Tab["<<i<<"]="<<tablePointer[i]<<"\t";   
    }
}
bool Table::ifExist(int value){
    bool exist=false;
    for(int i=0;i<tableSize;i++){
        if(tablePointer[i]==value){
            exist=true;
            break;
        }
        else
            exist=false;
    }
    return exist;

}
        