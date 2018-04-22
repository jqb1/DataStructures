/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "BigTest.h"
#include "Table.h"
#include "List.h"
#include "Heap.h"
#include "Test.h"
#include "SaveResult.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>

using namespace std;


void BigTest::tableTest(int tableSize){
//  open file with data and write the data to table
    Table table;
    Test test;
    SaveResult resultFile;
    
    int line;
    ifstream file;
    file.open("RandInt.txt");
    if(file.is_open()){
//      read all numbers from file and add them to new table
//      display time of adding to structure
        
//      initialise first table and it's counter
        int *newTable=new int[tableSize];
        int index=0;
        
        auto start = std::chrono::system_clock::now();
        while(file>>line){
//            table.addTail(line);
            newTable[index]=line;
            index++;
        }
        table.setTablePointer(newTable,tableSize);
        auto end = std::chrono::system_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = end - start;
        cout<<"\nTime of adding elements to table:"<<fp_ms.count()<<"ms";
//      delete previous file and create new, with new results
//        resultFile.deleteFile();
        resultFile.saveToFile(fp_ms.count());
        file.close();
    }
    else{
        cout<<"Failed to open and read from file!";
    }
    test.tableTest(table);
    
}
void BigTest::listTest(){
//      open file with data and write the data to list
    List list;
    Test test;
    SaveResult resultFile;
    
    int line;
    ifstream file;
    file.open("RandInt.txt");
    if(file.is_open()){
//      read all numbers from file and add them to new table
        auto start = std::chrono::system_clock::now();
        while(file>>line){
            list.addTail(line);
        }
        auto end = std::chrono::system_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = end - start;
        cout<<"\nTime of adding elements to list:"<<fp_ms.count()<<"ms";
        //      delete previous file and create new, with new results
//        resultFile.deleteFile();
        resultFile.saveToFile(fp_ms.count());
        file.close();
    }
    else{
        cout<<"Failed to open and read from file!";
    }
    test.listTest(list);
    
    
    
}
void BigTest::heapTest(){

    Heap heap;
    Test test;
    SaveResult resultFile;
    int line;
    ifstream file;
//  open file with data and write the data to heap
    file.open("RandInt.txt");
    if(file.is_open()){
//      read all numbers from file and add them to new table
        auto start = std::chrono::system_clock::now();
        while(file>>line){
            heap.addToHeap(line);
            
        }
        auto end = std::chrono::system_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = end - start;
        cout<<"\nTime of adding elements to heap:"<<fp_ms.count()<<"ms";
        //      delete previous file and create new, with new results
//        resultFile.deleteFile();
        resultFile.saveToFile(fp_ms.count());
        file.close();
    }
    else{
        cout<<"Failed to open and read from file!";
    }
//  after adding elements user can perform single operations
    test.heapTest(heap);
    
}
