#include <iostream>
#include <malloc.h>

int main()
{
	int *foo;
	foo=(int*)malloc(1*sizeof(int));
	if(!foo)
	{
		std::cout << "memory is not allocated" << std::endl;
	} else {
		std::cout << "memory allocated" << std::endl;
	}
	free(foo);
	return 0;
}