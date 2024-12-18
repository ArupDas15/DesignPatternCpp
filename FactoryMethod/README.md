Video: https://www.youtube.com/watch?v=tv54FY48Vio&list=PLliXPok7ZonlZJuAN0hvUnf5ovFepjxU0&index=3

Factory Method: It is a creational design pattern that provides an interface in the superclass, whose implementation is provided in the subclasses that inherit from the base class. The subclasses define the implementation and the type of object that will be created. The lirabry/framework (factory) will be responsible to create the object type based on the client input and return it to the client. The client does not have to worry about how the objects are getting created. Basically, the CLIENT should **use** the FACTORY to **create** the PRODUCT. This helps in *decoupling* the creation logic from the usage logic. If tomorrow, a new product needs to be created then we need to change only the creation logic, we do not havet o disturb the client and the client will keep running smoothly.

- Use the factory method when you don’t know the exact types beforehand. Therefore, it’s easier to extend the product construction code independently from the rest of the code.
- Use the Factory Method when you want to provide users of your library or framework with a way to extend its internal components.
- Use the Factory Method when you want to save system resources by reusing existing objects instead of rebuilding them each time.

The client knows that all vehicle objects are supposed to have the createVehicle() method, but exactly how it works isn’t important to the client.

![image](https://github.com/user-attachments/assets/fc3b6feb-c860-45e9-9f49-463df5bc8ecc)

Image Source: https://refactoring.guru/design-patterns/factory-method

# How do I run the code and code output?
```g++ -c car.cpp bike.cpp```

g++ -c file_name is used to only compile and assemble the file_name and not link the object code to produce executable file.

```ar ru vehicle_library.a vehicle_factory.o car.o bike.o```

ar is a command-line tool used to create, modify, and extract from static libraries. A static library is a collection of object files that are linked into programs at compile time, rather than at runtime (which would be dynamic libraries).
r: This option tells ar to replace or add the specified object files (car.o, bike.o) into the library
u: This option tells ar to update the library with object files that are newer than the ones already in the library. It ensures that only newer object files are added or replaced.
By running this command we are creating a static library named vehicle_library.a containing the object files vehicle_factory.o car.o bike.o.
We can now link a program to this library containing these object files instead of including the object files separately by the below command.

```g++ -o smartClient smart_client.cpp vehicle_library.a```
Here we created an output object file smartClient.obj (in windows) or smartClient.o (in Unix) 

After compiling client.cpp, the linker will take the resulting object file and link it with the static library vehicle_library.a.
The linker will resolve any references in client.cpp to functions or classes that are defined in the static library (vehicle_library.a).
If the vehicle_library.a contains functions or object code that client.cpp depends on, the linker will include them in the final executable (client).

**OUTPUT**
```
DesignPatternCpp\FactoryMethod> .\smartClient
car (Input car)
Creating Car
DesignPatternCpp\FactoryMethod> .\smartClient
bike (Input bike)
Creating Bike
```
