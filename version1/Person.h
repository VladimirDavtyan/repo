// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

// Предварительные объявления классов
class Student;
class Professor;

// Интерфейс посетителя
class Visitor {
public:
    virtual void visit(Student& student) = 0;
    virtual void visit(Professor& professor) = 0;
    virtual ~Visitor() = default;
};

// Абстрактный класс Персона
class Person {
protected:
    std::string name;
public:
    Person(const std::string& name) : name(name) {}
    
    const std::string& getName() const { return name; }
    
    // Метод принятия посетителя
    virtual void accept(Visitor& visitor) = 0;
    
    virtual ~Person() = default;
};

// Класс Студент
class Student : public Person {
public:
    Student(const std::string& name) : Person(name) {}
    
    void accept(Visitor& visitor) override {
        visitor.visit(*this);
    }
};

// Класс Профессор
class Professor : public Person {
public:
    Professor(const std::string& name) : Person(name) {}
    
    void accept(Visitor& visitor) override {
        visitor.visit(*this);
    }
};

#endif // PERSON_H