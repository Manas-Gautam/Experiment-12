# Experiment-12

## Theory : -

### Constructors and Destructors in C++

**1. Constructors:**
Constructors in C++ are special member functions that are automatically called when an object of a class is created. Their main purpose is to initialize the object.

#### Characteristics of Constructors:
- **Same name as the class:** The constructor has the same name as the class.
- **No return type:** Constructors do not have a return type, not even `void`.
- **Automatic invocation:** They are invoked automatically when an object is created.
- **Overloadable:** You can have more than one constructor in the same class with different parameter lists (constructor overloading).
- **Default constructor:** If no constructor is defined, the compiler provides a default constructor.
- **Parameterized constructor:** A constructor can accept parameters, allowing different initializations of objects.
- **Constructor initialization list:** A constructor can initialize member variables using an initialization list.

#### Types of Constructors:
- **Default Constructor:** Takes no arguments and initializes members to default values.
  ```cpp
  class MyClass {
  public:
      MyClass() { // Default constructor
          // Initialization code
      }
  };
  ```
- **Parameterized Constructor:** Takes parameters to initialize the object with specific values.
  ```cpp
  class MyClass {
  public:
      int x;
      MyClass(int val) { // Parameterized constructor
          x = val;
      }
  };
  ```
- **Copy Constructor:** Initializes an object using another object of the same class.
  ```cpp
  class MyClass {
  public:
      int x;
      MyClass(const MyClass &obj) { // Copy constructor
          x = obj.x;
      }
  };
  ```

#### Constructor Initialization List:
An initialization list allows you to initialize class members directly before the constructor body is executed.
```cpp
class MyClass {
    int x, y;
public:
    MyClass(int a, int b) : x(a), y(b) { // Using initialization list
        // Further code
    }
};
```

**2. Destructors:**
A destructor is a special member function that is automatically invoked when an object goes out of scope or is explicitly deleted. Its main purpose is to release resources that the object may have acquired during its lifetime (e.g., memory, file handles).

#### Characteristics of Destructors:
- **Same name as the class but with a tilde (~) prefix:** The destructor's name is the class name prefixed with a `~`.
- **No parameters and no return type:** A destructor cannot have parameters or a return type.
- **One per class:** You cannot overload a destructor; there can be only one destructor in a class.
- **Automatic invocation:** It is called automatically when an object is destroyed.
- **Resource deallocation:** The destructor is typically used to free memory or other resources that were allocated by the object.

#### Example of Destructor:
```cpp
class MyClass {
public:
    MyClass() {
        // Constructor code
    }
    ~MyClass() { // Destructor
        // Cleanup code
    }
};
```

#### Important Notes:
- If you dynamically allocate memory (using `new`), you should use the destructor to free it (using `delete`).
- If an object contains other objects (as member variables), their destructors are called automatically in reverse order of their construction.

### Example: Constructor and Destructor in Action
```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    int* ptr;
    
    // Constructor
    MyClass(int val) {
        ptr = new int(val); // Dynamically allocate memory
        cout << "Constructor: Allocated memory with value " << *ptr << endl;
    }
    
    // Destructor
    ~MyClass() {
        delete ptr; // Free dynamically allocated memory
        cout << "Destructor: Freed memory" << endl;
    }
};

int main() {
    MyClass obj(10); // Constructor is called
    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
```

### Output:
```
Constructor: Allocated memory with value 10
Destructor: Freed memory
```

In this example:
- The constructor allocates memory and initializes it with a value.
- The destructor releases the allocated memory when the object `obj` goes out of scope.

Constructors and destructors are essential for managing object lifetimes and resources, especially in applications requiring dynamic memory management.

## Experiment 12 {A} : - Default Constructor
## Code: - 
 
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

## Output: - 

![image](https://github.com/user-attachments/assets/2557a053-abb6-4980-96a0-64dd304eedd5)


## Experimnet 12 {B} : - Parameterized Constructor

## Code:- 

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

## Output: - 

![image](https://github.com/user-attachments/assets/9d37c3cf-fe40-4e55-a091-88b0c5f50396)


## Experiment 12 {C} : - Copy Constructor

## Code : - 

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

## Output: - 

![image](https://github.com/user-attachments/assets/dae6a302-825d-4193-94b6-82be28a5fa3a)

## Experiment 12 {D}: - Default Arguments

## Code : - 

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

## Output: - 

![image](https://github.com/user-attachments/assets/4bb63150-1d92-4aee-a001-a60f5caa7da7)


## Experimnet 12{E}: - Area Calculation of Rectangle.

## Code: - 

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


## Output: - 


![image](https://github.com/user-attachments/assets/68fdf1b3-de57-43da-81b9-7ebbcc53e43c)


## Experiment 12 {F}: - Destructor.

## Code :- 

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

## Output: - 
![image](https://github.com/user-attachments/assets/95cc604c-d1aa-4d3e-95f0-7a9f6a311867)

### Conclusion:

Constructors and destructors in C++ are fundamental concepts for managing object initialization and cleanup. Constructors ensure that objects are properly initialized when created, while destructors handle the release of resources when objects are no longer needed. By using constructors, you can set default or specific values for object members, and with destructors, you prevent resource leaks, especially when dealing with dynamic memory. Understanding their roles is critical for writing robust and efficient C++ programs, ensuring smooth object lifecycle management.
