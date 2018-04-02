/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: Jakub
 *
 * Created on 31 March 2018, 13:47
 */

#ifndef LIST_H
#define LIST_H
#include <iostream>

struct listElement{
        int value;
        listElement *next;
        
    };
class List{
    
public:
//    single list  element structure
    
//    list class contains information of head and tail of the elements
    listElement *head,*tail;
    int listSize;
    
    List();
    ~List();
    
    void addHead(int value);
    void addTail(int value);
    void addAnywhere(int value,int index);
    
    void deleteHead();
    void deleteTail();
    void deleteAnywhere(int index);
    
    void showList();
    bool ifExist(int value);
    

};



#endif /* LIST_H */

