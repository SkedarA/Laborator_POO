#include "pch.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Testing the CurrentAccount");
    CurrentAccount current("Jane", 100);

    current.Credit(500);

    if (current.Debit(550)) {
        Console::WriteLine("Debit(550) OK");
    }
    else {
        Console::WriteLine("Debit(550) Failed");
    }

    if (current.Debit(100)) {
        Console::WriteLine("Debit(100) OK");
    }
    else {
        Console::WriteLine("Debit(100) Failed");
    }

    Console::WriteLine(current.ToString());


    Console::WriteLine("Testing the SavingsAccount");
    SavingsAccount savings("Vaseok");

    current.Credit(500);

    if (current.Debit(50)) {
        Console::WriteLine("Debit(50) OK");
    }
    else {
        Console::WriteLine("Debit(50) Failed");
    }

    if (current.Debit(46)) {
        Console::WriteLine("Debit(46) OK");
    }
    else {
        Console::WriteLine("Debit(46) Failed");
    }
       
    Console::WriteLine(savings.ToString());

    
}
