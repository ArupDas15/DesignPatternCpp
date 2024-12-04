Video: https://www.youtube.com/watch?v=oeQWxhlnCHM&list=PLliXPok7ZonlZJuAN0hvUnf5ovFepjxU0&index=3

**Singleton Pattern**: Create only a single instance of the class and provide a global point of access to that instance. It is used when you neeed to control access to a shared resource. 

# When do you need a Singleton Creational Design Pattern?
Suppose you want only one instance of the Database connection to be used by all the modules of the project or there should be only one instance of the configuration manager which is able to make changes to a configuration that will be accessible by all the modules of the project, or there is an instance of a process (such as logger) which needs to be alive till the lifetime of the program execution (where all the logs go to one particular log file). 

# How to implement a Singleton Creational Design Pattern?
1. By making the constructor private you are restricting the user from accessing the contructor directly using the *new operator*.
2. The Singleton class will provide a static function which will create and return a pointer to a new **private static** instance if no instance exists or return the pointer to an already existing instance. The user has to make use of this static function in order to create or get an instance of the singleton onject.

However, we need to ensure that the Singleton class implementation is thread-safe, i.e., if two threads are checking whether an instance is created or not, then, two instances can get created. Thus, we make use of a mutex lock to protect the critical section of the static function which creates the new instance to make sure that more than one instance of the singleton class object does not get created. We set the ```mutex.lock()``` and begin the singleton instance initialisation and only after the implementation is complete we release the lock ```mutex.unlock()```.  

Acquring and releasing locks are expensive bacause (of system call, context switch and synchronization overhead)
- when a thread attempts to acquire a mutex lock, it performs a system call to request the lock from the operating system. This is a costly operation bacause it involves interacting with the OS kernel. 
- If the mutex is already locked by another thread, the calling thread will get blocked and will remain in a waiting state in the scheduling process. The OS will suspend the execution of the blocked thread (this is where **context switch** will happen) and scheduled another ready-to-run thread (i.e., threads that are not blocked) to use the CPU.
- Further, mutexes use atomic operations which add a synchronization overhead.  

To minimize the overhead of acquiring a lock when accessing the Singleton instance we use ```Double-checked Locking``` which ensures that the lock is only acquired once, and subsequent calls to the static function do not require locking if the instance is already created. This improves the performance.

THe last thing, we need to ensure/ enforce is that users are not able to create a copy of the single object using the copy constructor neither are they able to assign singleton objects using the ```=``` copy assingment operator so that shallow copy or deep copy of data members cannot take place.


*Singleton Pattern violates the Single Responsibility Principle* which states that a class should have only one reason to change (i.e., it should have only one responsibility) because the singleton pattern has two responsibilities — managing instance creation and offering global access. This creates a dual responsibility for the Singleton class. As a result, the class ends up doing more than one thing, which goes against SRP.

# To run the code:
``` g++ -o singleton *.cpp```
```.\singleton```