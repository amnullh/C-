#include<iostream>
#include<cstring>
using namespace std;
class EMPLOYEE
{
    int employee_number;
    char employee_name[30];
    float basic,da,it,net_sal;
    public:
    void read_details()
    {
        cout<<"Enter Employee number, Employee name and Basic Salary"<<endl;
        cin>>employee_number>>employee_name>>basic;
    }
    void calculate_net_sal()
    {
        float gross_sal;
        da=0.52*basic;
        gross_sal=basic+da;
        it=0.30*gross_sal;
        net_sal=gross_sal-it;
    }
    void display_details()
    {
        cout<<"Employee Number:"<<employee_number<<endl;
        cout<<"Employee Name:"<<employee_name<<endl;
        cout<<"Net Salary:"<<net_sal<<endl;
    }
};
int main()
{
    EMPLOYEE emp[100];
    int i,n;
    cout<<"Enter number of employee:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<endl<<"--------------EMPLOYEE :"<<i+1<<"-----------------"<<endl;
        emp[i].read_details();
    }
    for(i=0;i<n;i++)
    {
        emp[i].calculate_net_sal();
    }
    for(i=0;i<n;i++)
    {
        cout<<endl<<"--------------EMPLOYEE DETAIL:"<<i+1<<"-----------------"<<endl;
        emp[i].display_details();
    }
    return 0;
}