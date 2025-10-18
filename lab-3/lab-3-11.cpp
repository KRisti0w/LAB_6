#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence = "Can you can a can as a canner can can a can?";
    string new_word = "(-_-)";
    string searchWord = "can";

    cout << "Original sentence: " << sentence << endl;
    string result = "";
    size_t i = 0;

    while (i < sentence.length()) {
        
        if ((sentence[i] == 'c' || sentence[i] == 'C') && sentence[i+1] == 'a' && sentence[i+2] == 'n' && (sentence[i+3] == ' ' || sentence[i+3] == '?')) {

            result += new_word;
            i += 3;
        } else {
            result += sentence[i];
            i++;
        }
    }
    cout << "Result: " << result << endl;
    return 0;
}