#include <iostream> 
#include <string>
using namespace std; 
class Student 
{ 
private:     
    int rollNo;     
    string name; 
public:     
    // Constructor
    Student(int r, string n)     
    {         
        rollNo = r;          
        name = n;         
        cout << "Student object created" << endl;     
    }
    // Member function
    void display()    
    {         
        cout << "Roll Number: " << rollNo << endl;         
        cout << "Name: " << name << endl;     
    }     
        // Destructor     
    ~Student()     
        {         
            cout << "Student object destroyed" << endl;     
        }
};  
int main() 
{ 
    int roll2;
    string name2;
    Student s1(101, "Arun");     
    s1.display();
    cout << "Enter name\n" << endl;
    cin >> name2;
    cout << "Enter rollNo\n" << endl;
    cin >> roll2;
    Student s2(roll2,name2);
    s2.display()
    return 0; 
} 
