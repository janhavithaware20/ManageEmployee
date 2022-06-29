#include "CEmployee.h"
#include "CPerson.cpp"


class CEmployee :public CPerson
{
private:
    int m_iEmpId;
    // time_t m_dtJoiningDate;
    double m_dSalary;
    string m_strDesignation;
    string m_strSkills;
    
public:
    CEmployee()
    {
        m_iEmpId = 0;
        //m_dtJoiningDate = 0;
        m_dSalary = 0;
        m_strDesignation = " ";
        m_strSkills = " ";
    }

    CEmployee(string name,int age,string address,int id, double salary, string designation, string skills):CPerson(name, age, address){
        m_iEmpId = id;
        // time_t m_dtJoiningDate;
        m_dSalary = salary;
        m_strDesignation = designation;
        m_strSkills = skills;
    }
    
    // ------------Setters------------
    void setM_iEmpId(int id) {
        m_iEmpId = id;
    }
    // void setM_dtJoiningDate(time_t jdate) {
    //     m_dtJoiningDate = jdate;
    //}
    void setM_dSalary(double salary) {
        m_dSalary = salary;
    }
    void setM_strDesignation(string designation) {
        m_strDesignation = designation;
    }
    void setM_strSkills(string skill) {
        m_strSkills = skill;
    }
    //----------getters--------------
    int getM_iEmpId() {
        return m_iEmpId;
    }

    //time_t getM_dtJoiningDate() {
    //    return m_dtJoiningDate;
    //}
    double getM_dSalary() {
        return m_dSalary;
    }
    string getM_strDesignation() {
        return m_strDesignation;
    }
    string getM_strSkills() {
        return m_strSkills;
    }
    
  
    //read user input
    void read_x(std::istream& in) {
        in >> m_iEmpId;
    }
};


