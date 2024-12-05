#include "vehicle_factory.hpp"

Vehicle* VehicleFactory::getVehicle(string vehicleType) {
    // The factory class will create the object and return it to the cliemt.
    Vehicle *vehicle;

    if (vehicleType == "car") {
        vehicle = new Car();
    } else if (vehicleType == "bike") {
        vehicle = new Bike();
    }
    
    return vehicle;
}