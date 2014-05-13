//==============================================================================
/** 
* Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

/**
 * @class Mod_Node
 *
 * Implementation of Modulus Node.
 * Modulus Node represents an Modulus operator.
 * It is a sub-class of Binary Expression Node.
 */
#ifndef _MOD_NODE_H_
#define _MOD_NODE_H_

#include "Binary_Expr_Node.h"

class Mod_Node : public Binary_Expr_Node
{
public:

	Mod_Node();

	virtual ~Mod_Node();

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



};

#endif