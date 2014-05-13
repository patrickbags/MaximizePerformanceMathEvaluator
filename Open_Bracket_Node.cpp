
#include "Open_Bracket_Node.h"

Open_Bracket_Node::Open_Bracket_Node()
{
}

Open_Bracket_Node::~Open_Bracket_Node()
{
	
}

int Open_Bracket_Node::accept(Expr_Node_Visitor &v)
{
	//the open bracket has no value.
	return 0;
}

int Open_Bracket_Node::precedence()
{
	return 0;
}