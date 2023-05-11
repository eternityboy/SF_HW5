//
// Created by Nikita Tryaskin on 26.03.2023.
//

#include "vendingMachine.h"
#include <iostream>

vendingMachine::vendingMachine(int machineSize) {
    machineSize_ = machineSize;
    slotsArray_ = new magazineSlot*[machineSize_];
    for (size_t i = 0; i < machineSize_; ++i)
    {
        slotsArray_[i] = nullptr;
    }
}

vendingMachine::~vendingMachine() {
    delete[] slotsArray_;
}

int vendingMachine::getVmSize() const {
    return machineSize_;
}

int vendingMachine::getEmptySlotsCount() const
{
    return machineSize_ - slotsInside_;
}

void vendingMachine::addSlot(magazineSlot *slot)
{
    if (slotsInside_ < machineSize_) {
        slotsArray_[slotsInside_] = slot;
        --emptySlotsCount_;
        ++slotsInside_;
        std::cout << "Adding slot \"" << slot->getSlotID() << "\" to the vending machine" << std::endl;
    }
    else {
        std::cout << "\t##### Warning! #####" << std::endl;
        std::cout << "\tCan't add slot: " << slot->getSlotID() << std::endl;
        std::cout << "\tVending Machine is full" << std::endl;
    }
}

void vendingMachine::removeSlot() {
    if (slotsInside_ > 0) {
        --slotsInside_;
        std::cout << "Removing slot \"" << slotsArray_[slotsInside_]->getSlotID() << "\" from the Vending Machine" << std::endl;
    }
    else {
        std::cout << "\t##### Warning! #####" << std::endl;
        std::cout << "\tVending Machine is empty" << std::endl;
    }
}