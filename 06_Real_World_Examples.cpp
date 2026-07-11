/*
◆───────────────────────────────◆
06. Real World Examples of OOP
◆───────────────────────────────◆

💡 Remember

Everything around us can be represented
using Classes and Objects.

Class
-----
A Blueprint or Design.

Object
------
A Real Entity created from a Class.

🎯 Key Words

• Class
• Object
• Blueprint
• Design
• Real Entity

Imagine:

House Blueprint
       │
       ▼
     Class

Real House
       │
       ▼
     Object

*/

#include <iostream>
using namespace std;

/*
◆───────────────────────────────◆
        House Class
◆───────────────────────────────◆
*/

class House
{
public:

    int rooms = 3;

    void OpenDoor()
    {
        cout << "House Door Opened" << endl;
    }
};

/*
◆───────────────────────────────◆
        Car Class
◆───────────────────────────────◆
*/

class Car
{
public:

    string color = "Black";

    void Start()
    {
        cout << "Car Started" << endl;
    }
};

/*
◆───────────────────────────────◆
      BankAccount Class
◆───────────────────────────────◆
*/

class BankAccount
{
public:

    int balance = 10000;

    void CheckBalance()
    {
        cout << "Balance : " << balance << endl;
    }
};

/*
◆───────────────────────────────◆
        Player Class
◆───────────────────────────────◆
*/

class Player
{
public:

    int health = 100;

    void Attack()
    {
        cout << "Player Attacked" << endl;
    }
};

// Main Function

int main()
{
    House h1;
    Car c1;
    BankAccount account1;
    Player p1;

    cout << "House Rooms : " << h1.rooms << endl;
    h1.OpenDoor();

    cout << endl;

    cout << "Car Color : " << c1.color << endl;
    c1.Start();

    cout << endl;

    account1.CheckBalance();

    cout << endl;

    cout << "Player Health : " << p1.health << endl;
    p1.Attack();

    return 0;
}

/*
Output

House Rooms : 3
House Door Opened

Car Color : Black
Car Started

Balance : 10000

Player Health : 100
Player Attacked

◆───────────────────────────────◆
Observation
◆───────────────────────────────◆

House
------
Blueprint  → Class
Real House → Object

Car
----
Car Design → Class
Real Car   → Object

BankAccount
-----------
BankAccount → Class
account1    → Object

Player
------
Player  → Class
p1      → Object

⚠ Common Mistake

Many beginners think that
Class and Object are the same.

✗ Wrong

Class is only a Blueprint.

Object is the Real Entity
created from that Blueprint.

🎤 Interview Point

Q. Give some real-world examples
of OOP.

Answer:

• House
• Car
• Bank Account
• Player
• Mobile
• Student

In all these examples,
Design = Class
Real Entity = Object

*/