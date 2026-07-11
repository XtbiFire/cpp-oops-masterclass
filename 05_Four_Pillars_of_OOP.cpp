/*
◆───────────────────────────────◆
05. Four Pillars of OOP
◆───────────────────────────────◆

💡 Remember

The Four Pillars of OOP

1. Encapsulation
2. Inheritance
3. Polymorphism
4. Abstraction

These four concepts make OOP
powerful, secure, reusable, and
easy to maintain.

🎯 Key Words

• Encapsulation
• Inheritance
• Polymorphism
• Abstraction

Imagine:

OOP
◆───────────────────────────────◆
            OOP
             │
    ┌────────┼────────┐
    │        │        │
Encapsulation Inheritance
             │
      Polymorphism
             │
        Abstraction

*/

#include <iostream>
using namespace std;

/*
◆───────────────────────────────◆
        Encapsulation
◆───────────────────────────────◆
*/

class BankAccount
{
public:

    int balance = 5000;

    void ShowBalance()
    {
        cout << "Balance : " << balance << endl;
    }
};

/*
◆───────────────────────────────◆
        Inheritance
◆───────────────────────────────◆
*/

class Vehicle
{
public:

    void Start()
    {
        cout << "Vehicle Started" << endl;
    }
};

class Car : public Vehicle
{

};

/*
◆───────────────────────────────◆
        Polymorphism
◆───────────────────────────────◆
*/

class Player
{
public:

    void Attack()
    {
        cout << "Player Attack" << endl;
    }
};

/*
◆───────────────────────────────◆
        Abstraction
◆───────────────────────────────◆
*/

class Remote
{
public:

    void PressPowerButton()
    {
        cout << "TV Started" << endl;
    }
};

// Main Function

int main()
{
    cout << "===== Encapsulation =====" << endl;

    BankAccount account;
    account.ShowBalance();

    cout << endl;

    cout << "===== Inheritance =====" << endl;

    Car car;
    car.Start();

    cout << endl;

    cout << "===== Polymorphism =====" << endl;

    Player p1;
    p1.Attack();

    cout << endl;

    cout << "===== Abstraction =====" << endl;

    Remote tv;
    tv.PressPowerButton();

    return 0;
}

/*
Output

===== Encapsulation =====
Balance : 5000

===== Inheritance =====
Vehicle Started

===== Polymorphism =====
Player Attack

===== Abstraction =====
TV Started

◆───────────────────────────────◆
Observation
◆───────────────────────────────◆

Encapsulation
◆───────────────────────────────◆
Protects Data inside a Class.

Inheritance
◆───────────────────────────────◆
Allows one Class to use another
Class's features.

Polymorphism
◆───────────────────────────────◆
Allows the same function name to
behave differently.

Abstraction
◆───────────────────────────────◆
Shows only necessary details and
hides internal implementation.

⚠ Common Mistake

Do not think these examples show the
complete concepts.

This file gives only an introduction.

Each pillar will be covered in detail
in separate chapters.

🎤 Interview Point

Q. What are the four pillars of OOP?

Answer:

1. Encapsulation
2. Inheritance
3. Polymorphism
4. Abstraction

*/