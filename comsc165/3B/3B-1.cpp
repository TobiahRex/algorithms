#include <iostream>
#include <iomanip>
using namespace std;

void GetStudentGrade(char []);
void CheckAnswers(char [], char [], int [], int &, int &);

int main() {
  char answers[20] = { 'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B' };
  char student_answers[20];
  string student_names[100];
  int incorrect_Qs[20];
  int correct{};
  int incorrect{};

  cout << "How many student took the exam? ";
  int student_count{};
  cin >> student_count;

  for (int i = 0; i < student_count; i++) {
    cout << "Enter Name for Student # " << i + 1 << " : ";
    cin >> student_names[i];

    GetStudentGrade(student_answers);
    CheckAnswers(student_answers, answers, incorrect_Qs, correct, incorrect);

    cout << student_names[i];
    if (correct > 14) {
      cout << " : PASSED" << endl;
    } else {
      cout << " : FAILED" << endl;
    }

    cout << "# Correct: " << correct << endl
    << "# Incorrect: " << incorrect << endl
    << "Incorrect Qs: ";

    for (int j = 0; j < 20; j++) {
      if (student_answers[j] != answer[j]) {
        cout << j + 1 << ", ";
      }
    }
  }

  cout << "Total Students = " << student_count << endl << "Student Names: ";

  for (i = 0; i < student_names; i++) cout << student_names[i] << ", ";
  cout << endl;

  return 0;
}

void GetStudentGrade(char student_answers[]) {
  string lineBreak(10, '_');
  cout << lineBreak << "-- Enter student answers --" << endl;

  for (int i = 0; i < 20; i++) {
    cout << "Answer # " << i + 1 << " : ";
    char answer{};
    cin >> answer;

    int ascii_answer = (int)answer;
    if (asii_answer < 65 || asii_answer > 68 || cin.bad() || cin.fail()) {
      cout << "'" << userInput << "' is not a valid input. Please Enter 'A', 'B', 'C', or 'D'." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      student_answers[i] = answer;
    }
  }
}

void CheckAnswers(char student_answers[], char answer_key[], int incorrectQs, int &correct, int &incorrect) {
  for (int i = 0; i < 20; i++) {
    if (student_answers[i] == answer_key[i]) {
      correct += 1;
    } else {
      incorrect += 1;
      incorrectQs.push_back(i + 1);
    }
  }
}
