Video: https://www.youtube.com/watch?v=MrrrtQT_8SE&list=PLliXPok7ZonlZJuAN0hvUnf5ovFepjxU0&index=4

# When do we use Buider Design Creational Pattern
- Whenever we have a complex object and lot of configurations in it or we have to construct Composite trees (a structural desgin pattern) we use Builder Design Pattern. 
- Use the Builder pattern to get rid of a “long parameterised constructor”.
- Use the Builder pattern when you want your code to be able to create different representations of the product (for example, stone and wooden houses) and the product involves similar step but differ only in their impementation details.

This pattern organizes the object construction into a series of steps which are executed in the builder object. Instead of executing all the steps, you have the flexibility of calling only the necessary steps required to produce a partiular configuration of the object. The pattern allows you to create different builder classes which implements the same set of building steps in a different manner. It is the responsibility of the drector or sometimes the client which acts as a director to use the appropriate builder class object responsible for building and returning the product.

Builder Design Pattern has 4 parts:
1. Product: the omcplex object that we are going to create. In our example, ```desktop```.
2. builder: For every every product there will be corresponding builder which will instruct the concrete Builders what has to be built. The builder class is an abstract class containing pure virtual functions which are to be implemented by the conceteBuilder class. It will provide all the product construction steps common to all types of builders. In our example, ```class DesktopBuilder```.
3. Concrete Builder: It will implement the functions written in the interface builder class. In our example, ```DellDesktopBuilder``` and ```HPDesktopBuilder``` will be the concrete builder class. Since each dell desktop product or hp desktop product will have its own different method of constructing a keyboard, monitor, RAM, etc. it will implement the pure virtual functions derived from the builder class (base class) in its own way. Concrete builders may produce products that don’t follow the common interface.
4. Director: responsible for the product creation. Lists all the steps in the building process. It is the supervisor. 

```Director has access to builder. Builder has access to product. Director will use the builder and provide an order of steps to be executed by the builder for constructing the product. The builder will provide the implementation for all those steps.```

# How to execute the code and code output?

```g++ -o builder *.cpp```

```.\builder.exe```

OUTPUT:

-----------------------------------------------------
Monitor HP MonitorKeyboard HP KeyBoard
Mouse HP Mouse
Speaker HP Speaker
RAM HP RAM
Processor HP Processor
MotherBoard HP MotherBoard
-----------------------------------------------------
-----------------------------------------------------
Monitor Dell MonitorKeyboard Dell KeyBoard
Mouse Dell Mouse
Speaker Dell Speaker
RAM Dell RAM
Processor Dell Processor
MotherBoard Dell MotherBoard
----------------------------------------------------- 
