#include <iostream>
#include "Employee.hpp"
#include "Department.hpp"

int main() {
  
    Employee employee1("Gabi", "11-12-13", "Receptionist");
    Employee employee2("Stefi", "12-13-14", "HR" );
    Employee employee3("Moni", "13-14-15", "Manager" );
    
    Department department1("Office");
    
    department1.addEmployee(employee1);
    department1.addEmployee(employee2);
    department1.addEmployee(employee3);

    
    department1.display();
    
    return 0;
}
