# Chained (Multilevel) Inheritance in C++
The example uses three classes:

- **Person** — base class containing a person's name and age.
- **Student** — inherits from `Person` and adds a registration number and university.
- **EngineeringStudent** — inherits from `Student` and adds a course and year of study.

## Expected Output
=== STUDENT INFORMATION ===
Name: Ivan
Age: 23
Registration Number: 25/U/0819
University: Makerere University
Course: Electrical engineering
Year of Study: 2

## Explanation

1. `Person` is the base class. It defines `name`, `age`, and `displayPerson()`.
2. `Student : public Person` inherits the public members of `Person` and adds `regNumber`, `university`, and `displayStudent()`.
3. `EngineeringStudent : public Student` inherits from `Student` and indirectly from `Person`. It adds `course`, `yearOfStudy`, and `displayEngineering()`.
4. The `student1` object is created from `EngineeringStudent` and uses members defined at all three levels of the inheritance chain.
5. The `public` inheritance mode preserves the public accessibility of inherited public members.

## Hand-Drawn Illustration Guide

For the assignment's hand-drawn illustration, draw three rectangular boxes vertically:

1. **Person** at the top, with `name`, `age`, and `displayPerson()`.
2. **Student** in the middle, with `regNumber`, `university`, and `displayStudent()`.
3. **EngineeringStudent** at the bottom, with `course`, `yearOfStudy`, and `displayEngineering()`.

Connect **Person → Student → EngineeringStudent** using downward arrows labeled **public inheritance**. Label `Person` as the base class, `Student` as the intermediate derived class, and `EngineeringStudent` as the final derived class.

## Advantages of Multilevel Inheritance

- **Code reusability:** Existing members can be reused in derived classes.
- **Reduced duplication:** Common functionality is written once in a base class.
- **Extensibility:** New specialized classes can be added to the inheritance chain.
- **Maintainability:** Shared behavior can be updated in its defining class.
- **Logical organization:** The class hierarchy represents an **is-a** relationship.


