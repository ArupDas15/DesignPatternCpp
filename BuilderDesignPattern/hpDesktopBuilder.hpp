#ifndef HPDESKTOPBUILDER_H
#define HPDESKTOPBUILDER_H

#include "desktopBuilder.hpp"

// HPDesktopbuilder is one of the conrete builder class which will implement the pure virtual functions
// that we have defined in the DesktopBuilder class by inheriting the DesktopBuilder class.
class HPDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif // !HPDESKTOPBUILDER_H