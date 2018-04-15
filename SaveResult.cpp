/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "SaveResult.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

void SaveResult::saveToFile(double time){
    ofstream file;
    file.open("Result.txt",ios_base::app);
    if(file.is_open()){
       
        file<<time<<"\n";
        file.close();
    }
    else{
        cout<<"Failed to open and write the file!";
    }
    
}
void SaveResult::deleteFile(){
    if( remove( "Result.txt" ) != 0 )
    cout<< "Error deleting file\n";
  else
    cout<<  "\nFile successfully deleted\n" ;
}