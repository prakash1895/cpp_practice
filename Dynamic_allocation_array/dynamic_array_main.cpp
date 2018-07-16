
#include <iostream>
#include <string>
#include <algorithm> // std::sort algorithm
#include <utility> // std::swap function

void set_names(std::string* names_array, int no_of_names)
{
	for(int i=0; i<no_of_names; i++)
	{
		std::cin>>names_array[i];
	}
}

void sort_names(std::string* names_array, int no_of_names, bool method)
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

void print_names(std::string* names_array, int no_of_names)
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


int main()
{
	
	int no_of_names ;
	std::cout<<"Enter Number of names \n";
	std::cin>>no_of_names;
	std::string* names_array = new std::string[no_of_names] ;
	
	std::cout<<"Enter the names now"<<std::endl;

	bool method;
	method = false;

	set_names(names_array, no_of_names);	
	sort_names(names_array, no_of_names, method);
	print_names(names_array, no_of_names);

	std::cout<<"Deleting the dynamic memory \n";
	delete[] names_array;
	return 0;
};