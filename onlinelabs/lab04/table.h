#ifndef TABLE_H
#define TABLE_H
//table.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;
    node * left;
    node * right;;
};

void build(node * & root);  //supplied
void display(node *  root); //supplied
void destroy(node * & root); //supplied

int countNodes(node* root);
int sumLeaves(node* root);
 
#endif
