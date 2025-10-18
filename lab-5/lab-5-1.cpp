#include "lab-5-1.h"
#include <iostream>
#include <iomanip>

int main() {
    std::vector<Student> students = {
            {"Ivan", "IU7-11", {5, 4, 5}, {"Math", "Angem", "Algorithmic languages"}},
            {"Kristina", "IU8-14", {5, 5, 5}, {"Math", "Angem", "Algorithmic languages"}},
            {"Anna", "MT1-22", {3, 4, 2}, {"Math", "Engineering graphics", "Physics"}},
            {"Maria", "RT5-13", {5, 4, 3}, {"Math", "Engineering graphics", "Physics"}}
    };
    SortByName(students);

    std::cout << "\nSortByName:" << std::endl;
    for (const auto& student : students) {
        std::cout << student.Name << std::endl;
    }

    SortByRating(students);

    std::cout << "\nSortByRating:" << std::endl;
    for (const auto& student : students) {
        double avg = 0.0;
        if (!student.Ratings.empty()) {
            double sum = std::accumulate(student.Ratings.begin(), student.Ratings.end(), 0.0);
            avg = sum / student.Ratings.size();
        }
        std::cout << std::fixed << std::setprecision(2);
        std::cout << student.Name << " - average: " << avg << std::endl;
    }
    return 0;
}