#include "hpDesktopBuilder.hpp"

// Thus, the motivation behind using a concreteBuilder is to actually provide the configuration of a particular product. 
void HPDesktopBuilder::buildMonitor() {
    desktop->setMonitor("HP Monitor");
}

void HPDesktopBuilder::buildKeyBoard() {
    desktop->setKeyBoard("HP KeyBoard");
}

void HPDesktopBuilder::buildMouse() {
    desktop->setMouse("HP Mouse");
}

void HPDesktopBuilder::buildSpeaker() {
    desktop->setSpeaker("HP Speaker");
}

void HPDesktopBuilder::buildRam() {
    desktop->setRam("HP RAM");
}

void HPDesktopBuilder::buildProcessor() {
    desktop->setProcessor("HP Processor");
}

void HPDesktopBuilder::buildMotherBoard() {
    desktop->setMotherBoard("HP MotherBoard");
}