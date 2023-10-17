#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            try{
                while (std::getline(_file, line)) {
                    records.push_back(stoi(line));
                }
            }catch (std::invalid_argument){
                throw std::invalid_argument("Wrong argument when reading the file");
            }catch (std::out_of_range){
                throw std::out_of_range("Out of range when reading the file");
            }

            _file.close();
        }
    }
};

int main() {
        
        // RecordsManager receordM("test_clean.txt");
        // RecordsManager receordM("test_corrupt1.txt");
        RecordsManager receordM("test_corrupt2.txt");
        Records myRecords;

        // reads records
        try{
            receordM.read(myRecords);
        }catch(std::invalid_argument){
            cout << "Wrong argument when reading the file\n";
        }catch(std::out_of_range){
            cout << "Out of range when reading the file\n";
        }

        // calculate and print out the sum
        int sum = 0;
        for (int i = 0; i < (int)myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
    return 0;
}