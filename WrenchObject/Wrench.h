//
// Created by jake on 12/3/2024.
//

#ifndef CSC_222_WRENCH_H
#define CSC_222_WRENCH_H

#include <string>

class Wrench {
    public:
        Wrench();

        Wrench(bool isMonkeyWrench);

        Wrench(double length, double size, std::string material);

        Wrench(double length, double size, std::string material, bool isMonkeyWrench);

    std::string to_string();

        double length;
        double size;

        std::string material;

        bool isMonkeyWrench;

        void adjustSize(double size);

        bool canWrench(double nutSize);

        double MechanicalAdvantage();
};


#endif //CSC_222_WRENCH_H
