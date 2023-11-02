#include <iostream>
#include <iomanip> 

int main()
{
	std::cout << std::showpos;
	std::cout <<  -123 << std::endl;
	std::cout <<  123 << std::endl;

	std::cout << std::endl;

	std::cout << std::noshowpos;
	std::cout <<  -123 << std::endl;
	std::cout <<  123 << std::endl;

	std::cout << std::endl;

	uint32_t u8Value = 0xdeadbeef;
	std::cout << "The value is " << u8Value << std::endl;
	std::cout << "The value is " << std::hex << u8Value << std::endl;
	std::cout << "The value is " << std::hex << "0x" << u8Value << std::endl;
	std::cout << "The value is " << std::hex << "0x" << std::uppercase << u8Value << std::endl;

	std::cout << std::endl;

	std::cout << "I am " << std::dec << 52 << " years old." << std::endl;

	std::cout << std::endl;

	std::cout << "The value is " << std::hex << "0x" << std::uppercase << std::setfill('0') << std::setw(4) <<   0x12 << std::endl;
	std::cout << "The value is " << std::hex << "0x" << std::uppercase << std::setfill('0') << std::setw(4) << 0x3412 << std::endl;

	std::cout << std::endl;

	std::cout << std::dec;
	std::cout << "Salary " << std::setfill('&') << std::setw(10) << std::right <<    1000 << std::endl;
	std::cout << "Salary " << std::setfill('&') << std::setw(10) << std::right <<  -20000 << std::endl;

	std::cout << std::endl;

	std::cout << std::dec << std::showpos;
	std::cout << "Salary " << std::setfill(' ') << std::setw(10) << std::internal <<    1000 << std::endl;
	std::cout << "Salary " << std::setfill(' ') << std::setw(10) << std::internal <<  -20000 << std::endl;

	std::cout << std::endl;

	std::cout << "Am I married? "    << std::boolalpha << true << std::endl;
	std::cout << "Are you married? " << std::boolalpha << false << std::endl;
}
