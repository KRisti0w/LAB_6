#ifndef HEADER_HPP
#define HEADER_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

struct Student
{
    std::string Name;
    std::string GroupId;
    std::vector<unsigned> Ratings;
    std::vector<std::string> Subjects;
};

// Сортировка студентов по именам в алфавитном порядке
void SortByName(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(),
              [](const Student& a, const Student& b) {
                  return a.Name < b.Name;
              });
}

// Сортировка студентов по средней оценке (по убыванию)
void SortByRating(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(),
              [](const Student& a, const Student& b) {
                  // Вычисляем среднюю оценку для студента A
                  double avg_a = 0.0;
                  if (!a.Ratings.empty()) {
                      double sum_a = std::accumulate(a.Ratings.begin(), a.Ratings.end(), 0.0);
                      avg_a = sum_a / a.Ratings.size();
                  }

                  // Вычисляем среднюю оценку для студента B
                  double avg_b = 0.0;
                  if (!b.Ratings.empty()) {
                      double sum_b = std::accumulate(b.Ratings.begin(), b.Ratings.end(), 0.0);
                      avg_b = sum_b / b.Ratings.size();
                  }

                  return avg_a > avg_b; // Сортировка по убыванию средней оценки
              });
}

// Количество студентов с неудовлетворительной оценкой хотя бы по одному предмету
size_t CountTwoness(const std::vector<Student>& students) {
    return std::count_if(students.begin(), students.end(),
                         [](const Student& student) {
                             // Проверяем, есть ли хотя бы одна оценка меньше 3
                             return std::any_of(student.Ratings.begin(), student.Ratings.end(),
                                                [](unsigned rating) { return rating < 3; });
                         });
}

#endif // HEADER_HPP