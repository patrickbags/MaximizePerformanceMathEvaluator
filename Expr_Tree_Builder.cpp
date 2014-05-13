
#include "Expr_Tree_Builder.h"
#include "Eval_Expr_Tree.h"

Expr_Tree_Builder::Expr_Tree_Builder()
{
}

Expr_Tree_Builder::~Expr_Tree_Builder()
{

}
void Expr_Tree_Builder::build_number(int n)
{
	Expr_Node * node = new Num_Node(n);
	this->numbers.push(node);
}
void Expr_Tree_Builder:: build_add_operator()
{
	Expr_Node * node = new Add_Node();

	Convert(this->operators,this->numbers,this->root_,node);
}
void Expr_Tree_Builder::build_sub_operator()
{
	Expr_Node * node = new Sub_Node();
	Convert(this->operators,this->numbers,this->root_,node);
}
void Expr_Tree_Builder::build_mul_operator()
{
	Expr_Node * node = new Mul_Node();
	Convert(this->operators,this->numbers,this->root_,node);
}

void Expr_Tree_Builder::build_div_operator()
{
	//std::cout<<"\n Building Divide node ";
	Expr_Node * node = new Div_Node();
	Convert(this->operators,this->numbers,this->root_,node);
}

void Expr_Tree_Builder::build_mod_operator()
{
	//std::cout<<"\n Building Mod node";
	Expr_Node * node = new Mod_Node();
	Convert(this->operators,this->numbers,this->root_,node);
}

void Expr_Tree_Builder::build_open_bracket_operator()
{
	Expr_Node * node = new Open_Bracket_Node();
	Convert(this->operators,this->numbers, this->root_,node);
}

void Expr_Tree_Builder::build_expression()
{
	//std:cout<<"\n in Build expression ";
	
	Eval_Expr_Tree t;
		
	Num_Node *node;
	while(!this->operators.is_empty())
	{
		Binary_Expr_Node * temp=(Binary_Expr_Node*)this->operators.top();
		this->operators.pop();

		temp->setRightChild(this->numbers.top());
		this->numbers.pop();
		
		temp->setLeftChild(this->numbers.top());
		this->numbers.pop();
		
		node=new Num_Node(temp->accept(t));
		this->numbers.push(node);
	
		if(this->operators.is_empty())
		{
			this->root_=temp;
			break;
		}
		else
		{
			delete temp;
		}
		
	}
	delete node;	
}

Expr_Node * Expr_Tree_Builder::get_expression()
{
	return this->root_;
}


void Expr_Tree_Builder::Convert(Stack<Expr_Node *>& operators,Stack<Expr_Node *>& numbers, Expr_Node * rootNode,Expr_Node * expr_node)
{
	if(operators.is_empty())
	{
		rootNode = expr_node;
		
		operators.push(expr_node);
		
		return;
	}
	else
	{
		Expr_Node* tempnode = operators.top();
		if(expr_node->precedence() == 0) //if it is a opening bracket
		{
			operators.push(expr_node);
			return;
		}
		if(tempnode->precedence() < expr_node->precedence())
		{	
			operators.push(expr_node);
			return;			
		}
		else
		{	
			//std:cout<<"\n precedence changing ";
			Eval_Expr_Tree nodeVisitor;
			
			
			//Num_Node *newNumnode;
			while(expr_node->precedence() <= tempnode->precedence() && !operators.is_empty())
			{
				Binary_Expr_Node *tempOperator = (Binary_Expr_Node*)(operators.top());
				operators.pop();

				tempOperator->setRightChild(numbers.top());
				numbers.pop();

				tempOperator->setLeftChild(numbers.top());
				numbers.pop();

				int n=tempOperator->accept(nodeVisitor);
				//newNumnode= new Num_Node(n);
				//cout<<"\n number calculated : "<<n;

				//this->numbers.push(newNumnode);
				this->numbers.push(new Num_Node(n));
	
				if(operators.is_empty())	
				{	
					delete tempnode;	
					break;
				}
				
				tempnode = operators.top();
				delete tempOperator;
								
			}
			rootNode = expr_node;
			operators.push(rootNode);
			//std::cout<<"\n Out of convert";			
		}
		
	}
}