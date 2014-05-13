
#include "Expr_Builder.h"
#include "Binary_Expr_Node.h"

Expr_Builder::Expr_Builder()
	: numbers(),
	operators(),
	root_()
{
}

Expr_Builder::~Expr_Builder()
{
}


void Expr_Builder::pushonNumberStack(Expr_Node * n)
{
	this->numbers.push(n);
}

Expr_Node* Expr_Builder::getTopOperator()
{
	return this->operators.top();
}

Expr_Node* Expr_Builder::getTopNumber()
{
	return this->numbers.top();
}

void Expr_Builder::popOperator()
{
	this->operators.pop();
}
void Expr_Builder::popNumber()
{
	this->numbers.pop();
}
bool Expr_Builder::isOperatorsEmpty()
{
	return this->operators.is_empty();
}

bool Expr_Builder::isNumbersEmpty()
{
	return this->numbers.is_empty();
}

