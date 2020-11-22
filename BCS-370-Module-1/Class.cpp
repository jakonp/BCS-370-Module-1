//
//  Class.cpp
//  BCS-370-Module-1
//
//  Created by Nick Jakobczyk on 11/22/20.
//

#include <iostream>
#include <string>

using namespace std;

//tiers
enum preferredTiers{tier1, tier2, tier3};

//CustomerType Classes

class GeneralCustomer
{
public:
    int custId;
    string Name;
    string address;
    void Register(int id, string name, string addr)
    {
        custId = id;
        Name = name;
        address = addr;
    }
    void printCustomerInfo()
    {
        cout << "ID: " << custId << endl;
        cout << "Name: " << Name << endl;
        cout << "Address: " << address << endl;
    }
};

class PreferredCustomer : public GeneralCustomer
{
public:
    preferredTiers tiers;
    void Register(int id, string name, string addr, preferredTiers tier)
    {
        custId = id;
        Name = name;
        address = addr;
        tiers = tier;
    }
    void printCustomerInfo()
    {
        cout << "ID: " << custId << endl;
        cout << "Name: " << Name << endl;
        cout << "Address: " << address << endl;
        cout << "Preferred Tier is ";
        switch (tiers)
        {
            case 0: cout << "Tier 1\n";
                break;
            case 1: cout << "Tier 2\n";
                break;
            case 2: cout << "Tier 3\n";
                break;
        }
        
    }
};
class BlackListedCustomer : public GeneralCustomer
{
public:
    string blackListedDate;
    void Register(int id, string name, string addr, string date)
    {
        custId = id;
        Name = name;
        address = addr;
        blackListedDate = date;
    }
    void printCustomerInfo()
    {
        cout << "ID: " << custId << endl;
        cout << "Name: " << Name << endl;
        cout << "Address: " << address << endl;
        cout << "Black-listed date is: " << blackListedDate << endl;
    }
};
