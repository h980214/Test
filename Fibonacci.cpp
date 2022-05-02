#include <iostream>

int sequence(int i)
{
	if (i == 1)
		return 1;
	else if (i == 2)
		return 1;
	else
		return sequence(i - 1) + sequence(i - 2);
}


int main()
{
	int n;
	std:: cin >> n;
	for(int i = 1; i<=n;i++)
	std::cout<< sequence(i)<<" ";

	return 0;
}
