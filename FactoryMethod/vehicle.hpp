#ifndef vehicle_hpp
#define vehicle_hpp

class Vehicle {
    // vehicle is an abstract class becuase it contains a pure virtual function.
    public: virtual void createVehicle() = 0;
};

#endif