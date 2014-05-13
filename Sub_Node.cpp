
#include "Sub_Node.h"

Sub_Node::Sub_Node()
{

}

Sub_Node::~Sub_Node()
{
}

int Sub_Node::accept(Expr_Node_Visitor & v)
{
	v.Visit_Sub_Node(*this);

	return v.result();
}

int Sub_Node::precedence()
{
	return 1;
}