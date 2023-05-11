//
// Created by Nikita Tryaskin on 26.03.2023.
//

#pragma once
#include <string>

class Magazine {
public:
    Magazine();
    Magazine(const std::string& name, const std::string& skill, const int point);
    ~Magazine();

    //Setters
    void setName(std::string name);
    void setSkill(std::string skill);
    void setPoint(int point);

    //Getters
    std::string getName() const;
    std::string getSkill() const;
    int getPoint() const;

    void displayMInfo(); //display magazine info

private:
    std::string name_;
    std::string skill_;
    int point_;
};