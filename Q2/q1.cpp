
#include<iostream>
#include"Vector.h"
#include<utility>



//================= MOSTAFA SADEGHI   9423067 ================

using namespace std::rel_ops;



int main() { 
	
	Vector v1{};
	for (int i = 1; i <= 33; ++i)
	{
		v1.push_back(i);
	}
	Vector v2{v1};  // copy constructor
	Vector v3{std::move(v2)}; // move constructor
	v3.show(); // 1 to 33 in vector (size=33, capacity=64)
	v3.pop_back();  // delete 33 from vector(1 to 32 in vector (size=32, capacity=32)
	v3.show();
	v3.push_back(33);  // again add 33 to vector 
	v3.show();

	Vector v4{v1+v3}; // adds two vectors
	v4.show();
	std::cout << (v1*v3) << std::endl; // multiply two vectors
	v3.push_back(1000);
	std::cout << (v1 > v3) << "," << (v1 == v3) << "," << (v1 < v3) <<std::endl;  
	
	

	return 0;
} 
