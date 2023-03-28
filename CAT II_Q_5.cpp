#include<iostream>
#include<string>

using namespace std;

class Employee
{
private:
    string FirstName;
    string SecondName;
    string SurName;
    string EmployeeID;
    string Gender;
    string Date_Of_Birth;
    int BasicSalary, Pension_Contribution;
public:

    Employee()
    {
        FirstName=FirstName;
        SecondName=SecondName;
        SurName=SurName;
        EmployeeID=EmployeeID;
        Gender=Gender;
        Date_Of_Birth=Date_Of_Birth;
        BasicSalary=BasicSalary;
        Pension_Contribution=Pension_Contribution;


        cout<<"     FORTUNE BUSINESS SYSTEMS LTD."<<endl;
        cout<<"                                 "<<endl;
        cout<<"\tADD EMPLOYEE DETAILS"<<endl;
        cout<<"\t===================="<<endl<<endl;
        cout<<"Enter ID number                 : ";
        getline(cin, EmployeeID);
        cout<<"Enter First name                : ";
        getline(cin, FirstName);
        cout<<"Enter Second name               : ";
        getline(cin, SecondName);
        cout<<"Enter Surname                   : ";
        getline(cin, SurName);
        cout<<"Enter Gender <M or F>           : ";
        getline(cin, Gender);
        cout<<"Enter date of birth <DD-MM-YYYY>: ";
        getline(cin, Date_Of_Birth);
        cout<<"Enter Basic Salary in Ksh       : ";
        cin>>BasicSalary;

    }
    void ShowEmployee()
    {
        cout<<"\t EMPLOYEE DETAILS"<<endl;
        cout<<"\t ================"<<endl;

        cout<<"ID           :   "<<EmployeeID<<endl;
        cout<<"FIRST NAME   :   "<<FirstName<<endl;
        cout<<"SECOND NAME  :   "<<SecondName<<endl;
        cout<<"SURNAME      :   "<<SurName<<endl;
        cout<<"GENDER       :   "<<Gender<<endl;
        cout<<"DATE OF BIRTH:   "<<Date_Of_Birth<<endl;
        cout<<"BASIC SALARY :   "<<BasicSalary<<endl;

        Pension_Contribution=BasicSalary*0.05;

    }

    friend void Compute_Pension(Employee &);

};
void Compute_Pension(Employee&emp_obj)
{
    cout<<endl<<endl<<"PENSION CONTRIBUTION : "<<emp_obj.Pension_Contribution<<endl;
}


int main()
{
    Employee emp_obj;
    emp_obj.ShowEmployee();
    Compute_Pension(emp_obj);


    system("pause>null");
}

