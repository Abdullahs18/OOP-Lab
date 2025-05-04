#include <iostream>
#include <fstream>
#include <string>
using namespace std;

template <typename T>
class FileReader {
private:
    T data[100];
    int size;
public:
    FileReader() {
        size = 0;
    }

    void readFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "Error: Unable to open file." << endl;
            return;
        }
        while (file >> data[size]) {
            size++;
            if (size >= 100) break;
        }
        file.close();
    }

    void displayData() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    FileReader<int> intReader;
    FileReader<float> floatReader;
    FileReader<string> stringReader;

    intReader.readFromFile("integers.txt");
    floatReader.readFromFile("floats.txt");
    stringReader.readFromFile("strings.txt");

    intReader.displayData();
    floatReader.displayData();
    stringReader.displayData();

    return 0;
}
