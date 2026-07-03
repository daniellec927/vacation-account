/*
 VacationAccount.h
 Author: Danielle Choi
 Date: 2023/03/10.
 */

#ifndef VacationAccount_h
#define VacationAccount_h

#include <iostream>
#include "VA_BloodDonation.h"

using namespace std;

class VacationAccount{
private:
    int mID;
    double mBalance;
public:
    VacationAccount(int EmployeeID);
    double getBalance();
    int getID();
    bool addVacationToAccount(BloodDonation donation);
};

#endif /* VacationAccount_h */
