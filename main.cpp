/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 18:45
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line, temp;
    short i, l, j;
    bool test;
    while (getline(stream, line)) {
        test = false;
        l = line.length();
        for(i = 1; i < l; i++) {
            temp = line.substr(0, i);
            for(j = i; j < l; j += i) {
                test = true;
                if (temp != line.substr(j, i)) {
                    test = false;
                }
            }
            if (test) {
                cout << i << endl;
                break;
            }
        }
        if (!test) {
            cout << l << endl;
        }
    }
    return 0;
}