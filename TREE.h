#pragma once
#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *left;
    NODE *right;
};

class TREE
{
public:
    void CREATE_TREE(NODE* &T)
    {
        T = NULL;
    }
    void INSERT_NODE(NODE* &T, int x)
    {
        if (T == NULL)
        {
            NODE *temp = new NODE;
            temp->data = x;
            temp->left = temp->right = NULL;
            T = temp;
        }
        else
        {
            if (x > T->data)
            {
                INSERT_NODE(T->right, x);
            }
            else if (x < T->data)
            {
                INSERT_NODE(T->left, x);
            }
        }
    }
    void POSTORDER(NODE* T) // hậu tố = L-R-N
    {
        if (T != NULL)
        {
            POSTORDER(T->left);
            POSTORDER(T->right);
            cout<<T->data<<" ";
        }
    }
    void INORDER(NODE* T) // trung tố = L-N-R
    {
        if (T != NULL)
        {
            INORDER(T->left);
            cout<<T->data<<" ";
            INORDER(T->right);
        }
    }
    void PREORDER(NODE* T) // tiền tố = N-L-R
    {
        if (T != NULL)
        {
            cout<<T->data<<" ";
            PREORDER(T->left);
            PREORDER(T->right);
        }
    }
};