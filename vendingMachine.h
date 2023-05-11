//
// Created by Nikita Tryaskin on 26.03.2023.
//

#pragma once
#include "magazineSlot.h"

class vendingMachine
{
public:
    vendingMachine(int machineSize);
    ~vendingMachine();

    int getVmSize() const;
    int getEmptySlotsCount() const;

    void addSlot(magazineSlot *slot);
    void removeSlot();

private:
    int machineSize_ = 0;
    int slotsInside_ = 0;
    int emptySlotsCount_ = 0;
    magazineSlot** slotsArray_{ nullptr };
};