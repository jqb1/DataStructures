/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Test.h"
#include "Table.h"
#include "List.h"
#include "Heap.h"
#include <iostream>

using namespace std;
        
void Test::tableTest(){
    int choice=0;
    int value=0;
    int index=0;
    Table table;
    
    while(choice!=9){
    cout<<"\nChoose action for table: \n"
        <<"1.Add head\n"
        <<"2.Add tail\n"
        <<"3.Add anywhere\n"
        <<"4.Delete head\n"
        <<"5.Delete tail\n"
        <<"6.Delete anywhere\n"
        <<"7.Print table\n"
        <<"8.Check if element exist\n"
        <<"9.Exit\n";
    cin>>choice;
    
    switch(choice){
            
        case 9:
        {
            break;
        }
        case 1:
        {
            
            cout<<"Set value to add\n";
            cin>>value;
            table.addHead(value);
            break;
        }
        case 2:
        {
            cout<<"Set value to add\n";
            cin>>value;
            table.addTail(value);
            break;
        }
        case 3:
        {
            cout<<"Set value to add\n";
            cin>>value;
            cout<<"Choose index in table for new value\n";
            cin>>index;
            table.addAnywhere(value,index);
            cout<<"\n   -------value has been added-------   ";
            break;


        }
        case 4:
        {
            table.deleteHead();
            cout<<"-------\nHead has been deleted!-------\n";
            break;
        }
        case 5:
        {
            table.deleteTail();
            cout<<"-------\nTail has been deleted-------\n";
            break;
        }
        case 6:
        {
            cout<<"\nChoose index of deleted value\n";
            cin>>index;
            table.deleteAnywhere(index);
            break;
        }
        case 7:
        {
            table.showTable();
            break;
        }
        case 8:
        {
            cout<<"Type value to find\n";
            cin>>value;
            if(table.ifExist(value))
                cout<<"Value exists";
            else
                cout<<"Value doesn't exist in table";
            break;
        }
        default:
            cout<<"wrong choice!\n";
            break;
    }
    }
}

void Test::listTest(){
    int choice=0;
    int value=0;
    int index=0;
    List list;
    
    while(choice!=9){
    cout<<"\nChoose action for list: \n"
        <<"1.Add head\n"
        <<"2.Add tail\n"
        <<"3.Add anywhere\n"
        <<"4.Delete head\n"
        <<"5.Delete tail\n"
        <<"6.Delete anywhere\n"
        <<"7.Print List\n"
        <<"8.Check if element exist\n"
        <<"9.Exit\n";
    cin>>choice;
    
    switch(choice){
            
        case 9:
        {
            break;
        }
        case 1:
        {
            
            cout<<"Set value to add\n";
            cin>>value;
            list.addHead(value);
            break;
        }
        case 2:
        {
            cout<<"Set value to add\n";
            cin>>value;
            list.addTail(value);
            break;
        }
        case 3:
        {
            cout<<"Set value to add\n";
            cin>>value;
            cout<<"Choose index in list for new value\n";
            cin>>index;
            list.addAnywhere(value,index);
            
            break;


        }
        case 4:
        {
            list.deleteHead();
            cout<<"-------\nHead has been deleted!-------\n";
            break;
        }
        case 5:
        {
            list.deleteTail();
            cout<<"-------\nTail has been deleted-------\n";
            break;
        }
        case 6:
        {
            cout<<"\nChoose index of deleted value\n";
            cin>>index;
            list.deleteAnywhere(index);
            break;
        }
        case 7:
        {
            list.showList();
            break;
        }
        case 8:
        {
            cout<<"Type value to find\n";
            cin>>value;
            if(list.ifExist(value))
                cout<<"\nValue exists\n";
            else
                cout<<"\nValue doesn't exist in list\n";
            break;
        }
        default:
            cout<<"wrong choice!\n";
            break;
    }
    }
}
void Test::heapTest(){
    int choice=0;
    int value=0;
    int index=0;
    Heap heap;
    
    while(choice!=9){
    cout<<"\nChoose action for heap: \n"
        <<"1.Add to heap\n"
        <<"2.Delete from heap\n"
        <<"3.Print heap\n"
        <<"4.Check if element exist\n"
        <<"5.Exit\n";
    cin>>choice;
        
    switch(choice){
        case 1:
            cout<<"Type value which you want to add to heap:";
            cin>>value;
            heap.addToHeap(value);
            break;
        case 2:
            cout<<"Type value which you want to delete from heap: ";
            cin>>value;
            heap.deleteFromHeap(value);
            break;
        case 3:
            heap.showHeap();
            break;
        case 4:
            cout<<"Type value to check:";
            cin>>value;
            if(heap.ifExist(value))
                cout<<"\nValue exist in heap!\n";
            else
                cout<<"\nValue doesn't exist in heap!\n";
            break;
        case 5:
            break;
        default:
            cout<<"Wrong choice!";
            break;
       
    }
        
        
        
    }
}

    