

#ifndef TREE_H
#define TREE_H

struct Node{
    int key;
    Node *right,*left,*parent;
    char color;
};
class RBtree{
private:
    void rotateRight(Node *node);
    void rotateLeft(Node *node);
public:
    Node *root;
    int treeSize;
    
    RBtree();
    ~RBtree();
    
    void insertNode(int value);

    void deleteNode(int vaule);
        
    void search();
    
    void display();
    
    void reapaint();
};


#endif /* TREE_H */

