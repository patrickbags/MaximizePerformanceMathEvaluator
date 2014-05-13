
#include "Eval_Expr_Tree.h"
#include <iostream>

Eval_Expr_Tree::Eval_Expr_Tree()
{
}

Eval_Expr_Tree::~Eval_Expr_Tree()
{
}

void Eval_Expr_Tree::Visit_Add_Node(Add_Node &node)
{
	//std::cout<<"\n Visited Add Node";
	
	//visit left node
	this->result_ = node.leftChild().accept(*this) + node.rightChild().accept(*this);	
}

void Eval_Expr_Tree::Visit_Num_Node(Num_Node &node)
{
	//std::cout<<"\n Visited Num Node";
	this->result_ = node.getNumber();
}

void Eval_Expr_Tree::Visit_Sub_Node(Sub_Node & node)
{
	//std::cout<<"\n Visited Sub Node";
	this->result_ = node.leftChild().accept(*this) - node.rightChild().accept(*this);
}
void Eval_Expr_Tree::Visit_Mul_Node(Mul_Node & node)
{
	//std::cout<<"\n Visited Multiply node";
	this->result_ = node.leftChild().accept(*this) * node.rightChild().accept(*this);
}

void Eval_Expr_Tree::Visit_Div_Node(Div_Node & node)
{
	//std::cout<<"\n Visited Divide Node";
	
	if(node.rightChild().accept(*this) == 0)
	{
		//throw std::exception("Divisor cannot be zero");
					
		throw DividebyZeroException("Divisor cannot be zero");
	}
	this->result_ = (int)(node.leftChild().accept(*this) / node.rightChild().accept(*this));

}
void Eval_Expr_Tree::Visit_Mod_Node(Mod_Node & node)
{
	//std::cout<<"\n Visited Mod Node";

	if(node.rightChild().accept(*this) == 0)
	{
		//throw std::exception("Divisor cannot be zero");
		
		throw DividebyZeroException("Divisor cannot be zero");
	}
	this->result_ =(int)(node.leftChild().accept(*this) % node.rightChild().accept(*this));
}

int Eval_Expr_Tree::result()
{
	return this->result_;
}