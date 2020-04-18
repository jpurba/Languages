#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

using namespace std;

void countStuff(istream& in, int& chars, int& words, int& lines) {

    char cur = '\0';  // init with char 0
    char last = '\0'; // init with char 0
    chars = words = lines = 0; // init value to zero

    while (in.get(cur)) {
        if (cur == '\n' ||
            (cur == '\f' && last == '\r'))
            lines++;
        else
            chars++;
        if (!std::isalnum(cur) &&   // This is the end of a
            std::isalnum(last))     // word
            words++;
        last = cur;
    }
    if (chars > 0) {               // Adjust word and line
        if (std::isalnum(last))     // counts for special
            words++;                 // case
        lines++;
    }
}

int main() {
    int c, w, l;

    ifstream f1("text.txt"); ;

    countStuff(f1, c, w, l);
    cout << "chars: " << c << '\n';
    cout << "words: " << w << '\n';
    cout << "lines: " << l << '\n';
}