/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Test.h"
#include "Table.h"
#include "List.h"
#include <iostream>

using namespace std;
        
void Test::tableTest(){
    int choice;
    int value=0;
    int index=0;
    Table table;
    
    while(choice!=0){
    cout<<"Choose action for table: \n"
        <<"1.Add head\n"
        <<"2.Add tail\n"
        <<"3.Add anywhere\n"
        <<"4.Delete head\n"
        <<"5.Delete tail\n"
        <<"6.Delete anywhere\n"
        <<"7.Print table\n"
        <<"8.Check if element exist\n";
    cin>>choice;
    
    switch(choice){
            
        case 0:
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
    int choice;
    int value;
    int index=0;
    List list;
    
    while(choice!=0){
    cout<<"Choose action for list: \n"
        <<"0.Exit\n"
        <<"1.Add head\n"
        <<"2.Add tail\n"
        <<"3.Add anywhere\n"
        <<"4.Delete head\n"
        <<"5.Delete tail\n"
        <<"6.Delete anywhere\n"
        <<"7.Print List\n"
        <<"8.Check if element exist\n";
    cin>>choice;
    
    switch(choice){
            
        case 0:
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
//        case 6:
//        {
//            cout<<"\nChoose index of deleted value\n";
//            cin>>index;
//            list.deleteAnywhere(index);
//            break;
//        }
        case 7:
        {
            list.showList();
            break;
        }
//        case 8:
//        {
//            cout<<"Type value to find\n";
//            cin>>value;
//            if(list.ifExist(value))
//                cout<<"Value exists";
//            else
//                cout<<"Value doesn't exist in table";
//            break;
//        }
//        default:
//            cout<<"wrong choice!\n";
//            break;
    }
    }
}
    