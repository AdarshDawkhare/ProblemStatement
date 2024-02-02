 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

 // Organization chart

// employeee class
class Employee
{
    private: 
        string employeeName;
        int employeeId;
        string employeeRole;
        vector<string> reports;
        int reportTo;
    
    public :
        Employee(string employeeName , int employeeId , string employeeRole ,vector<string> reports ,int reportTo)
        {
            this->employeeName = employeeName;
            this->employeeId = employeeId;
            this->employeeRole = employeeRole;
            this->reports = reports;
            this->reportTo = reportTo;
        }
        
        string getName()
        {
            return this->employeeName;
        }
        int getEmployeeId()
        {
            return this->employeeId;
        }
        string getRole()
        {
            return this->employeeRole;
        }

        vector<string> getReportsOfEmployee()
        {
            return this->reports;
        }
        int getReportsTo()
        {
            return this->reportTo;
        } 
};

class Managment
{
    public:
        
        vector<Employee*> employeeList;
        
        // void addEmployee()
        // {
        //     string name;
        //     cout<<"Enter name of employee - ";
        //     cin>>name;

        //     int id;
        //     cout<<"Enter id of employee - ";
        //     cin>>id;

        //     string role;
        //     cout<<"Enter role of employee - ";
        //     cin>>role;

        //     int reportToId;
        //     cout<<"Enter the id of employee to whom he reports - ";
        //     cin>>reportToId;

        //     Employee *employee = new Employee(name,id,role,reportToId);
        //     employeeList.push_back(employee);
        // }

        void addEmployee(Employee* e)
        {
            employeeList.push_back(e);
        }

        void displayEmployeeInfo(int id)
        {
            for(int i = 0 ; i < employeeList.size() ; i++)
            {
                if(employeeList[i]->getEmployeeId() == id)
                {
                    cout << "name - "<<employeeList[i]->getName() <<endl;
                    cout << "id - " << employeeList[i]->getEmployeeId() <<endl;
                    cout << "role "<<employeeList[i]->getRole() <<endl;
                    cout << " roports to"<<employeeList[i]->getReportsTo() <<endl;
                    cout<<"reports"<<endl;
                    for(int i = 0 ; i < employeeList[i]->getReportsOfEmployee().size() ;i++)
                    {
                        cout<<i<<" ";
                    }
                }
            }
        }
};

int main()
{
    Employee * e2 = new Employee("PaulRoss",1,"president",{"no reports president"},0);
    Employee * e1 = new Employee("MarkDevis",2,"vice-president Finance",{"account","treasury"},1);
    Employee * e3 = new Employee("Roy",3,"vice-president HR",{"operations","staff development"},1);
    Employee * e4 = new Employee("Rebecca",4,"vice president marketing",{"customer service","domestic sales","department"},2);
    Employee * e5 = new Employee("Nell",5,"vice president marketing",{"purchasing","inspection"},2);
    Employee * e6 = new Employee("Scotte",6,"vice president manufacturing",{"assembly","testing"},3);
    Employee * e7 = new Employee("Arnold",7,"vice president engineering",{"system engineering","electronic"},3);
    

    Managment * m = new Managment();
    m->addEmployee(e1);
    m->addEmployee(e2);
    m->addEmployee(e3);
    m->addEmployee(e4);
    m->addEmployee(e5);
    m->addEmployee(e6);
    m->addEmployee(e7);


    m->displayEmployeeInfo(3);

    return 0;
}