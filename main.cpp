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
    int choice=0;
//    cout<<"Choose structure you want to test:\n"
//        <<"1.table\n"
//        <<"2.list\n";
//    cin>>choice;
//    switch(choice){
//        case 1:
//        {
//            test.tableTest();
//            break;
//        }
//        case 2:
//        {
//            test.listTest();
//            break;
//        }
//    }
    test.tableTest();
    return 0;
}

