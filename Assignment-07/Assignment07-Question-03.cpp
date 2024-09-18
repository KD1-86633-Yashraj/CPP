// Q3. Write a class to store Account information of Bank customer by using following class diagram.
// Use enum to store information of account type.
// Create an array of 5 Accounts in main() and accept their details from user.
// Write Menu driven program to deposit/withdraw amount from the account.
// After each transaction display updated account balance.
// Throw exceptions for invalid values.
// Also implement an exception class InsufficientFundsException.
// In withdraw if sufficient balance is not available in account or while deposit the entered amount is
// negative then throw this exception.
#include <iostream>
using namespace std;


//class account
class Account{

int accNo;
int eAccountType;
double balance;

Account(){
}
Account(int accountNo,int eAccountType,double balance){
}
void accept(){

}

void display(){

}

void deposit(double amount){
    
}

void withdraw(double amount){

}


};

//class inSufficientFundsException
class inSufficientFundsException{
int accno;
double currentBalacne;
double withdrawAmount;

inSufficientFundsException(int accno, double balance, double withdrawamt){

}
void display(){

}
};


int main(){


    return 0;
}