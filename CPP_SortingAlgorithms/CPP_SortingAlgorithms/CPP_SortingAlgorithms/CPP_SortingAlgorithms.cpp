// CPP_SortingAlgorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortingAlgorithm.h"

int main()
{
	int unsortedArray[] = { 5,3,4,1,2 };
	int arraySize = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

	SortingAlgorithm sortAlg;
	//sortAlg.BubbleSort(&unsortedArray[0], arraySize);
	sortAlg.BubbleSortUsingPointers(&unsortedArray[0], arraySize);

    return 0;
}

