#include <iostream>
#include "Magazine.h"
#include "magazineSlot.h"
#include "vendingMachine.h"

int main() {
    Magazine *mag01Ptr = new Magazine("Big Book of Science", "Science", 3);
    Magazine *mag02Ptr = new Magazine("Cat's Paw issue no.5", "Energy Weapons", 15);
    Magazine *mag03Ptr = new Magazine("Chinese Army: Special Ops Training Manual", "Sneak", 15);
    Magazine *mag04Ptr = new Magazine("D.C. Journal of Internal Medicine", "Medicine", 15);
    Magazine *mag05Ptr = new Magazine("Dean's Electronics", "Repair", 15);
    Magazine *mag06Ptr = new Magazine("Duck and Cover!", "Explosives", 15);
    Magazine *mag07Ptr = new Magazine("First Aid Book", "First Aid", 15);
    Magazine *mag08Ptr = new Magazine("Grognak the Barbarian", "Melee Weapons", 15);
    Magazine *mag09Ptr = new Magazine("Guns and Bullets", "Small Guns, Guns", 15);
    Magazine *mag10Ptr = new Magazine("Lying, Congressional Style", "Speech", 15);
    Magazine *mag11Ptr = new Magazine("Maddock's Tricks & Traps", "Traps", 15);
    Magazine *mag12Ptr = new Magazine("Motivational Secrets of the Stars", "Speech", 15);
    Magazine *mag13Ptr = new Magazine("Nikola Tesla and You", "Energy Weapons", 15);
    Magazine *mag14Ptr = new Magazine("Paradise Lost", "Speech", 15);
    Magazine *mag15Ptr = new Magazine("Pugilism Illustrated", "Unarmed", 15);
    Magazine *mag16Ptr = new Magazine("Scout Handbook", "Outdoorsman", 15);
    Magazine *mag17Ptr = new Magazine("Tales of a Junktown Jerky Vendor", "Barter", 15);
    Magazine *mag18Ptr = new Magazine("Tumblers Today", "Lockpick", 15);
    Magazine *mag19Ptr = new Magazine("U.S. Army: 30 Handy Flamethrower Recipes", "Big Guns", 15);
    Magazine *mag20Ptr = new Magazine("Wasteland Survival Guide", "Survival", 15);

    magazineSlot *slot01Ptr = new magazineSlot("id01", 3);
    magazineSlot *slot02Ptr = new magazineSlot("id02", 2);
    magazineSlot *slot03Ptr = new magazineSlot("id03", 3);
    magazineSlot *slot04Ptr = new magazineSlot("id04", 2);

    //mag01Ptr->displayMInfo();
    std::cout << "Slot \"" <<  slot01Ptr->getSlotID() << "\" size is: " << slot01Ptr->getSlotSize() << std::endl;

    slot01Ptr->addMagazine(mag01Ptr);
    std::cout << "there is(are) " << slot01Ptr->getMagazinesInside() << " magazine(s) inside slot" << std::endl;
    slot01Ptr->addMagazine(mag02Ptr);
    slot01Ptr->addMagazine(mag03Ptr);
    slot01Ptr->addMagazine(mag04Ptr);
    std::cout << "there is(are) " << slot01Ptr->getMagazinesInside() << " magazine(s) inside slot" << std::endl;

//    Magazine *magazinesArray = slot01Ptr->getMagazine();
//    for (int i = 0; i < slot01Ptr->getSlotSize(); i++) {
//        std::cout << magazinesArray[i].getName() << std::endl;
//    }
//    std::cout << std::endl;

    slot01Ptr->removeMagazine();
    slot01Ptr->removeMagazine();
    slot01Ptr->removeMagazine();
    std::cout << "there is(are) " << slot01Ptr->getMagazinesInside() << " magazine(s) inside slot" << std::endl;
    slot01Ptr->removeMagazine();
    std::cout << "there is(are) " << slot01Ptr->getMagazinesInside() << " magazine(s) inside slot" << std::endl;

    slot01Ptr->addMagazine(mag01Ptr);
    slot01Ptr->addMagazine(mag02Ptr);
    slot01Ptr->addMagazine(mag03Ptr);
    slot01Ptr->addMagazine(mag04Ptr);
    slot01Ptr->addMagazine(mag05Ptr);
    slot01Ptr->addMagazine(mag06Ptr);
    slot01Ptr->addMagazine(mag07Ptr);

    slot02Ptr->addMagazine(mag08Ptr);
    slot02Ptr->addMagazine(mag09Ptr);
    slot02Ptr->addMagazine(mag10Ptr);
    slot02Ptr->addMagazine(mag11Ptr);
    slot02Ptr->addMagazine(mag12Ptr);
    slot02Ptr->addMagazine(mag13Ptr);
    slot02Ptr->addMagazine(mag14Ptr);

    vendingMachine *machine = new vendingMachine(4);
    std::cout << "there is(are) " << machine->getEmptySlotsCount() << " empty slot(s) in the machine" << std::endl;
    machine->addSlot(slot01Ptr);
    machine->addSlot(slot02Ptr);
    //machine->getEmptySlotsCount();
    std::cout << "there is(are) " << machine->getEmptySlotsCount() << " empty slot(s) in the machine" << std::endl;

    machine->removeSlot();
    std::cout << "there is(are) " << machine->getEmptySlotsCount() << " empty slot(s) in the machine" << std::endl;


    delete mag01Ptr;
    delete mag02Ptr;
    delete mag03Ptr;
    delete mag04Ptr;
    delete mag05Ptr;
    delete mag06Ptr;
    delete mag07Ptr;
    delete mag08Ptr;
    delete mag09Ptr;
    delete mag10Ptr;
    delete mag11Ptr;
    delete mag12Ptr;
    delete mag13Ptr;
    delete mag14Ptr;
    delete mag15Ptr;
    delete mag16Ptr;
    delete mag17Ptr;
    delete mag18Ptr;
    delete mag19Ptr;
    delete mag20Ptr;

    delete slot01Ptr;
    delete slot02Ptr;
    delete slot03Ptr;
    delete slot04Ptr;

    delete machine;

    return 0;
}
