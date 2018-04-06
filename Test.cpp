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
#include <chrono>

using namespace std;
        
void Test::tableTest(Table table){
    int choice=0;
    int value=0;
    int index=0;
    
    
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
            auto start = std::chrono::system_clock::now();
            
            table.addHead(value);
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of adding head to table:"<<fp_ms.count()<<"ms";
            break;
        }
        case 2:
        {
            cout<<"Set value to add\n";
            cin>>value;
            auto start = std::chrono::system_clock::now();
            
            table.addTail(value);
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of adding tail to table:"<<fp_ms.count()<<"ms";
            break;
        }
        case 3:
        {
            cout<<"Set value to add\n";
            cin>>value;
            cout<<"Choose index in table for new value\n";
            cin>>index;
           auto start = std::chrono::system_clock::now();
            
            table.addAnywhere(value,index);
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of adding to specified place in table:"<<fp_ms.count()<<"ms";
            cout<<"\n   -------value has been added-------   ";
            break;


        }
        case 4:
        {
            auto start = std::chrono::system_clock::now();
            
            table.deleteHead();
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of deleting head from table:"<<fp_ms.count()<<"ms";
            cout<<"\n-------Head has been deleted!-------\n";
            break;
        }
        case 5:
        {
            auto start = std::chrono::system_clock::now();
            
            table.deleteTail();
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of deleting tail from table:"<<fp_ms.count()<<"ms";
            cout<<"\n-------Tail has been deleted-------\n";
            break;
        }
        case 6:
        {
            cout<<"\nChoose index of deleted value\n";
            cin>>index;
            auto start = std::chrono::system_clock::now();
            
            table.deleteAnywhere(value);
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of deleting specified element from table:"<<fp_ms.count()<<"ms";
            break;
        }
        case 7:
        {
            auto start = std::chrono::system_clock::now();
            
            table.showTable();
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of showing table table:"<<fp_ms.count()<<"ms";
            break;
        }
        case 8:
        {
            cout<<"Type value to find\n";
            cin>>value;
            auto start = std::chrono::system_clock::now();
            
            if(table.ifExist(value))
                cout<<"Value exists";
            else
                cout<<"Value doesn't exist in table";
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of finding value in table:"<<fp_ms.count()<<"ms";
            
            break;
        }
        default:
            cout<<"wrong choice!\n";
            break;
    }
    }
}

void Test::listTest(List list){
    int choice=0;
    int value=0;
    int index=0;

    
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
            auto start = std::chrono::system_clock::now();
            
            list.addTail(value);
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of adding tail to list:"<<fp_ms.count()<<"ms";
            break;
        }
        case 3:
        {
            cout<<"Set value to add\n";
            cin>>value;
            cout<<"Choose index in list for new value\n";
            cin>>index;
            auto start = std::chrono::system_clock::now();
            
            list.addAnywhere(value,index);
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of adding element to specified position in list:"<<fp_ms.count()<<"ms";
            
            break;


        }
        case 4:
        {
            auto start = std::chrono::system_clock::now();
            
            list.deleteHead();
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of deleting head from list:"<<fp_ms.count()<<"ms";
            
            cout<<"\n-------Head has been deleted!-------\n";
            break;
        }
        case 5:
        {
            auto start = std::chrono::system_clock::now();
            
            list.deleteTail();
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of deleting tail from list:"<<fp_ms.count()<<"ms";
            
            cout<<"\n-------Tail has been deleted-------\n";
            break;
        }
        case 6:
        {
            cout<<"\nChoose index of deleted value\n";
            cin>>index;
            auto start = std::chrono::system_clock::now();
            
            list.deleteAnywhere(index);
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of deleting element from list:"<<fp_ms.count()<<"ms";
            break;
        }
        case 7:
        {
            auto start = std::chrono::system_clock::now();
            
            list.showList();
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of showing list:"<<fp_ms.count()<<"ms";
            break;
        }
        case 8:
        {
            cout<<"Type value to find\n";
            cin>>value;
            auto start = std::chrono::system_clock::now();
            if(list.ifExist(value))
                cout<<"\nValue exists\n";
            else
                cout<<"\nValue doesn't exist in list\n";
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of finding value in list:"<<fp_ms.count()<<"ms";
            break;
        }
        default:
            cout<<"wrong choice!\n";
            break;
    }
    }
}
void Test::heapTest(Heap heap){
    int choice=0;
    int value=0;
    int index=0;
    
    while(choice!=5){
    cout<<"\nChoose action for heap: \n"
        <<"1.Add to heap\n"
        <<"2.Delete from heap\n"
        <<"3.Print heap\n"
        <<"4.Check if element exist\n"
        <<"5.Exit\n";
    cin>>choice;
        
    switch(choice){
        case 1:
        {
            auto start = std::chrono::system_clock::now();
            cin>>value;
            cout<<"Type value which you want to add to heap:";
            heap.addToHeap(value);
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of adding to heap:"<<fp_ms.count()<<"ms";
            
            break;
        }
        case 2:
        {
            
            cout<<"Type value which you want to delete from heap: ";
            cin>>value;
            
            auto start = std::chrono::system_clock::now();
            
            heap.deleteFromHeap(value);
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of adding to heap:"<<fp_ms.count()<<"ms";

            break;
        }
        case 3:
        {
            
            auto start = std::chrono::system_clock::now();
            
            heap.showHeap();
            
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of printing heap:"<<fp_ms.count()<<"ms";

            break;
        }
        case 4:
        {
            cout<<"Type value to check:";
            cin>>value;
            
            auto start = std::chrono::system_clock::now();
            if(heap.ifExist(value))
                cout<<"\nValue exist in heap!\n";
            else
                cout<<"\nValue doesn't exist in heap!\n";
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double, std::milli> fp_ms = end - start;
            cout<<"\nTime of finding value in heap:"<<fp_ms.count()<<"ms";
            
            
            break;
        }
        case 5:
        {
            break;
        }
        default:
        {
            cout<<"Wrong choice!";
            break;
        }
       
    }
         
   }
}

    