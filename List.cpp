/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "List.h"

using namespace std;


List::List(){
    head=nullptr;
    tail=nullptr;
    listSize=0;
}
List::~List(){
        
}

void List::addHead(int value){
    listElement *temp=new listElement;
    if(head==nullptr){
       head=temp;
       tail=temp;
       temp=nullptr;
       listSize++;
    }
    else{
        temp->value=value;
//    next element will be a current head 
        temp->next=head;
//    reset head after addition
        head=temp;
        listSize++;
     
//    now don't need temp 
        temp=nullptr;
    }
     
 }
void List::addTail(int value){
 listElement *temp=new listElement;
 
//   set value of new tail element and set next pointer to null
    temp->value=value;
    temp->next=nullptr;
     
//   if list is empty new element is both - head and tail
    if(head==nullptr){
        head=temp;
        tail=temp;
        temp=nullptr;
        listSize++;
     }
    else{
        tail->next=temp;
        tail=temp;
        temp=nullptr;
        listSize++;
     }
 }
void List:: addAnywhere(int value,int index){
    if(index<0 || index>listSize){
        cout<<"Wrong index - list out of bounds";
    }
    else{
        listElement *temp=new listElement;
        listElement *before=new listElement;
        listElement *current=new listElement;
        
        temp->value=value;
       
//      start iteration from the head
        current=head;
//      iterate through all the list elements and stop on index-1 position
        for(int i=1;i<index;i++){
            before=current;
            current=current->next;
//          check later if before->next works!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        }
//        now current element is pointing at element with index-1
        
//        before->next=temp;
//        temp->next=current;
        
        temp->next=current->next;
        current->next=temp;
    }
}
    
//void List::deleteHead();
//void List::deleteTail();
//void List::deleteAnywhere(int index);
//    
void List:: showList(){
    int counter=0;
    
    listElement *temp = new listElement;
    temp=head;
    while(temp!=nullptr){
        cout<<"List " <<counter<<" ="<<temp->value<<"\n";
        temp=temp->next;
        counter++;
    }
}
//bool List::ifExist(int value);