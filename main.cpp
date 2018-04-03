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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Test test;
    int pick=0;
    cout<<"Choose data structure:\n"
        <<"1.Table\n"
        <<"2.List\n"
        <<"3.Heap\n";
    cin>>pick;
    switch(pick){
        case 1:
            cout<<"table test";
            test.tableTest();
            break;
        case 2:
            cout<<"list test";
            test.listTest();
            break;
        case 3:
            test.heapTest();
            break;
        default:
            cout<<"Wrong number";
            break;
    }
    return 0;
}

