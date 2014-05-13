#include "Mul_Node.h"

Mul_Node::Mul_Node()
{
}

Mul_Node::~Mul_Node()
{

}

int Mul_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Mul_Node(*this);

	return v.result();

}

int Mul_Node::precedence()
{
	return 2;
}