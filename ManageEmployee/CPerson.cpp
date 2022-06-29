#include"CPerson.h"

class CPerson
{
private:
	string m_strName;
	int m_iAge;
	string m_strAddress;
	//clock_t m_dtBirthDate;

public:
	
	CPerson(string name, int age, string address) {
		m_strName = name;
		m_iAge = age;
		m_strAddress = address;
	}
	CPerson()
	{
		m_strName = "";
		m_iAge = 0;
		m_strAddress = "";
		//m_dtBirthDate = 0;
	}
	/*~CPerson()
	{
	}*/


	// -----------Setters---------
	void setM_strName(string s) {
		m_strName = s;
	}
	void setM_iAge(int a) {
		m_iAge = a;
	}
	void setM_strAddress(string add) {
		m_strAddress = add;
	}
	//void setM_dtBirthDate(clock_t bd) {
	//	m_dtBirthDate = bd;
	//}
	//---------- Getters------------
	string getM_strName() {
		return m_strName;
	}
	int getM_iAge() {
		return m_iAge;
	}
	string getM_strAddress() {
		return m_strAddress;
	}
	//clock_t getM_dtBirthDate() {
	//	return m_dtBirthDate;
	//}
};


