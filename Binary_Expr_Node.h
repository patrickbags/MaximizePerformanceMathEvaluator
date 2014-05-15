
/**
 * @class Binary_Expr_Node
 *
 * Implementation of Binary Expression Node.
 * Binary Expression Node is the base class of binary operators.
 */

#ifndef _BINARY_EXPR_NODE_
#define _BINARY_EXPR_NODE_

#include "Expr_Node_Visitor.h"
#include "Expr_Node.h"

class Binary_Expr_Node : public Expr_Node
{
public:

	Binary_Expr_Node();

	virtual ~Binary_Expr_Node();

	/*
	*ACCEPT METHOD
	* @param	expression_node_visitor
	* result	returns an int 
	*
	* Accept Method is used to evaluate a binary operator.
	* object itself is passed to the Visitor.
	* and the visitor stores the result.
	*/
	virtual int accept(Expr_Node_Visitor & v)=0;

	/*
	* RIGHTCHILD METHOD
	* @param	void
	* result	expr_node
	* rightChild Method is used to access the right child of the 
	* binary expression node
	*
	*/

	Expr_Node & rightChild();


	/*
	* LEFTCHILD METHOD
	* @param	void
	* result	expr_node
	* leftChild Method is used to access the left child of the 
	* binary expression node
	*
	*/
	Expr_Node & leftChild();


	/*
	* SETLEFTChild METHOD
	*@param		expr_node
	*return		void
	* setLeftChild is used to assign a left child to the 
	* binary expression node
	*/
	void setLeftChild(Expr_Node *node);


	/*
	* SETRIGHTChild METHOD
	*@param		expr_node
	*return		void
	* setRightChild is used to assign a right child to the 
	* binary expression node
	*/
	void setRightChild(Expr_Node *node);


	/*
	*PRECEDENCE METHOD
	*@param		void
	*result		int
	* Precedence Method returns the priority of an operator
	*/
	virtual int precedence()=0;


private:

	Expr_Node *right_;
	Expr_Node *left_;


};



#endif
