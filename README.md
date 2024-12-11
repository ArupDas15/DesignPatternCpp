# DesignPatternCpp
This repository contains notes on Design Patterns Implementation using C++ based on Keerti Purswani's course.

# What is an API?
An API is a collection of rules and methods that define how software components interact. APIs have endpoints which are used by developers to interect with the system. An endpoint is a specific URL or path on the API that is exposed to the developers to interact with the system (make spacific request to the system).
E.g. A weather service API allows you to access weather data. It may provide an endpoint to fetch current weather data and another endpoint to fetch weather forecast. 

A developer can clearly define rules for every interaction through API's which helps to restrict access to the data members of an object.

# SOLID principles of object-oriented design (Low Level Design)
Video: https://www.youtube.com/watch?v=XI7zep97c-Y

**SOLID** stands for
- **S**ingle Responsibility Principle: A class or a function should do only one thing.
- **O**pen Closed Principle: Software entitites should be open for extension, but closed for modfication. The intent of this principle is to make minimal changes to existing code when adding functionality .i.e ***we do not want to do code changes in a well tested piece of code/class, instead we can extend the class and add additional features to it***.
- **L**iskov Substitution Principle: If Class B is a subtype of Class A, then we should be able to replace object of A with B without breaking the behaviour of the program. This is because, the subclass should extend the capability of the parent class and not narrow it down.
- **I**nterface Segmented Principle: Interfaces should be such that client should not implement unnecessary functions they do not need.
```
interface RestaurantEmployee {
    void washDishes();
    void serveCustomers();
    void cookFood();
}
class waiter implements RestaurantEmployee {
    public void washDishes() {
        // not the waiter's job
    }
    public void serveCustomers() {
        // this is the waiter's job
        System.out.println("serving the customer");
    }
    public void cookFood() {
        // not the waiter's job
    }
}
```
In the above scenario, client is has to implement methods washDishes() and cookFood() unnecessarily. Instead we can segment/devide the interface into smaller interfaces to avoid unnucessary implementation of methods that client does not need.
```
interface WaiterInterface() {
    void serveCustomers();
    void takeOrder();
}

interface ChefInterface() {
    void cookfood();
    void decideMenu();
}
```
Now the client has to implement only its desired interface.
```
class waiter implements WaiterInterface {
    public void serveCustomers() {
        System.out.println("serving the customer");
    }
    public void takeOrder() {
        System.out.println("taking customer order");
    }
}
```
- **D**ependency Inversion Principle: Class should depend on interfaces rather than concrete classes, .i.e, "***Any higher classes should always depend upon the abstraction of the class rather than the detail***".

E.g. Mouse \<\<interface\>\>
        |- WiredMouse (concrete class)
        |- BluetoothMouse (concrete class)
    Keyboard \<\<interface\>\>
        |- WiredKeyboard (concrete class)
        |- BluetoothKeyboard (concrete class)
```
    class MacBook {
        private final WiredKeyboard keyboard;
        private final WiredMouse mouse;
        // I have assigned concrete class objects via the constructor MacBook(). Now, I cannot make any changes to keyboard and mouse in future.
        // Now the Macbook can only have a WiredKeyboard and a WiredMouse.
        pubic MacBook() {
            keyboard = new WiredKeyboard();
            mouse = new WiredMouse();
        }
    }
```
Solution:
```
    class MacBook {
        
        private final Keyboard keyboard;
        private final Mouse mouse;
        // Now any type of keyboard or mouse can be assigned to keyboard and mouse without making MacBook explcitly aware of it.
        private MacBook(Keyboard keyboard, Mouse mouse) {
            this.keyboard = keyboard;
            this.mouse = mouse;
        }
    }
```

## Advantages of follwoing SOLID peinciples 
- Avoid duplicate code
- Easy to maintain
- Easy to understand
- Flexible software
- Reduces complexity

**Unit tests** are usually automated tests used to verfiy the coorectness of smallest testable units of any application such as a function, method or a class. 
It helps developers to ***refactor code much easily*** without introducing new bugs becuase they can rely on the unit test result to catch those errors. 
Units tests support ***test driven development*** ( write tests first, then write just enough code to pass the test, ensuring code meets
 required behavior from the start) ***continuous development*** and ***continuous integration***.

 One of the drawbacks of unit testing is that as the code changes significantly, the unit tests will also change because the flow of the code/ algorithm changes. 
 E.g. JUniy is an open source testing framework for JAVA.

 Behavior-driven testing (BDT) is a testing method in which the testing scenarios are based on user behavior.

 The code we write should be extensible, readable and correct.

 ***Data Access Object(DAO) Design Pattern*** is used to separate the data access logic (e.g., SQL queries or API calls (e.g. CRUD operations) for interacting with a data source, such as a database, web service, or file system) from the business logic of an application. 