//
// Created by Nikita Tryaskin on 26.03.2023.
//

#pragma once
#import "Magazine.h"

class magazineSlot {
public:
    magazineSlot(const std::string& idname, const int slotSize);
    ~magazineSlot();

    std::string getSlotID();
    int getSlotSize();
    int getMagazinesInside();
    Magazine *getMagazine();

    void addMagazine(Magazine* magazine);
    void removeMagazine();
    void showMagazines() const;

private:
    std::string idname_;
    int slotSize_ = 0;
    int magazinesInside_ = 0;
    Magazine** magazineArray_{ nullptr };
};