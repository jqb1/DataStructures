/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jakub
 *
 * Created on 31 March 2018, 12:06
 */
#include <iostream>
#include <cstdlib>
#include "Test.h"
#include "Generator.h"
#include "BigTest.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Test test;
    Generator generator;
    BigTest big_test;
    int pick=0;
    int size=0;
    cout<<"Generate file with random numbers:\n";
    cout<<"Choose size of file:";
    cin>>size;
    
    generator.makeFile(size);

    cout<<"Choose data structure you want to check:\n"
        <<"1.Table\n"
        <<"2.List\n"
        <<"3.Heap\n";
    cin>>pick;
    switch(pick){
        case 1:
            cout<<"table test";
            big_test.tableTest();
            break;
        case 2:
            cout<<"list test";
            big_test.listTest();
            break;
        case 3:
            big_test.heapTest();
            break;
        default:
            cout<<"Wrong number";
            break;
    }
    return 0;
}

