#include <iostream>
#include <sstream>

using namespace std;
int main(int argc, char const *argv[])
{
	float len,br;
	float area = 0;

	std::string l,b;
	cout<<"Enter Length and Breadth"<<endl;
	std::getline(std::cin, l);
	std::getline(std::cin, b);

	std::stringstream(l) >> len;
	std::stringstream(b) >> br;

	area = len*br;
	cout<<"Area = "<<area<<endl;

	return 0;
}
