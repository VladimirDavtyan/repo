// Visitor.h
#ifndef VISITOR_H
#define VISITOR_H

#include "Person.h"
#include <iostream>

// Посетитель Сессия
class ExamSession : public Visitor {
public:
    void visit(Student& student) override {
        std::cout << student.getName() << " сдает экзамены во время сессии." << std::endl;
    }
    
    void visit(Professor& professor) override {
        std::cout << professor.getName() << " принимает экзамены во время сессии." << std::endl;
    }
};

// Посетитель Каникулы
class Vacation : public Visitor {
public:
    void visit(Student& student) override {
        std::cout << student.getName() << " отдыхает во время каникул." << std::endl;
    }
    
    void visit(Professor& professor) override {
        std::cout << professor.getName() << " уходит в отпуск во время каникул." << std::endl;
    }
};

#endif // VISITOR_H