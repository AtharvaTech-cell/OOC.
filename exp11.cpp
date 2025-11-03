#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int no;
    string name;

public:
    virtual void salary() = 0;
    virtual void display() = 0;
};

// ----------- Salaried Employee -----------
class SalariedEmployee : public Employee {
private:
    double monthlySalary;

public:
    void salary() override {
        cout << "Enter employee monthly salary: ";
        cin >> monthlySalary;
    }

    void display() override {
        cout << endl << "Salaried Employee:" << endl;
        cout << "Salary: " << monthlySalary << endl;
    }
};

// ----------- Hourly Employee -------------
class HourlyEmployee : public Employee {
private:
    double hours;
    double rate;

public:
    void salary() override {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }

    void display() override {
        cout << endl << "Hourly Employee:" << endl;
        cout << "Hours: " << hours << endl;
        cout << "Rate: " << rate << endl;
        cout << "Salary: " << (rate * hours) << endl;
    }
};

// ----------- Commissioned Employee -----------
class CommissionedEmployee : public Employee {
private:
    double salarydouble;
    int overtime;

public:
    void salary() override {
        cout << "Enter salary: ";
        cin >> salarydouble;
        cout << "Enter overtime: ";
        cin >> overtime;
    }

    void display() override {
        cout << endl << "Commissioned Employee:" << endl;
        cout << "Salary: " << salarydouble << endl;
        cout << "Overtime: " << overtime << endl;
        cout << "Total Salary: " << (salarydouble + (overtime * 15)) << endl;
    }
};

// ----------- Main Function -----------
int main() {
	cout<<"Name:Atharva Kishor Sarnaik"<<"\n"<<endl;
	cout<<"Roll no.36"<<"\n"<<endl;
	cout<<"Batch:S2"<<"\n"<<endl;
	cout<<"Div:B"<<"\n"<<endl;
    Employee* employees[3];

    employees[0] = new SalariedEmployee();
    employees[1] = new HourlyEmployee();
    employees[2] = new CommissionedEmployee();

    for (int i = 0; i < 3; i++) {
        employees[i]->salary();
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        employees[i]->display();
    }

    system("pause");
    return 0;
}

