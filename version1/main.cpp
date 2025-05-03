// main.cpp
#include "Person.h"
#include "Visitor.h"
#include <vector>

int main() {
    // Создаем людей
    Student student("Иванов");
    Professor professor("Проф. Петров");
    
    // Создаем посетителей
    ExamSession examSession;
    Vacation vacation;
    
    // Создаем коллекцию людей
    std::vector<Person*> people = {&student, &professor};
    
    // Демонстрация Сессии
    std::cout << "=== СЕССИЯ ===" << std::endl;
    for (auto person : people) {
        person->accept(examSession);
    }
    
    // Демонстрация Каникул
    std::cout << "\n=== КАНИКУЛЫ ===" << std::endl;
    for (auto person : people) {
        person->accept(vacation);
    }
    
    return 0;
}