//
// Created by Nikita Tryaskin on 26.03.2023.
//

#include "magazineSlot.h"
#include <iostream>

magazineSlot::magazineSlot(const std::string& idname, const int slotSize) {
    idname_ = idname;
    slotSize_ = slotSize;
    magazinesInside_ = 0;
    magazineArray_ = new Magazine*[slotSize_];
    for (size_t i = 0; i < slotSize_; ++i)
    {
        magazineArray_[i] = nullptr;
    }
}

magazineSlot::~magazineSlot() {
    delete[] magazineArray_;
}

std::string magazineSlot::getSlotID() {
    return idname_;
}

int magazineSlot::getSlotSize() {
    return slotSize_;
}

int magazineSlot::getMagazinesInside() {
    return magazinesInside_;
}

void magazineSlot::addMagazine(Magazine* magazine) {
    if (magazinesInside_ < slotSize_) {
        magazineArray_[magazinesInside_] = magazine;
        ++magazinesInside_;
        std::cout << "Adding magazine \"" << magazine->getName() << "\" to the slot" << std::endl;
    }
    else {
        std::cout << "\t##### Warning! #####" << std::endl;
        std::cout << "\tCan't add magazine: " << magazine->getName() << std::endl;
        std::cout << "\tSlot is full" << std::endl;
    }
}

void magazineSlot::showMagazines() const
{
    for (size_t i = 0; i < magazinesInside_; ++i)
    {
        std::cout << magazineArray_[i]->getName() << "at location " << i + 1 << std::endl;
    }
}

void magazineSlot::removeMagazine() {
    if (magazinesInside_ > 0) {
        --magazinesInside_;
        std::cout << "Removing magazine \"" << magazineArray_[magazinesInside_]->getName() << "\" from the slot" << std::endl;
    }
    else {
        std::cout << "\t##### Warning! #####" << std::endl;
        std::cout << "\tSlot is empty" << std::endl;
    }
}