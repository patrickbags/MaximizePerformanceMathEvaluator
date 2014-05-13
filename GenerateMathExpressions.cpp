//Generate random math expressions
#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<fstream>


int main(int argc,char *argv[])
{
	int n=100;
	
	if(argc==2)
	{
		int numExpressions = atoi(argv[1]);
				
		using namespace std;
	
		char mathOperators[5] = {'+','-','*','/','%'};

		std::ofstream myfile;

		myfile.open("testExpressions.txt");
	
		int chooseExpression;
		int n1=10;
		while(numExpressions>0)
		{
			std:string mathExp;
			std::ostringstream buffer;
		
			//randomly select any type of expression
			chooseExpression = rand()%n1+1;

			switch(chooseExpression)
			{
				case 1:
				
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";

				break;

				case 2:
				
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";

				break;
		
				case 3:
				

					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1;				
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1;				
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";

				break;

				case 4:
				

					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1;				
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";



				break;

				case 5:

				case 6:

				case 7:
				
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";


				break;

				case 8:
				
		
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";


				break;

				case 9:
		
				case 10:
				

					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1;				
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1;				
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";
					buffer<<" "<<mathOperators[rand()%5]<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" ";
					buffer<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<"("<<" "<<rand()%n+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")"<<" "<<mathOperators[rand()%5]<<" "<<rand()%n+1<<" "<<")";



					break;
			}
		
			mathExp = buffer.str();
			myfile<<mathExp<<"\n";

			numExpressions--;
		}
	
		myfile<<"QUIT";

		myfile.close();
	}
	else
	{
		std::cout<<"\n No enough arguments\n";
	}
		return 0;

}