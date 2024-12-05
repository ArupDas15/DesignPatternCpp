Video: https://www.youtube.com/watch?v=MrrrtQT_8SE&list=PLliXPok7ZonlZJuAN0hvUnf5ovFepjxU0&index=4

# When do we use Builder Design Creational Pattern
- Whenever we have a complex object and lot of configurations in it or we have to construct Composite trees (a structural desgin pattern) we use Builder Design Pattern. 
- Use the Builder pattern to get rid of a “long parameterised constructor”.
- Use the Builder pattern when you want your code to be able to create different representations of the product (for example, stone and wooden houses) and the product involves similar steps but differs only in their implementation details.

# Introduction
This pattern organizes the object construction into a series of steps which are executed in the builder object. Instead of executing all the steps, you have the flexibility of calling only the necessary steps required to produce a particular configuration of the object. The pattern allows you to create different builder classes which implement the same set of building steps in a different manner. It is the responsibility of the director or sometimes the client, who acts as a director, to use the appropriate builder class object responsible for building and returning the product.

The Builder Design Pattern has 4 parts:
1. **Product**: The complex object that we are going to create. In our example, ```desktop```.
2. **builder**: For every product, there will be a corresponding builder who will instruct the concrete Builders on what has to be built. The builder class is an abstract class containing pure virtual functions, which are to be implemented by the conceteBuilder class. It will provide all the product construction steps common to all types of builders. In our example, ```class DesktopBuilder```.
3. **Concrete Builder**: It will implement the functions written in the interface builder class. In our example, ```DellDesktopBuilder``` and ```HPDesktopBuilder``` will be the concrete builder class. Since each Dell desktop product or HP desktop product will have its own different method of constructing a keyboard, monitor, RAM, etc., it will implement the pure virtual functions derived from the builder class (base class) in its own way. Concrete builders may produce products that don’t follow the common interface.
4. **Director**: Responsible for the product creation. Lists all the steps in the building process. It is the supervisor. 

The director has access to the builder. Builder has access to the product. The director will use the builder and provide an order of steps to be executed by the builder for constructing the product. The builder will provide the implementation for all those steps.```

![image](https://github.com/user-attachments/assets/c1aef1ad-46a2-4175-ba39-a6477057b928)
Source: https://refactoring.guru/design-patterns/builder
# How do you execute the code and code output?

```g++ -o builder *.cpp```

```.\builder.exe```

**OUTPUT**:
```
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
```
