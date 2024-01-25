#include <iostream.h>
#include <string.h>

class Mother
 {
protected:
    string name[10];
    int age;

public:
    void set_values(string& animalName, int animalAge) {
        name = animalName;
        age = animalAge;
    }
};

class Zebra : public Mother
 {
public:
    void display()
     {
        cout << "Zebra Information:" << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Name: " << name << endl;
        
    }
};

class Dolphin : public Mother
 {
public:
 
    void display() 
    {
        cout << "Dolphin Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        
    }
};

void main()
 {

    Zebra z;
    z.set_values("Stripes", 5);

 
    Dolphin d;
    d.set_values("Flipper", 8);

    // Display information about the Zebra and Dolphin
    z.display();
    cout <<endl;
    d.display();

    getch();
}