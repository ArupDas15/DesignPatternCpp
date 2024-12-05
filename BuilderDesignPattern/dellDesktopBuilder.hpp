#ifndef DELLDESKTOPBUILDER_H
#define DELLDESKTOPBUILDER_H

#include "desktopBuilder.hpp"

// DellDesktopbuilder is one of the conrete builder class which will implement the pure virtual functions
// that we have defined in the DesktopBuilder class by inheriting the DesktopBuilder class.
class DellDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif // !DELLDESKTOPBUILDER_H