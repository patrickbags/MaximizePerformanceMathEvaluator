//Generate random math expressions
#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<fstream>


int main()
{
	int n=10;
	int n1=10;

	using namespace std;
	
	char mathOperators[6] = {'+','-','*','/','%','('};

	std::ofstream myfile;
	myfile.open("testExpressions.txt");
	int numBrackets=0;

//	char isBracket;	
	bool isBracket;
	bool flag=false;
	bool firstOperator= true;
	bool NotfirstOperator= false;
	
	for(int i=0;i<n;i++)
	{
		std::string mathExp;
		std::ostringstream buffer;
	
		firstOperator = true;
		NotfirstOperator= false;

		isBracket= false;
		for(int j=0;j<rand()%n1+3;j++)
		{
			int num = rand()%n1+1; //generate random numbers
			//isBracket= mathOperators[rand()%6];		
			
		
			if(firstOperator || NotfirstOperator)
			{
				buffer<<num<<" "<<mathOperators[rand()%5]<<" "<<num;
				firstOperator=false;
				if(NotfirstOperator)
				{
					isBracket=false;
				}
				else
					isBracket=true;
			
			}

			if(isBracket)
			{
				buffer<<" "<<mathOperators[rand()%5]<<" ";
				buffer<<"("<<" "<<rand()%n1+1<<" "<<mathOperators[rand()%5]<<" "<<rand()%n1+1<<" "<<")"<<" ";
				flag= true;
				isBracket=false;
			}
			if(flag)
			{
				//buffer<<mathOperators[rand()%5]<<" "<<rand()%n1+1;
				buffer<<mathOperators[rand()%5]<<" ";
				flag=false;
				NotfirstOperator= true;
				
			}
		
			
		}



		//buffer<<rand()%100+1; //end should always be a number
		mathExp = buffer.str();
		//cout<<"Math Expression : "<<mathExp;
		//cout<<"\n";

		myfile<<mathExp<<"\n";
		
	
		
	}
	myfile<<"QUIT";

	myfile.close();
	return 0;

}