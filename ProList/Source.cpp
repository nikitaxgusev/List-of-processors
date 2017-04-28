#include "Processor.h"
#include <iostream>


int main()
{
	Processor proc;
	int N(0);// how many I want to input
	ProcessorList lst;

	std::cout << "How many processors have come: ";
	std::cin >> N;

	for (int i(0); i < N; i++)
	{
		proc.InputData();
		lst.AddElement(proc);
	}
	std::cout << std::endl;
	
	lst.show();
	std::cout<< "You recorded [ "<<lst.CounUp()<<" ] processors"<<std::endl;
	//lst.TakeAnyElement(1);
	system("pause");
	return 0;
}
