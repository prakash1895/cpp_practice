#include <iostream>
int main(int argc, char const *argv[])
{
	for(int i=1; i<=5; i++)
	{
		for(int j=5; j>=1; j--)
		{
			if (j<=i)
				std::cout<<j<<"\t";
			else
				std::cout<<"\t";
		}
	std::cout<<std::endl;
	}
	return 0;
}