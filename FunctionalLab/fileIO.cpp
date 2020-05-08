#include "fileIO.h"

void ReadFromFile(std::ifstream &fin, std::vector<progLanguage> &container)
{
	int a = 0;
	fin>>a;
	container.resize(a);
	for(int i = 0; i < a; i++)
	{
		fin >> container[i].type;
		if ( container[i].type == OOP)
		{
			fin >> container[i].name;
			fin >> container[i].inherence;
			fin >> container[i].year;		
		} else if ( container[i].type == PROCEDURE)
		{
			fin >> container[i].name;
			fin >> container[i].isAbstract;
			fin >> container[i].year;	
		} else
		{
			fin >> container[i].name;
			fin >> container[i].lazyEval;
			fin >> container[i].typization;
			fin >> container[i].year;	
		}
	}
}

void WriteToFile(std::ofstream &fout, std::vector<progLanguage> &container)
{
	int a = static_cast<int>(container.size());

	for(int i = 0; i < a; i++)
	{	
		if(container[i].type == OOP )
		{
			fout << "Объектно ориентированный язык программирования ";
			if(container[i].inherence == SINGLE)
			{
				fout << " с одиночным наследованием";
			} else if(container[i].inherence == MULTIPLE)
			{
				fout << " c множественным наследованием";

			} else if (container[i].inherence == INTERFACE)
			{
				fout << " c поддержкой интерфейсов";
			}
		} else if  (container[i].type == PROCEDURE)
		{
			fout << "Процедурный язык программирования ";
			if(container[i].isAbstract == 0)
			{
				fout << " без абстрактных типов данных";
			} else 
			{
				fout << " c наличием абстрактных типов данных";
			} 
			
		} else 
		{
			fout << "Функциональный язык программирования ";
			
			if(container[i].lazyEval == 0)
			{
				fout << " без поддержки ленивый вычислений";
			} else 
			{
				fout << " c поддержкой ленивый вычислений";
			} 
			
			if(container[i].typization == STRICT_TYPE)
			{
				fout << " с строгой типизацией";
			} else 
			{
				fout << " c динамической типизацией";
			} 
		}

		fout << " \"" <<container[i].name << "\""; 


		fout << " был разработан в " << container[i].year << " году\n";
	}
}