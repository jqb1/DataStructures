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
    temp->value=value; 
    if(head==nullptr){
       //when adding first element next is null
       temp->next=nullptr;
       head=temp;
       tail=temp;
       temp=nullptr;
       listSize++;
    }
    else{
        
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
        cout<<"\n   -------value has NOT been added-------  \n ";
    }
    else{
        listElement *temp=new listElement;
        listElement *current=new listElement;
        
        temp->value=value;
       
//      start iteration from the head
        current=head;
//      iterate through all the list elements and stop on index-1 position
        for(int i=1;i<index;i++){
            current=current->next;
        }
//        now current element is pointing at element with index-1
//        set next pointer for new element
        temp->next=current->next;
        current->next=temp;
        cout<<"\n   -------value has been added-------  \n ";
        listSize++;
    }
}
    
void List::deleteHead(){
    if(head==nullptr){
        cout<<"\ncannot delete head - list is empty\n";
    }
    else{
        listElement *temp = new listElement;
        temp=head;
        head=head->next;
        delete temp;
        
        listSize--;
       
    }
}
void List::deleteTail(){
    if(head==nullptr){
        cout<<"\ncannot delete tail - list is empty\n";
    }
    else{
        
        listElement *before=new listElement;
        listElement *current=new listElement;
        
        current=head;
//        if only one element in list delete head and set head, tail to null
        if(current->next==nullptr){
            delete current;
            head=nullptr;
            tail=nullptr;
            listSize--;
        }
        else{
        
//      set pointer on last element and remember one element before 
            while(current->next !=nullptr){
                before=current;
                current=before->next;  
            }
//      delete last element
            delete current;

            before->next=nullptr;
            tail=before;
            listSize--;
        }

    }
}
void List::deleteAnywhere(int index){
    if(index<0 || index>=listSize){
        cout<<"Wrong index - list out of bounds";
        cout<<"\n   -------value has NOT been added-------  \n ";
    }
//    if only one element in list, delete it and set head & tail to null
    if(index==0 && head->next ==nullptr){
        delete head;
        head=nullptr;
        tail=nullptr;
        listSize--;

    }
//    
    else if(index==0 && head->next!=nullptr){
//       if user choose to delete head and head is not the last element 
        this->deleteHead();
    
    }
    else{
        listElement *before=new listElement;
        listElement *current=new listElement;
        
        current=head;
        for(int i=1;i<=index;i++){
            before = current;
            current=before->next;
        }
        before->next=current->next;
        delete current; // ?? ? ? 
        listSize--;
       
    }
}

   
void List:: showList(){
    int counter=0;
    
    listElement *temp = new listElement;
    temp=head;
    if(temp==nullptr){
        cout<<"List is empty!\n";
    }
    while(temp!=nullptr){
        cout<<"List " <<counter<<" = "<<temp->value<<"\n";
        temp=temp->next;
        counter++;
    }
}
bool List::ifExist(int value){
    listElement *temp = new listElement;
    temp=head;
    while(temp!=nullptr){
        if(temp->value==value)
            return true;
        else
            return false;
//      after checking set temp pointer to next element
        temp=temp->next;
    }

}