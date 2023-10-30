#include <iostream>

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
	cEmployee_t	cEmployee_Paco(1,"Paco Tortosa", "Murcia", 52, 100e3, true);
	cEmployee_t	cEmployee_Javi={2,"Javi Tortosa", "Murcia", 22, 45e3, false};
	cEmployee_t	cEmployee_Juan;
	cEmployee_Juan.m_u16EmployeeId = 3;
	cEmployee_Juan.m_strName = "Juan Garcia";
	cEmployee_Juan.m_strBirthPlace = "Cantabria";
	cEmployee_Juan.m_u8Age = 28;
	cEmployee_Juan.m_dDesiredYearSalary = 45e3;
	cEmployee_Juan.m_bMarried = false;

	//Paco
	cEmployee_Paco.m_Print();
	//cEmployee_t::s_Print(cEmployee_Paco);

	//Javi
	cEmployee_Javi.m_Print();
	//cEmployee_t::s_Print(cEmployee_Javi);

	//Juan
	cEmployee_Juan.m_Print();
	//cEmployee_t::s_Print(cEmployee_Juan);
}
