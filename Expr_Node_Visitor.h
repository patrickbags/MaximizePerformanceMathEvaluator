
/**
 * @class Visitor
 * Represents a Abstract Visitor.
 *
 */


#ifndef _EXPR_NODE_VISITOR_H_
#define _EXPR_NODE_VISITOR_H_

//forward declaration
class Add_Node;
class Sub_Node;
class Num_Node;
class Mul_Node;
class Div_Node;
class Mod_Node;
	
class Expr_Node_Visitor
{
public:

	Expr_Node_Visitor();

	virtual ~Expr_Node_Visitor();

	//Methods for visiting concrete nodes

	/*
	* VISIT ADD METHOD
	* @param	Add_node
	* result	void
	* 
	* This method visits an Add Operator in the Expression Tree
	* Performs addition of the left child and right child
	*/
	
	virtual void Visit_Add_Node(Add_Node & node)=0;


	/*
	* VISIT NUMBER METHOD
	* @param	Num_node
	* result	void
	* This method visits a Number Node in the Expression Tree
	* 
	*/
	virtual void Visit_Num_Node(Num_Node & node)=0;


	/*
	* VISIT SUB METHOD
	* @param	Sub_node
	* result	void
	* 
	* This method visits a Subtract Operator in the Expression Tree
	* Performs subtraction of the left child and right child
	*/
	virtual void Visit_Sub_Node(Sub_Node & node)=0;

	
	/*
	* VISIT MULTIPLY METHOD
	* @param	Mul_node
	* result	void
	* 
	* This method visits a Multiply Operator in the Expression Tree
	* Performs Multiplication of the left child and right child
	*/
	virtual void Visit_Mul_Node(Mul_Node & node)=0;

	/*
	* VISIT DIV METHOD
	* @param	Div_node
	* result	void
	* 
	* This method visits a Divide Operator in the Expression Tree
	* Performs division of the left child and right child
	*/
	virtual void Visit_Div_Node(Div_Node & node)=0;

	
	/*
	* VISIT MOD METHOD
	* @param	Add_node
	* result	void
	* 
	* This method visits a Modulus Operator in the Expression Tree
	* Performs Modulus operation on the left child and right child
	*/
	virtual void Visit_Mod_Node(Mod_Node & node)= 0;


	/*
	* RESULT METHOD
	* result	int
	* This method returns the evaluated value.
	* 
	*/
	virtual int result()=0;

protected:

	int result_;
};

#endif
