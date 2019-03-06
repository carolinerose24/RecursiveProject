//
//  main.cpp
//  RecursiveProject
//
//  Created by Jarman, Caroline on 3/6/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include <iostream>
using namespace std;
//recursion--> define a definition with itself


double fib(double number)
{
    if(number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return fib(number - 1) + fib(number - 2);
    }
}

long fact(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * fact(number -1);
    }
}


int main()
{
    cout << fib(100) << endl;
//    for (int number = 0; number < 10; number++)
//    {
//        cout << fib(number) << ", ";
//    }
    
    for (int num = 0; num < 20; num++)
    {
        cout << num << "th Fibonacci value is " << fib(num) << endl;
        cout << num << "th factorial is " << fact(num) << endl;
    }
        return 0;
}
