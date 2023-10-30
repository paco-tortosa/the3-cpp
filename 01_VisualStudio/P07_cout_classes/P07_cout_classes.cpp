#include <iostream>

class cEmployee_t{
public:
	std::string		m_strName;
	std::string		m_strBirthPlace;
	uint8_t			m_u8Age;
	double			m_dDesiredYearSalary;
	bool			m_bMarried;
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
    std::cout	<< cEmployee_Paco.m_strName 
				<< " born in " 
				<< cEmployee_Paco.m_strBirthPlace 
				<< (cEmployee_Paco.m_bMarried?",":", not") 
				<< " married, " 
				<< static_cast<uint8_t>(cEmployee_Paco.m_u8Age)
				<< " years old."
				<< " He wants a salary of " 
				<< cEmployee_Paco.m_dDesiredYearSalary
				<< " euros."
				<< std::endl;

	//Javi
	std::cout	<< cEmployee_Javi.m_strName 
				<< " born in " 
				<< cEmployee_Javi.m_strBirthPlace 
				<< (cEmployee_Javi.m_bMarried?",":", not") 
				<< " married, " 
				<< static_cast<uint8_t>(cEmployee_Javi.m_u8Age)
				<< " years old."
				<< " He wants a salary of " 
				<< cEmployee_Javi.m_dDesiredYearSalary
				<< " euros."
				<< std::endl;

	//Juan
	std::cout	<< cEmployee_Juan.m_strName 
				<< " born in " 
				<< cEmployee_Juan.m_strBirthPlace 
				<< (cEmployee_Juan.m_bMarried?",":", not") 
				<< " married, " 
				<< static_cast<uint8_t>(cEmployee_Juan.m_u8Age)
				<< " years old."
				<< " He wants a salary of " 
				<< cEmployee_Juan.m_dDesiredYearSalary
				<< " euros."
				<< std::endl;
}
