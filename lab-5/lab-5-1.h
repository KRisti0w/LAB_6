#ifndef HEADER_HPP
#define HEADER_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>

struct Student
{
    std::string Name;
    std::string GroupId;
    std::vector<unsigned> Ratings;
    std::vector<std::string> Subjects;
};

struct Group
{
    std::string Id;
    std::vector<Student> Students;
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
size_t UnsatisfactoryAssessment(const std::vector<Student>& students) {
    return std::count_if(students.begin(), students.end(),
                         [](const Student& student) {
                             // Проверяем, есть ли хотя бы одна оценка меньше 3
                             return std::any_of(student.Ratings.begin(), student.Ratings.end(),
                                                [](unsigned rating) { return rating < 3; });
                         });
}

// Количество студентов, сдавших все экзамены на 5
size_t CountExcellent(const std::vector<Student>& students) {
    return std::count_if(students.begin(), students.end(),
                         [](const Student &student) {
                             // Если нет оценок - студент не считается отличником
                             if (student.Ratings.empty()) {
                                 return false;
                             }
                             // Все оценки должны быть равны 5
                             return std::all_of(student.Ratings.begin(), student.Ratings.end(),
                                                [](unsigned rating) { return rating == 5; });
                         });
}

// 5. Студенты с отличной оценкой по математике
    std::vector<Student> VectorMathExcellent(const std::vector<Student>& students) {
        std::vector<Student> result;

        for (const auto& student : students) {
            for (size_t i = 0; i < student.Subjects.size(); ++i) {
                if (student.Subjects[i] == "Math" && student.Ratings[i] == 5) {
                    result.push_back(student);
                    break;
                }
            }
        }

        return result;
    }

// Уникальные названия групп студентов
std::vector<std::string> GroupsId(const std::vector<Student>& students) {
    std::vector<std::string> result;

    for (const auto& student : students) {
        if (!student.GroupId.empty()) {
            // Проверяем, нет ли уже такой группы в результате
            if (std::find(result.begin(), result.end(), student.GroupId) == result.end()) {
                result.push_back(student.GroupId);
            }
        }
    }

    return result;
}

// Список групп с студентами
std::vector<Group> Groups(const std::vector<Student>& students) {
    std::map<std::string, Group> groups_map;

    // Группируем студентов по GroupId
    for (const auto& student : students) {
        if (!student.GroupId.empty()) {
            groups_map[student.GroupId].Id = student.GroupId;
            groups_map[student.GroupId].Students.push_back(student);
        }
    }

    // Преобразуем map в vector
    std::vector<Group> result;
    for (const auto& pair : groups_map) {
        result.push_back(pair.second);
    }

    return result;
}

#endif // HEADER_HPP