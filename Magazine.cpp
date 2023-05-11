//
// Created by Nikita Tryaskin on 26.03.2023.
//

#include "Magazine.h"
#include <iostream>

Magazine::Magazine() {
    name_ = "Empty";
    skill_ = "Empty";
    point_ = 0;
}

Magazine::Magazine(const std::string& name, const std::string& skill, const int point) {
    name_ = name;
    skill_ = skill;
    point_ = point;
}

Magazine::~Magazine() {
}

void Magazine::displayMInfo() {
    std::cout << "######################" << std::endl;
    std::cout <<  name_ << std::endl;
    std::cout << "Skill: " << skill_ << std::endl;
    std::cout << "SkillPoints: " << point_ << std::endl;
}

// Setters
void Magazine::setName(std::string value)
{
    name_ = value;
}
void Magazine::setSkill(std::string value)
{
    skill_ = value;
}
void Magazine::setPoint(int value)
{
    point_ = value;
}

//Getters
std::string Magazine::getName() const
{
    return name_;
}
std::string Magazine::getSkill() const
{
    return skill_;
}
int Magazine::getPoint() const
{
    return point_;
}