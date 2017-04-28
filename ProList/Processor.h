#pragma once
#include <iostream>
#include <string>
struct Processor
{
	/*using char: because of strcpy(), I'd fucked up to use "std::string" and copy it.*/ 
	char Name_Processor [30];
	char Model[20];

	float Freaq;
	int Core;
	Processor *Next;//pointer on the next element of my structure 

	void InputData()
	{
		std::cout << "Name of Processor: ";
		std::cin >> Name_Processor;
		std::cout << "Which model: ";
		std::cin>>Model;
		std::cout << "Freaquancy: ";
		std::cin >> Freaq;
		std::cout << "Core: ";
		std::cin >> Core;
		std::cout << std::endl;
	}	
};

class ProcessorList 
{
private:
	Processor *Head_of_List;
	int Counter;
public:
	//Method counter
	int CounUp();

	//Constructor
	ProcessorList() :Head_of_List(NULL),Counter(0){}

	//Destructor
	~ProcessorList();

	//Add element in a list 
	void AddElement(const Processor& newProcessor);

	// Show My Data which was recorded
	void show();

	//Take the element from a List
	void TakeAnyElement(const int N);
};



