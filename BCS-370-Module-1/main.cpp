//
//  main.cpp
//  BCS-370-Module-1
//
//  Created by Nick Jakobczyk on 11/22/20.
//

#include <iostream>
#include <string>
#include "Class.cpp"

using namespace std;

int main()
{
    GeneralCustomer G;
    PreferredCustomer P;
    BlackListedCustomer B;
    
    G.Register(1625412, "Bob", "63-84 7th Street New York, NY 10010");
    G.printCustomerInfo();
    
    P.Register(1654251, "Jack", "43-82 5th Ave New York, NY 19201", tier1);
    P.printCustomerInfo();
    
    B.Register(8084613, "Kyle", "94-32 90th St, Douglaston, NY 192012", "September 8th");
    B.printCustomerInfo();
    
    return 0;
}
