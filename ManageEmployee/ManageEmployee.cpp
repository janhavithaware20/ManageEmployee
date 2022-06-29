// ManageEmployee.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
//#include "CPerson.cpp"
#include "CEmployee.cpp"
using namespace std;

void addEmp(vector<CEmployee>&);
void display(vector<CEmployee>&);


int main()
{

    system("cls");
    char choice;
    

    do {
        cout << "\n\n\n\t\t\t*----EMPLOYEE MANAGEMENT----*\n";
        cout << "\n\n\n\t 1. Add employee";
        cout << "\n\n\t 2. Display sort employees by employeeId";
        cout << "\n\n\t 3. Display sort employees by salary";
        cout << "\n\n\t 4. exit";
        cout << "\n\n\t Please select your option(1-4)";
        cin >> choice;
        
        vector<CEmployee> ve;
        

        switch (choice)
        {
        case '1':
            cout<<"here in case 1\n";
            addEmp(ve);
            
                    break;
        case '2':
            cout << "here in case 2\n";
            display(ve);
          
                     break;
            /* case '3':sortBySalary();
                 display();
                 break;*/
        default:
            cout << "in default case";
            cout << "\a";
            exit(0);
        }
    } while (choice != '4');
    return 0;
}
void addEmp(vector<CEmployee>& ve) {
    CEmployee emp;
    string name, address, designation, skills;
    int age, id;
    double salary;
    cin.clear();
    cin.sync();
    cout << "Enter name" << endl;
    getline(cin>>ws, name);
    emp.setM_strName(name);

    cout << "Enter age";
    cin >> age;
    emp.setM_iAge(age);

    cout << "Enter address" << endl;
    getline(cin>>ws, address);
    emp.setM_strAddress(address);

    cout << "Enter employee ID " << endl;
    cin >> id;
    emp.setM_iEmpId(id);

    cout << "Enter salary";
    cin >> salary;
    emp.setM_dSalary(salary);

    cout << "Enter designation" << endl;
    getline(cin>>ws, designation);
    emp.setM_strDesignation(designation);

    cout << "Enter employee skills" << endl;
    getline(cin>>ws, skills);
    emp.setM_strDesignation(designation);

    cout << emp.getM_strAddress()<< endl;
    cout << emp.getM_strName() << endl;

    ve.push_back(emp);
}


void display(vector<CEmployee>& ve) {
    cout << "hey you are in display method\n";
    int size = ve.size();
    cout << "number of employees: " << size<<endl;
    if (size == 0) { cout << "No employess added to display"; }
    for (CEmployee c:ve) {
        cout << "Employee name: " << c.getM_strName() << endl;
        cout << "Employee id: " << c.getM_iEmpId() << endl;

    }
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


