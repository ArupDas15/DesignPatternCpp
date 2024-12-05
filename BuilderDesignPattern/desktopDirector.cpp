#include "hpDesktopBuilder.hpp"
#include "dellDesktopBuilder.hpp"
#include "desktopDirector.hpp"

int main() {
    HPDesktopBuilder *hpDesktopBuilder = new HPDesktopBuilder();
    DellDesktopBuilder *dellDesktopBuilder = new DellDesktopBuilder();
    // The Client must associate one of the builder objects with the director.
    //We create 2 directors who will be given 2 different builders to create 2 different dektops.
    DesktopDirector* director1 = new DesktopDirector(hpDesktopBuilder);
    DesktopDirector* director2 = new DesktopDirector(dellDesktopBuilder);

    // Then the director uses that builder object for all further construction.
    Desktop* desktop1 = director1->BuildDesktop();
    Desktop* desktop2 = director2->BuildDesktop();

    desktop1->showSpecs();
    desktop2->showSpecs();
    
    return 0;
}