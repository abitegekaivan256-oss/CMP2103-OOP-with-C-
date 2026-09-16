#include <iostream>
using namespace std;

int main() {

    // Answer key for the 10 questions
    char key[10] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    // Answers of 8 students to the 10 questions
    char answers[8][10] = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 0
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'}, // Student 1
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'}, // Student 2
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'}, // Student 3
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 4
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 5
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 6
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}  // Student 7
    };

    // Compare each student's answers with the answer key
    for (int student = 0; student < 8; student++) {

        int correctAnswers = 0;

        for (int question = 0; question < 10; question++) {

            if (answers[student][question] == key[question]) {
                correctAnswers++;
            }
        }

        cout << "Student " << student
             << " got " << correctAnswers
             << " out of 10 correct." << endl;
    }

    return 0;
}