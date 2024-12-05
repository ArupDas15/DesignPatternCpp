#include "dellDesktopBuilder.hpp"

// Thus, the motivation behind using a concreteBuilder is to actually provide the configuration of a particular product. 
void DellDesktopBuilder::buildMonitor() {
    desktop->setMonitor("Dell Monitor");
}

void DellDesktopBuilder::buildKeyBoard() {
    desktop->setKeyBoard("Dell KeyBoard");
}

void DellDesktopBuilder::buildMouse() {
    desktop->setMouse("Dell Mouse");
}

void DellDesktopBuilder::buildSpeaker() {
    desktop->setSpeaker("Dell Speaker");
}

void DellDesktopBuilder::buildRam() {
    desktop->setRam("Dell RAM");
}

void DellDesktopBuilder::buildProcessor() {
    desktop->setProcessor("Dell Processor");
}

void DellDesktopBuilder::buildMotherBoard() {
    desktop->setMotherBoard("Dell MotherBoard");
}