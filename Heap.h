/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Heap.h
 * Author: Jakub
 *
 * Created on 03 April 2018, 14:11
 */

#ifndef HEAP_H
#define HEAP_H

//for building heap we use table which is sorted as heap
class Heap{
public:
    int *heapPointer;
    int heapSize;
    Heap();
    ~Heap();
    
    void addToHeap(int value);
    
    void deleteFromHeap(int vaule);
    
    void showHeap();
    
    void rebuildHeap();
    bool ifExist(int value);
};



#endif /* HEAP_H */

