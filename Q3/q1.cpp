
#include<iostream>
#include"Human.h"
#include"Oracle.h"




//================= MOSTAFA SADEGHI   9423067 ================


int main() { 
	Human mostafa{"mostafa","sadeghI", 1000,25,22,0,0};
	Human kimia{"kimia","sadeghI", 1,2,16,1,0};
	Human morteza{"morteza","sadeghI", 1,4,50,0,0};
	Human parvin{"parvin","seraji", 1,4,45,1,0};
	Oracle f{"javad"};

	std::cout << f.marry(&morteza, &parvin) << std::endl;
	Human* p1 = morteza + parvin;

	mostafa.show();
	(*p1).show();
	std::cout << mostafa.getFirstName() << "," << mostafa.getLastName() << std::endl;
	std::cout << mostafa.getEyeColor() << "," << mostafa.getHairColor() << std::endl;
	std::cout << (mostafa > morteza) << "," << (mostafa == morteza)<<std::endl;
	std::cout << (*p1).isChildOf(&morteza) << (*p1).isChildOf(&parvin) <<std::endl;
	std::cout << (morteza).isFatherOf(p1) << (parvin).isMotherOf(p1) <<std::endl;
	++mostafa; // age++
	mostafa.show();
	morteza.printChildren();
	parvin.printChildren();
	

	return 0;
} 
