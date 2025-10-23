#include "lab-5-1.h"
#include <iostream>
#include <iomanip>

int main() {
    std::vector<Student> students = {
            {"Ivan",     "IU7-11", {5, 4, 5}, {"Math", "Angem","Algorithmic languages"}},
            {"Kristina", "IU8-14", {5, 5, 5}, {"Math", "Angem","Algorithmic languages"}},
            {"Anna",     "MT1-22", {3, 4, 2}, {"Math", "Engineering graphics", "Physics"}},
            {"Maria",    "RT5-13", {5, 4, 3}, {"Math", "Engineering graphics", "Physics"}}
    };
    SortByName(students);

    std::cout << "\nSortByName:" << std::endl;
    for (const auto &student: students) {
        std::cout << student.Name << std::endl;
    }


    SortByRating(students);

    std::cout << "\nSortByRating:" << std::endl;
    for (const auto &student: students) {
        double avg = 0.0;
        if (!student.Ratings.empty()) {
            double sum = std::accumulate(student.Ratings.begin(), student.Ratings.end(), 0.0);
            avg = sum / student.Ratings.size();
        }
        std::cout << std::fixed << std::setprecision(2);
        std::cout << student.Name << " - average: " << avg << std::endl;
    }


    std::cout << "\nUnsatisfactoryAssessment:" << std::endl;
    for (const auto &student: students) {
        std::cout << student.Name << ": ";
        for (size_t i = 0; i < student.Ratings.size(); ++i) {
            std::cout << student.Subjects[i] << "=" << student.Ratings[i];
            if (student.Ratings[i] < 3) {
                std::cout << "(neud)";
            }
            if (i < student.Ratings.size() - 1) std::cout << ", ";
        }
        std::cout << std::endl;
    }

    size_t result = UnsatisfactoryAssessment(students);
    std::cout << "\nNumber of students with unsatisfactory grades: " << result << std::endl;



    std::cout << "CountExcellent" << std::endl;
    for (const auto& student : students) {
        std::cout << student.Name << ": ";
        if (student.Ratings.empty()) {
            std::cout << "Noratings";
        } else {
            for (size_t i = 0; i < student.Ratings.size(); ++i) {
                std::cout << student.Subjects[i] << "=" << student.Ratings[i];
                if (i < student.Ratings.size() - 1) std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    size_t result1 = CountExcellent(students);
    std::cout << "\nNumber of excellent students: " << result1 << std::endl;



    std::vector<Student> math_excellent = VectorMathExcellent(students);
    std::cout << "\nStudents with excellent grades in MATH:" << std::endl;
    for (const auto& student : math_excellent) {
        std::cout << student.Name << " (" << student.GroupId << "): ";
        for (size_t i = 0; i < student.Ratings.size(); ++i) {
            std::cout << student.Subjects[i] << "=" << student.Ratings[i];
            if (i < student.Ratings.size() - 1) std::cout << ", ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nTotal honors in math: " << math_excellent.size() << std::endl;



    std::vector<std::string> unique_groups = GroupsId(students);
    std::cout << "GroupsId:" << std::endl;
    for (const auto& group : unique_groups) {
        std::cout << group << std::endl;
    }


    std::vector<Group> groups = Groups(students);
    std::cout << "List of groups:" << std::endl;
    for (const auto& group : groups) {
        std::cout << "Groups " << group.Id << " (" << group.Students.size() << " students):" << std::endl;
        for (const auto& student : group.Students) {
            std::cout << "  - " << student.Name << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "All groups: " << groups.size() << std::endl;

    return 0;
}
