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
#include <iostream>
#include <fstream>

using namespace std;


void BigTest::tableTest(){
//  open file with data and write the data to table
    Table table;
    Test test;
    int line;
    ifstream file;
    file.open("RandInt.txt");
    if(file.is_open()){
//      read all numbers from file and add them to new table
        while(file>>line){
            table.addTail(line);
        }
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
    int line;
    ifstream file;
    file.open("RandInt.txt");
    if(file.is_open()){
//      read all numbers from file and add them to new table
        while(file>>line){
            list.addTail(line);
        }
        file.close();
    }
    else{
        cout<<"Failed to open and read from file!";
    }
    test.listTest(list);
    
    
}
void BigTest::heapTest(){
//  open file with data and write the data to heap
    Heap heap;
    Test test;
    int line;
    ifstream file;
    file.open("RandInt.txt");
    if(file.is_open()){
//      read all numbers from file and add them to new table
        while(file>>line){
            heap.addToHeap(line);
        }
        file.close();
    }
    else{
        cout<<"Failed to open and read from file!";
    }
    test.heapTest(heap);
}
