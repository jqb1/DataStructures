/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*#include "Tree.h"
#include "BigTest.h"

RBtree::RBtree(){
    root=nullptr;
    treeSize=0;
    
}
RBtree::~RBtree(){
    delete root;
}
void RBtree::insertNode(int value){
    Node *node=new Node;
    node->key=value;
    node->right=nullptr;
    node->left=nullptr;
    
    if (root==nullptr){
        root=node;
        node->parent=nullptr;
//      set color to black b-black r-red
        node->color='b'; 
    }
    else{
        Node *temp=new Node;
        
    
//      start checking from the root 
        temp=root;
        bool added=false;
        while(!added){
            if(node->key>=temp->key){
                if(temp->right==nullptr){
                    node->parent=temp;
                    temp->right=node;
                    node->color='b';
                    added=true;
                }
//              change pointer to left child - go to right branch
                else{
                    temp=temp->right;
                }  
             }
            else{
                if(temp->left==nullptr){
                    node->parent=temp;
                    temp->left=node;
                    node->color='r';
                    added=true;
                }
                else{
//                  change pointer to left child
                    temp=temp->left;
                }
            }
                
        }
//      after adding 
        Node *uncle=new Node;
        uncle=node->parent->parent->right;
        if(node->parent==uncle){
            uncle=node->parent->parent->left;
        }
        while(node->parent->color='r'){
//         1.if parent is read and uncle is read then repaint
            if(uncle->color=='r'){
                node->parent->color='b';
                node->parent->parent->color='r';
                uncle->color='r';
            }
//         2.
            
            else if(uncle->color=='b'){
//              if current node is left node, rotate right
                if(node->parent->left==node){
                    this->rotateRight(node);
                }
                else {
                    this->rotateLeft(node);
                }
            }
            
        }
        
    }
}
void RBtree::rotateRight(Node parent){
    Node *left=parent->left;
    Node *temp;
    
    if(left!=nullptr){
        temp=parent;
        parent=left;
        parent->right=temp;
        
    }
   
    
}
void RBtree::rotateLeft(Node parent){
    Node *right=parent->right;
    Node *temp;
    if(right!=nullptr){
        temp=parent;
        parent=right;
        parent->left=temp;
    }
}
void RBtree::deleteNode(Node *node){
   
}*/