#include <iostream>
#include <vector>

class cEmployee_t{
private:
	static uint16_t s_u16EmployeeCount;

public:
	std::uint16_t	m_u16EmployeeId;
	std::string		m_strName;
	std::string		m_strBirthPlace;
	uint8_t			m_u8Age;
	double			m_dDesiredYearSalary;
	bool			m_bMarried;

	cEmployee_t()  
	{
		m_u16EmployeeId			=	0;
		m_strName				=	"";
		m_strBirthPlace			=	"";
		m_u8Age					=	0;
		m_dDesiredYearSalary	=	0;
		m_bMarried				=	false;
		s_u16EmployeeCount++;
	}

	cEmployee_t(std::uint16_t	_u16EmployeeId,
		std::string		_strName,
		std::string		_strBirthPlace,
		uint8_t			_u8Age,
		double			_dDesiredYearSalary,
		bool			_bMarried)  
	{
		m_u16EmployeeId			=	_u16EmployeeId;
		m_strName				=	_strName;
		m_strBirthPlace			=	_strBirthPlace;
		m_u8Age					=	_u8Age;
		m_dDesiredYearSalary	=	_dDesiredYearSalary;
		m_bMarried				=	_bMarried;
		s_u16EmployeeCount++;
	}

	void m_Print(){
		std::cout	<< m_u16EmployeeId << " out of " << s_u16EmployeeCount << " : "
			<< m_strName 
			<< " born in " 
			<< m_strBirthPlace 
			<< (m_bMarried?",":", not") 
			<< " married, " 
			<< +m_u8Age
			<< " years old."
			<< " He wants a salary of " 
			<< m_dDesiredYearSalary
			<< " euros."
			<< std::endl;
	}

	static void s_Print(cEmployee_t& _cEmployee){
		_cEmployee.m_Print();
	}
};
uint16_t cEmployee_t::s_u16EmployeeCount = 0;


int main()
{
	std::vector<cEmployee_t> vcEmployee;

	vcEmployee.push_back(cEmployee_t(1,"Paco Tortosa", "Murcia", 52, 100e3, true));
	vcEmployee.push_back(cEmployee_t(2,"Javi Tortosa", "Murcia", 22, 45e3, false));
	vcEmployee.push_back(cEmployee_t(3,"Juan Garcia", "Cantabria", 28, 45e3, false));

	std::cout << "Address of vcEmployee[0] = " << &vcEmployee[0] << std::endl;
	std::cout << "Address of vcEmployee[1] = " << &vcEmployee[1] << std::endl;
	std::cout << "Address of vcEmployee[2] = " << &vcEmployee[2] << std::endl;
	std::cout << std::endl;

	for(auto& e : vcEmployee){
		std::cout << "Address of e = " << &e << std::endl;
		e.m_Print();
	}

	std::cout << std::endl;
	for(auto ee : vcEmployee){
		std::cout << "Address of ee = " << &ee << std::endl;
		ee.m_Print();
	}
}
