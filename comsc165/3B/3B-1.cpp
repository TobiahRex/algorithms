#include <iostream>
#include <iomanip>

using namespace std;

void GetStudentGrade(char []);
void CheckAnswers(char [], char [], int [], int &, int &);

int main() {
  char answers[20] = { 'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B' };
  string student_names[100];
  cout << "How many student took the exam? ";
  int student_count{};
  cin >> student_count;

  for (int i = 0; i < student_count; i++) {
    char student_answers[20];
    int incorrect_Qs[20];
    int correct{0};
    int incorrect{0};

    string lineBreak(20, '_');
    cout << "\n" << lineBreak << "\nEnter Name for Student # " << i + 1 << " : ";

    getline(cin >> ws, student_names[i]);
    cout << endl;

    GetStudentGrade(student_answers);
    CheckAnswers(student_answers, answers, incorrect_Qs, correct, incorrect);

    cout << endl << student_names[i];
    if (correct > 14) {
      cout << " : PASSED" << endl;
    } else {
      cout << " : FAILED" << endl;
    }

    cout << "# Correct: " << correct << endl
    << "# Incorrect: " << incorrect << endl
    << "Incorrect Qs: ";

    for (int j = 0; j < 20; j++) {
      if (student_answers[j] != answers[j]) {
        cout << j + 1 << " ";
      }
    }
  }

  cout << "\nTotal Students = " << student_count << endl << "Student Names: ";

  for (int i = 0; i < student_count; i++) {
    (i + 1) == student_count ? cout << student_names[i] : cout << student_names[i] << ", ";
  }
  cout << endl;

  return 0;
}

void GetStudentGrade(char student_answers[]) {
  cout << "-- Enter student answers --" << endl;

  bool askForGrade{true};
  int i{0};

  while(askForGrade) {
    cout << "Answer # " << i + 1 << " : ";
    char answer{};
    cin >> answer;

    int ascii_answer = (int)answer;

    if (ascii_answer < 65 || ascii_answer > 68 || cin.bad() || cin.fail()) {
      cout << "'" << answer << "' is not a valid input. Please Enter 'A', 'B', 'C', or 'D'." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      student_answers[i] = ascii_answer;
      i += 1;
    }

    if (i == 20) {
      askForGrade = false;
    }
  }
}

void CheckAnswers(char student_answers[], char answer_key[], int incorrectQs[], int &correct, int &incorrect) {
  for (int i = 0; i < 20; i++) {
    if (student_answers[i] == (int)answer_key[i]) {
      correct += 1;
    } else {
      incorrect += 1;
      incorrectQs[incorrect] = i + 1;
    }
  }
}
