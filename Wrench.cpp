//
// Created by jake on 12/3/2024.
//

#include "Wrench.h"

Wrench::Wrench() {
    length = 6;
    size = 0.5;
    material = "Steel";

    isMonkeyWrench = false;
}

Wrench::Wrench(bool isMonkeyWrench) {
    length = 6;
    size = 0.5;
    material = "Steel";

    this->isMonkeyWrench = isMonkeyWrench;
}

std::string Wrench::to_string() {
    return "This is wrench";
}

void Wrench::adjustSize(double size) {
    this->size = isMonkeyWrench ? size : this->size;
}

bool Wrench::canWrench(double nutSize) {
    return size == nutSize;
}

double Wrench::MechanicalAdvantage() {
    return length / size;
}

Wrench::Wrench(double length, double size, std::string material) {
    this->length = length;
    this->size = size;
    this->material = material;
    isMonkeyWrench = false;
}

Wrench::Wrench(double length, double size, std::string material, bool isMonkeyWrench) {
    this->length = length;
    this->size = size;
    this->material = material;
    this->isMonkeyWrench = isMonkeyWrench;
}
