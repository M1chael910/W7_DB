#include "iostream"
#include "string"

#include "cctype" // used for tolower() function

using namespace std;

void sortName(string name);

void sortScores(int x, int y, int z);

int main() {
    int x, y, z;
    string name = "";
    cout << "Enter your name" << endl;
    cin >> name;
    sortName(name);
    cout << "Enter three scores" << std::endl;
    cin >> x;
    cin >> y;
    cin >> z;
    sortScores(x, y, z);
    return 0;
}

void sortScores(int x, int y, int z) {
    int scores[3] = {x, y, z};
    char tempNum = 0;
    for (int i = 0; i <= 2; i++) {
        for (int j = i + 1; j < 2; j++) {
            if (scores[j] < scores[i]) { // compares the first and second num
                tempNum = scores[i]; // puts the first num into the temp var
                scores[i] = scores[j];
                scores[j] = tempNum;// Swaps the two numbers if the first is less then the second.
            }
        }
    }
    cout << "Sorted Numbers: " << endl;
    for (int x = 0; x <= 2; ++x) {
        cout << scores[x] << endl;
    }
}


void sortName(string name) {

    int temp = ' ';

    for (int i = 0; i < name.length() - 1; i++) {
        for (int j = 0; j < name.length() - 1; j++) {
            if (tolower(name[j]) > tolower(name[j + 1])) { // compares the first and second num
                temp = name[j]; // puts the first num into the temp var
                name[j] = name[j + 1];
                name[j + 1] = temp;// Swaps the two numbers if the first is greater than the second.
            }
        }
    }
    cout << "Sorted Name: " << endl;
    for (int x = 0; x <= name.length() - 1; ++x) {
        cout << name[x];
    }
    cout << "\n";
}


