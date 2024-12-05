#ifndef DESKTOPBUILDER_H
#define DESKTOPBUILDER_H

#include "desktop.hpp"

class DesktopBuilder {
    protected:
        Desktop* desktop;
    public:
        DesktopBuilder() {
            // new operator returns a pointer to the newly allocated Desktop object.
            desktop = new Desktop();
        }
        virtual void buildMonitor() = 0;
        virtual void buildKeyBoard() = 0;
        virtual void buildMouse() = 0;
        virtual void buildSpeaker() = 0;
        virtual void buildRam() = 0;
        virtual void buildProcessor() = 0;
        virtual void buildMotherBoard() = 0;
        // by getDesktop() as a virtual function we can now choose to override it in the concretebuilder class based on our requirement.
        // Note: If the return types were different based on the concrete builder class then the getter() function should have to be 
        // written exclusively within the concrete class itself.
        virtual Desktop* getDesktop() {
            return desktop;
        }
};

#endif // !DESKTOPBUILDER_H
