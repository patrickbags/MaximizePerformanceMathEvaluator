/**
 * @class Mul_Node
 *
 * Implementation of Number Node.
 * Number Node represents a Number (operand).
 * It is a sub-class of Expression Node.
 */

#ifndef _NUM_NODE_H_
#define _NUM_NODE_H_



#include "Expr_Node.h"


class Num_Node : public Expr_Node
{
public:
	Num_Node(int n);

	virtual ~Num_Node();


	/*
	*ACCEPT METHOD
	* @param	expression_node_visitor
	* result	returns an int 
	*
	* Accept Method is used to evaluate a binary operator.
	* object itself is passed to the Visitor.
	* and the visitor stores the result.
	*/
	virtual int accept(Expr_Node_Visitor & v);
	
	/*
	*PRECEDENCE METHOD
	*@param		void
	*result		int
	* Precedence Method returns the priority of an operator
	*/
	virtual int precedence();


	/*
	* GETNUMBER METHOD
	* @param	void
	* result	Method returns the member variable n_
	*/
	int getNumber();

private:

	int n_;

};

#endif
