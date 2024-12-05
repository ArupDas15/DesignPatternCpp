#ifndef DESKTOPDIRECTOR
#define DESKTOPDIRECTOR

#include "desktopBuilder.hpp"

// The main responsibility of the director is to provide the list of steps to be followed by the builder to make the product.
class DesktopDirector {
    private:
        DesktopBuilder* desktopBuilder;
    public:
        DesktopDirector(DesktopBuilder* pdesktopBuilder) {
            desktopBuilder = pdesktopBuilder;
        }
        Desktop* getDesktop() {
            return desktopBuilder->getDesktop();
        }
        Desktop* BuildDesktop() {
            desktopBuilder->buildMonitor();
            desktopBuilder->buildKeyBoard();
            desktopBuilder->buildMouse();
            desktopBuilder->buildSpeaker();
            desktopBuilder->buildRam();
            desktopBuilder->buildProcessor();
            desktopBuilder->buildMotherBoard();
            return desktopBuilder->getDesktop();
        }
};

#endif // !DESKTOPDIRECTOR