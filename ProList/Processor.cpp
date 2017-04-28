#include "Processor.h"

void ProcessorList::AddElement(const Processor& newProcessor)
{
	Counter++;//Count up to how many processors I recorded
	Processor *timePr = new Processor;
	timePr->Next = Head_of_List;//next element would be a head
	//copy data
	strcpy_s(timePr->Name_Processor, newProcessor.Name_Processor);
	strcpy_s(timePr->Model, newProcessor.Model);
	timePr->Freaq = newProcessor.Freaq;
	timePr->Core = newProcessor.Core;

	Head_of_List = timePr;//The next element is becoming a head
}

void ProcessorList::show()
{
	std::cout << std::endl;
	Processor *timePr = Head_of_List;
	std::cout << "The Processors: " << std::endl;
	while (timePr != NULL)
	{
		std::cout << "Name of The Processor: " << timePr->Name_Processor << std::endl;
		std::cout << "The Model: " << timePr->Model << std::endl;
		std::cout << "Frequency: " << timePr->Freaq << std::endl;
		std::cout << "Quantity of cores: " << timePr->Core << std::endl;

		timePr = timePr->Next;
	}
	std::cout << std::endl;
}

void ProcessorList::TakeAnyElement(const int N)
{
	Processor *timePr = Head_of_List;
	if ((Head_of_List != NULL) && (N < Counter))
	{
		for (int i = 0; i < N; i++)timePr = timePr->Next;

		std::cout << "Name of The Processor: " << timePr->Name_Processor << std::endl;
		std::cout << "The Model: " << timePr->Model << std::endl;
		std::cout << "Frequency: " << timePr->Freaq << std::endl;
		std::cout << "Quantity of cores: " << timePr->Core << std::endl;

		std::cout << std::endl;
	}
}
ProcessorList::~ProcessorList()
{
	//deleting my list after work 
	while (Head_of_List != NULL)
	{
		Processor *timeProc = Head_of_List->Next;
		delete Head_of_List;
		Head_of_List = timeProc;
	}
	std::cout << "Checking destructor......." << std::endl;
}

int ProcessorList::CounUp()
{
	return Counter;
}