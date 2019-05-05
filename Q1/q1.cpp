#include <iostream> 
#include"MaxHeap.h"





int main() 
{ 
	
	MaxHeap a;
	for (int i = 0; i <= 50; ++i)
	{
		a.add(i);    // adds 0 to 50
	}
	
	a.printArray();  // print heapify array
	std::cout << a;  // prints like a tree
	std::cout << a.Max() << std::endl; // prints 50
	a.Delete();  //  deletes 50
	std::cout << a.Max() << std::endl; // prints 49
	a.printArray();
	std::cout << a;
	std::cout << a.getHeight() << std::endl; //prints height of the tree
	std::cout << a.Parent(4) << std::endl;  //prints 48 
	std::cout << a.RightChild(1) << ",,," << a.LeftChild(1) << std::endl; //prints 47,,,37
	a.heapSort();// sort the array and print it
	std::cout << a[5] << std::endl; //prints 6-th number of the heap
	a[0] = a[0] -60;  // substract 60 from  a[0](first element of the tree)
	a.heapSort();
	
	
	return 0;
} 


