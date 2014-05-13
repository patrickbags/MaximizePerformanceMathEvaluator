
#include "Div_Node.h"

Div_Node::Div_Node()
{
}

Div_Node::~Div_Node()
{
}

int Div_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Div_Node(*this);

	return v.result();

}

int Div_Node::precedence()
{
	return 2;
}