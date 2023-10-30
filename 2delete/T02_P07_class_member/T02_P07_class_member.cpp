#include <iostream>

class cEmployee_t{
public:
	std::string		m_strName;
	std::string		m_strBirthPlace;
	uint8_t			m_u8Age;
	double			m_dDesiredYearSalary;
	bool			m_bMarried;

	void m_Print(){
		std::cout	<< m_strName 
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
};

int main()
{
	cEmployee_t	cEmployee_Paco{"Paco Tortosa", "Murcia", 52, 100e3, true};
	cEmployee_t	cEmployee_Javi={"Javi Tortosa", "Murcia", 22, 45e3, false};
	cEmployee_t	cEmployee_Juan;
	cEmployee_Juan.m_strName = "Juan Garcia";
	cEmployee_Juan.m_strBirthPlace = "Cantabria";
	cEmployee_Juan.m_u8Age = 28;
	cEmployee_Juan.m_dDesiredYearSalary = 45e3;
	cEmployee_Juan.m_bMarried = false;

	//Paco
	cEmployee_Paco.m_Print();

	//Javi
	cEmployee_Javi.m_Print();

	//Juan
	cEmployee_Juan.m_Print();
}
