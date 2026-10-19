# Polymorphism in C++
## Real-world example: Animal sounds
A general `Animal` can make a sound, but different animals make different sounds. `Dog` and `Cat` are derived from `Animal` and each provides its own implementation of `sound()`.

## Hand-drawn-style class illustration

on the file provided

## How the program works
1. **Parent class:** `Animal` defines a `virtual` member function called `sound()`.
2. **Derived classes:** `Dog` and `Cat` publicly inherit from `Animal`.
3. **Overriding:** Each derived class provides a different implementation of `sound()` using `override`.
4. **Base-class pointer:** `Animal* animalPtr` can point to either derived-class object.
5. **Runtime dispatch:** Calling `animalPtr->sound()` invokes `Dog::sound()` when pointing to `dog`, and `Cat::sound()` when pointing to `cat`.
6. **Virtual destructor:** `Animal` has a virtual destructor, which is good practice for a polymorphic base class.

the code is provided and here is the expected 
## Expected output
Using the same base-class pointer and function call:
Dog barks
Cat meows

## Requirements checklist
- [x] Parent class with a virtual member function.
- [x] Two derived classes overriding that function.
- [x] Runtime polymorphism using a base-class pointer.
- [x] Objects showing different behaviors for the same function call.
- [x] An explanatory hand-drawn-style inheritance diagram.


