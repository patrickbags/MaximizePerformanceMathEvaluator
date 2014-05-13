#include "Postfix_Flyweight_Evaluator_Strategy.h"
#include<iostream>
#include<fstream>
#include<time.h>

/*Implementation of Postfix_Flyweight_Evaluator_Strategy concrete strategy*/

Postfix_Flyweight_Evaluator_Strategy::Postfix_Flyweight_Evaluator_Strategy()
{
}

Postfix_Flyweight_Evaluator_Strategy::~Postfix_Flyweight_Evaluator_Strategy()
{
}

void Postfix_Flyweight_Evaluator_Strategy::Build_Expression_Strategy()
{
	bool quit=false;
	bool converted=false;
	std::ifstream Exprfile;
	Exprfile.open("testExpressions.txt");

	clock_t t;
	t=clock();
	do
	{
		Array<Command *> postfix;
		
		std::string infix;
		
		Flyweight_Expr_Command_Factory factory;
		try
		{
			quit = false;
			int result=0;
			
			getline(Exprfile, infix);
			if (infix.compare("QUIT") == 0)
			{
				quit = true;
				break;
			}
			//call infix_to_postfix
			converted = infix_to_postfix(infix, factory, postfix);
			if(converted)
			{
				//std::cout<<"\n Expression converted ";

				Array_Iterator<Command *> arr_iter(postfix);
		
				if(evaluate_postfix(arr_iter, result))
					std::cout <<"\nExpression Value : " <<result;
		
			}
			else
			{
				std::cout<<"\nInvalid expression";
			}		
		}
		catch(std::exception &e)
		{
			std::cout<<e.what()<<"\n";			
		}
		
	}
	while(!quit);

	t= (float)(clock()-t)/(CLOCKS_PER_SEC/1000);
	cout<<"\n Time : "<<t<<" millisecs";
	Exprfile.close(); 
}

bool Postfix_Flyweight_Evaluator_Strategy::infix_to_postfix(const std::string & infix, Flyweight_Expr_Command_Factory & factory, Array<Command *>& postfix)
{
		
	//*** CREATE A INPUT STREAM PARSER

	std::istringstream input(infix);
	
	//*** CURRENT TOKEN IN STRING/STREAM
	std::string token = "0";
	//cha token;

	//*** FOR NUMBER COMMAND
	int num=0;

	//*** CREATED COMMAND OBJECT
	Command * cmd = 0;

	Stack <Command * > temp;
	size_t i=0;

	bool checkOperator= true;

	//*** The first token will either be Open bracket or Operand.
	//*** If it is not one of them, throw an exception

	bool checkOperand= true;
	bool checkExtraClosing = true;

	while(!input.eof())
	{
		input >> token;

		//*** CHECK IF TOKEN IS NOT 'QUIT'
		
		if(token != "QUIT")
		{
		
			if(token== "(")
			{
				cmd = factory.create_openbracket_command();
				temp.push(cmd);				
				

			}
			else if(token.compare("+")==0)
			{
				if(!checkOperator)
				{
					throw CalException("Expression is Invalid");
					
				}

				cmd=factory.create_add_command();
				//*** Check Precedence of the operator with top of 'temp'			
				Convert(temp,postfix,cmd,i);

				checkOperand = true ;
				checkOperator = false ;		
			}
			else if(token == "-")
			{

				if(!checkOperator)
				{
					throw CalException("Expression is Invalid");
					
				}

				cmd= factory.create_sub_command();
				//*** Check Precedence of the operator with top of 'temp'			
				Convert(temp,postfix,cmd,i);
				
				checkOperand = true ;
				checkOperator = false ;
				
			}
			else if(token == "*")
			{
				if(!checkOperator)
				{
					throw CalException("Expression is Invalid");
					
				}
				
				cmd= factory.create_mul_command();
				//*** Check Precedence of the operator with top of 'temp'			
				Convert(temp,postfix,cmd,i);
				
				checkOperand = true ;
				checkOperator = false ;

			}
			else if(token == "/")
			{
				if(!checkOperator)
				{
					throw CalException("Expression is Invalid");
					
				}

				cmd= factory.create_div_command();
				//*** Check Precedence of the operator with top of 'temp'			
				Convert(temp,postfix,cmd,i);
				
				checkOperand = true ;
				checkOperator = false ;
				
			}
			else if(token == "%")
			{
				if(!checkOperator)
				{
					throw CalException("Expression is Invalid");
					
				}

				cmd= factory.create_mod_command();
				//*** Check Precedence of the operator with top of 'temp'			
				Convert(temp,postfix,cmd,i);
				
				checkOperand = true ;
				checkOperator = false ;
				

			}
			else if(token == ")")
			{

				if(!checkExtraClosing)
					throw CalException("Expression is invalid");

				Command * tempcmd = temp.top();
				
				while(tempcmd->precedence()!=0 && !temp.is_empty())
				{
					postfix.resize(postfix.cur_size_+1);
					postfix[i]= tempcmd;
					i++;
					temp.pop();
					
					if(!temp.is_empty())
					{
						tempcmd=temp.top();		
					}
				
				}
				
				temp.pop();
				
				
			}
			else
			{
				std::istringstream token_num(token);

				if(!(token_num >> num))
				{
					throw CalException("Expression is Invalid");
				
				}
				
				cmd= factory.create_num_command(num);
				//***PUT NUMBER COMMANDS IN POSTFIX STACK
				postfix.resize(postfix.cur_size_+1);
				postfix[i]=cmd;
				i++;

				checkOperand = false;
				checkOperator = true;

				
			}
			
		 
		}

				

	}
	
	//*** END of infix
	//pop all the elements from the temp stack
	while(!temp.is_empty())
	{
		postfix.resize(postfix.cur_size_+1);

		//check if there is an open parenthesis, if yes,then throw mismatch exception
		if((temp.top())->precedence() == 0)
		{
			throw CalException("Expression is Invalid");
		
		}

		postfix[i]=temp.top();
		
		temp.pop();
		i++;
		
		
	}
	return true;

} 


void Postfix_Flyweight_Evaluator_Strategy::Convert(Stack<Command *>& temp,Array<Command *>& postfix, Command * cmd,size_t &i)
{
	if(temp.is_empty())
	{
		temp.push(cmd);
		return;
	}
	else
	{
		Command * tempcmd= temp.top();

		//if it is a opening bracket
   		if(cmd->precedence() == 0) 
		{
			temp.push(cmd);
			return;
		}
		if(tempcmd->precedence() < cmd->precedence())
		{
			temp.push(cmd);
		}
		else
		{
			//*** Pop the top command from 'temp' and push in 'Postfix' until the precedence of the 
			//*** tempcmd is less than that of the top of stack

			while(cmd->precedence()<= tempcmd->precedence() && !temp.is_empty())
			{
				postfix.resize(postfix.cur_size_+1);
				
				postfix[i]=tempcmd;
				i++;
				temp.pop();
				
				if(!temp.is_empty())
				{
					tempcmd= temp.top();
				}
		
				
			}
			temp.push(cmd);
			
					
		}
		
	}
}
bool Postfix_Flyweight_Evaluator_Strategy::evaluate_postfix(Array_Iterator<Command *> & arr_iter, int & result)
{
	Stack <int> s;
	for(arr_iter; ! arr_iter.is_done(); arr_iter.advance())
	{
		if( !(*arr_iter)->execute(s))
		{
			return false;
		}
		if((*arr_iter)->precedence()==-1)
		{
			delete *arr_iter;
		}
	}

	result = s.top();
	s.pop();

	return  true;

}

