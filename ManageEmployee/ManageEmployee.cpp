// ManageEmployee.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "CEmployee.cpp"
#include<fstream>
#include<iterator>
#include<algorithm>
using namespace std;

vector<CEmployee> ve;
void addEmp(vector<CEmployee>&);
void display(vector<CEmployee>&);
void downloadDataInFile(vector<CEmployee>&);
void sortBySalary(vector<CEmployee>);
void sortByEmployeeId(vector<CEmployee>);
void drawLine(int, char);


int main()
{

    system("cls");
    char choice;
    

    do {
        cout << "\n\n\n\t\t\t*----EMPLOYEE MANAGEMENT----*\n";
        cout << "\n\n\n\t 1. Add employee";
        cout << "\n\n\t 2. Display employee list";
        cout << "\n\n\t 3. Sort employees by salary and display";
        cout << "\n\n\t 4. Sort employees by employeeId and display";
        cout << "\n\n\t 5. Download data to file";
        cout << "\n\n\t 6. exit";
        cout << "\n\n\t Please select your option(1-6)";
        cin >> choice;
        
        switch (choice)
        {
        case '1':
            cout<<"here in option 1\n";
            addEmp(ve);
            break;
        case '2':
            cout << "here in option 2\n";
            display(ve);
            break;
        case'3':
            cout << "here in option 3\n";
            sortBySalary(ve);
            break;
        case'4':
            cout << "here in option 4\n";
            sortByEmployeeId(ve);
            display(ve);
            break;
        case '5':
            downloadDataInFile(ve);
            break;
        case'6':
            cout << "\a";
            exit(0);
        default:
            cout << "in default case";
            cout << "Please enter valid option";
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
    cout << "Enter name : ";
    getline(cin>>ws, name);
    emp.setM_strName(name);

    cout << "Enter age : ";
    cin >> age;
    emp.setM_iAge(age);

    cout << "Enter address : ";
    getline(cin>>ws, address);
    emp.setM_strAddress(address);

    cout << "Enter employee ID : ";
    cin >> id;
    emp.setM_iEmpId(id);

    cout << "Enter salary : ";
    cin >> salary;
    emp.setM_dSalary(salary);

    cout << "Enter designation : " ;
    getline(cin>>ws, designation);
    emp.setM_strDesignation(designation);

    cout << "Enter employee skills : " ;
    getline(cin>>ws, skills);
    emp.setM_strSkills(skills);

    ve.push_back(emp);
}


void display(vector<CEmployee>& ve) {
    cout << "hey you are in display method\n";
    int size = ve.size();
    cout << "number of employees: " << size<<endl;
    if (size == 0) { cout << "No employess added to display"; }
    for (CEmployee c:ve) {
        cout << "\n";
        cout << "Employee name:       " << c.getM_strName() << endl;
        cout << "Employee age:        " << c.getM_iAge() << endl;
        cout << "Employee address:    " << c.getM_strAddress() << endl;
        cout << "Employee id:         " << c.getM_iEmpId() << endl;
        cout << "Employee salary:     " << c.getM_dSalary() << endl;
        cout << "Employee designation:" << c.getM_strDesignation() << endl;
        cout << "Employee skills:     " << c.getM_strSkills() << endl;
        drawLine(60, '_');

    }
}

void downloadDataInFile(vector<CEmployee>& ve) {
    fstream file;
    file.open("list.csv", ios_base::out);
    for (int i=0; i < ve.size(); i++) {
        file << "Employee " << i << " details:\n";
        file << "Employee name: " << ve[i].getM_strName() << endl;
        file << "Employee age: " << ve[i].getM_iAge() << endl;
        file << "Employee address:" << ve[i].getM_strAddress() << endl;
        file << "Employee id: " << ve[i].getM_iEmpId() << endl;
        file << "Employee salary:" << ve[i].getM_dSalary() << endl;
        file << "Employee designation:" << ve[i].getM_strDesignation() << endl;
        file << "Employee skills:" << ve[i].getM_strSkills() << endl;
        file << "\n\n\n";
    }
    file.close();

    
}

void drawLine(int n,char symbol){
    for (int i = 0; i < n; i++) {
        cout << symbol;
    }
}

void sortBySalary(vector<CEmployee> ve) {
    cout<<"Sorting employees by salary descending order:\n";
    sort(ve.begin(), ve.end());
    display(ve);
}

void sortByEmployeeId(vector<CEmployee> ve) {
    cout << "Sorting employees by Employee Id ascending order: \n";
    sort(ve.begin(), ve.end());
    display(ve);

}
/*sort(ve.begin(), ve.end(), [](const MyStruct& ob1, const MyStruct& ob2) {
    return ob1.getM_iEmpId() < ob2.getM_iEmpId();
    });
for (auto it = ve.begin(); it != ve.end(); it++) {
    cout << it->data << endl;
}*/





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


