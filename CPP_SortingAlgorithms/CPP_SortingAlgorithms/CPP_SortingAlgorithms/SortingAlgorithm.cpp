#include "stdafx.h"
#include "SortingAlgorithm.h"
#include "iostream"
using namespace std;

SortingAlgorithm::SortingAlgorithm()
{

}

SortingAlgorithm::~SortingAlgorithm()
{
}

int *  SortingAlgorithm::BubbleSortUsingPointers(int * inputArray, int arraySize)
{

	int temp = 0;

	cout << "Sorting using BubbleSort(using Pointer based swapping)" << endl;
	bool isSwapped = false;

	for (int i = 0; i < arraySize - 1; i++)
	{
		isSwapped = false;
		cout << "Iteration " << i << " Starts" << endl << "-----------------------" << endl;
		for (int j = 0; j < (arraySize - 1 - i); j++)
		{
			if (*(inputArray+j) > *(inputArray+(j + 1)) )
			{
				int temp = *(inputArray + j);
				*(inputArray + j)		= *(inputArray + (j+1));
				*(inputArray + (j + 1)) = temp;

				isSwapped = true;
			}

			//print the array status
			for (int i = 0; i < arraySize; i++)
			{
				cout << *(inputArray+i) << " | ";
			}
			cout << endl;
		}
		cout << "Iteration End" << endl << "-----------------------" << endl;

		if (!isSwapped)
		{
			cout << endl << "Array is already sorted!" << endl;
			break;
		}
	}


	return inputArray;

}

int * SortingAlgorithm::BubbleSort(int * inputArray, int arraySize)
{
	cout << "Sorting using BubbleSort" << endl;
	bool isSwapped = false;

	for (int i = 0; i < arraySize - 1 ; i++)
	{
		isSwapped = false;
		cout << "Iteration "<<i<<" Starts" << endl<<"-----------------------"<<endl;
		for (int j = 0; j < (arraySize - 1 - i); j++)
		{
			if (inputArray[j] > inputArray[j + 1])
			{
				int temp = inputArray[j];
				inputArray[j] = inputArray[j + 1];
				inputArray[j + 1] = temp;

				isSwapped = true;
			}

			//print the array status
			for (int i = 0; i < arraySize; i++)
			{
				cout << inputArray[i] << " | ";
			}
			cout << endl;
		}
		cout << "Iteration End" << endl << "-----------------------"<<endl;

		if (!isSwapped)
		{
			cout << endl << "Array is already sorted!" << endl;
			break;
		}
	}


	return inputArray;
}


