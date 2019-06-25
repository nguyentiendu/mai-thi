#include <iostream>
#include "TREE.h"
using namespace std;

int main()
{
    TREE tree;
    NODE* root = NULL;
    tree.INSERT_NODE(root, 1);
    tree.INSERT_NODE(root, 2);
    tree.INSERT_NODE(root, 5);
    tree.INSERT_NODE(root, 3);
    tree.INSERT_NODE(root, 6);
    tree.INSERT_NODE(root, 4);
    tree.PREORDER(root);
    cout<<endl;
    tree.INORDER(root);
    cout<<endl;
    tree.POSTORDER(root);
    return 0;
}