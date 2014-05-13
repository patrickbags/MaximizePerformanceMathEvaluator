
#include "Mod_Node.h"

Mod_Node::Mod_Node()
{

}

Mod_Node::~Mod_Node()
{

}

int Mod_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Mod_Node(*this);

	return v.result();
}

int Mod_Node::precedence()
{
	return 2;
}