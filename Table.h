/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Table.h
 * Author: Jakub
 *
 * Created on 31 March 2018, 14:01
 */

#ifndef TABLE_H
#define TABLE_H
class Table{
public:
    int *tablePointer;
    int tableSize;
    
    Table();
    ~Table();
    
    void setTablePointer(int table[],int size);
    void addHead(int value);
    void addTail(int value);
    void addAnywhere(int value,int index);
    
    void deleteHead();
    void deleteTail();
    void deleteAnywhere(int index);
    
    void showTable();
    bool ifExist(int value);
    
   
    
};



#endif /* TABLE_H */

