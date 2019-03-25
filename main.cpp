#include <iostream>


#include "timer.h"
#include <Windows.h>

int main()
{
	std::cout << "Hello, World!" << std::endl;
	Timer timer("Test Timer");
	std::cout << timer.name() << std::endl;
	Sleep(2000);
	std::cout << timer.elapsed() << std::endl;
	timer.restart();
	Sleep(3000);
	timer.rlog("Ê±¼ä");
	//timer.log();
	system("pause");
	return 0;
}



