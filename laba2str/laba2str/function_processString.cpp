#include <string>
#include "function_processString.h"
using namespace std;

string processString(char text[], int length) {
    int maxSpaces = 0;
    int Spaces = 0;
    string result = "";
    int x = 0;

    for (int i = 0; i < length; i++) {
        char c = text[i];
        if (c == ' ') {
            Spaces++;
        }
        else {
            if (Spaces > maxSpaces) {
                maxSpaces = Spaces;
                x = i - maxSpaces;

            }
            Spaces = 0;
        }
    }



    if (maxSpaces % 3 == 0) {
        for (int i = 0; i < length; i++) {
            char c = text[i];
            if (c == ' ' && x == i) {

                result += '*';
                while (i < length && text[i] == ' ') {
                    i++;
                }
            }
            else if (c == ' ') {
                i++;
            }
            else {
                result += c;
            }

        }
    }
    else {
        for (int i = 0; i < length; i++) {
            char c = text[i];
            if (c != ' ') {
                result += c;
            }
        }
    }

    return result;
}