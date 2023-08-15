#include <iostream>
using namespace std;
class employee
{
    private:
    char emp_name[30];
    float basic_pay;
    float cal_da()
    {
        float da=0.5*basic_pay;
        return(da);

    }
    float cal_hra()
    {
        float hra=0.15*basic_pay;
        return(hra);

    }
public:
void read();
void display();

};
void employee::read()
{
    cout<<"ENter employee name= ";
    cin>>emp_name;
    cout<<"Enter the basic pay= ";
    cin>>basic_pay;
}
void employee::display()
{
    float grosssal;
    float da=cal_da();
    float hra=cal_hra();
    grosssal=basic_pay+da+hra;
    cout<<"gross salary od employee= "<<grosssal;
}
int main()
{
    employee emp;
    emp.read();
    emp.display();
return 0;
}