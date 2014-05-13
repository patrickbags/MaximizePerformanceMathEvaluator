
#include "Add_Node.h"
#include <iostream>
Add_Node::Add_Node()
{

}

Add_Node::~Add_Node()
{
	//delete this;
	//std::cout<<"\n deleting add node ";
}

int Add_Node::accept(Expr_Node_Visitor & v)
{
	v.Visit_Add_Node(*this);

	return v.result();
}

int Add_Node::precedence()
{
	return 1;
}