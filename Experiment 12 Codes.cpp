//Name: - Manas Gautam
//PRN: - 23070123081
//Batch: - E&Tc {B}

// Experimnet 12 A: -


#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default constructor called!" << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}

// Experiment 12 B : - 

#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(int val) {
        cout << "Parameterized constructor called! Value: " << val << endl;
    }
};

int main() {
    MyClass obj(42);
    return 0;
}

// Experiment 12 C : -

#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
public:
    MyClass(int val) {
        value = val;
        cout << "Parameterized constructor called! Value: " << value << endl;
    }

    MyClass(const MyClass &obj) {
        value = obj.value;
        cout << "Copy constructor called! Value: " << value << endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    return 0;
}

// Experimnet 12 D: - 


#include <iostream>
using namespace std;

class MyClass {
private:
    int value1;
    int value2;
public:
    MyClass(int val1 = 0, int val2 = 0) {
        value1 = val1;
        value2 = val2;
        cout << "Constructor called! Values: " << value1 << ", " << value2 << endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(5);
    MyClass obj3(3, 7);
    return 0;
}

// Experiment 12 E: -


#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void getInput() { 
        cout << "Enter length and breadth: " << endl;
        cin >> length >> breadth;
    }

    void display() { 
        int area = length * breadth;
        cout << "Area of rectangle is: " << area << endl;
    }
};

int main() {
    Rectangle rect;
    rect.getInput();
    rect.display();
    return 0;
}

// Experiment 12 F: - 

#include <iostream>
using namespace std;

class MyClass {
public:
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }

    MyClass() {
        cout << "Constructor called!" << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}