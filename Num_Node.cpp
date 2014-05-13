
#include "Num_node.h"

Num_Node::Num_Node(int n)
	:n_(n)
{
}

Num_Node::~Num_Node()
{

}

int Num_Node::precedence()
{
	return -1;
}

int Num_Node::accept(Expr_Node_Visitor & v)
{
	v.Visit_Num_Node(*this);
	return v.result();
	
}

int Num_Node::getNumber()
{
	return this->n_;
}