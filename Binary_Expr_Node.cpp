
#include "Binary_Expr_Node.h"
#include<iostream>

Binary_Expr_Node::Binary_Expr_Node()
	: right_(),
	left_()
{
}

Binary_Expr_Node::~Binary_Expr_Node()
{
	
	delete this->left_;
	delete this->right_;
	//std::cout<<"\nDeleting left & right nodes";
}

Expr_Node & Binary_Expr_Node::leftChild()
{
	return *this->left_;
}

Expr_Node & Binary_Expr_Node::rightChild()
{
	return *this->right_;
}

void Binary_Expr_Node:: setLeftChild(Expr_Node *node)
{
	this->left_ = node;
}

void Binary_Expr_Node:: setRightChild(Expr_Node *node)
{
	this->right_ = node;
}