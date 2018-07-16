
#include <iostream>
#include <string>
#include <algorithm> // std::sort algorithm
#include <utility> // std::swap function

class prakash
{
private:
	int no_of_names;
	std::string* names_array;
	int method;


public:
	prakash()
	{
		method = false;
	}

	void get_number()
	{
		std::cout<<"Enter Number of names \n";
		std::cin>>no_of_names;
		names_array = new std::string[no_of_names];
	}

	void set_names()
	{
		
		std::cout<<"Enter the names now"<<std::endl;
		for(int i=0; i<no_of_names; i++)
		{	
			std::cin>>names_array[i];
		}
	}

	void sort_names()
	{
		if (method)
		{
			int smallestidx = 0;

			for(int i=0; i<no_of_names; i++)
			{
		 		smallestidx = i;
				for(int j=i; j<no_of_names; j++)
				{
					if (names_array[j] < names_array[i])
						smallestidx = j;
				}
				std::swap(names_array[i], names_array[smallestidx]);
			}
		}

		else
		{
			std::sort(names_array, names_array+no_of_names);
		}


	}

	void print_names()
	{
		if (!names_array)
		{	
			std::cout<<"Enter names first. No names to display"<<std::endl;

			return;
		}

		for (int i=0; i<no_of_names; i++)
		{
			std::cout<<"Sorted Names #"<< i+1<<": "<<names_array[i]<<'\n';
		}
	}

	~prakash()
	{
		std::cout<<"Deleting the dynamic memory \n";
		delete[] names_array;
	}
};


int main()
{
	prakash ob;
	ob.get_number();
	ob.set_names();	
	ob.sort_names();
	ob.print_names();
	return 0;
};