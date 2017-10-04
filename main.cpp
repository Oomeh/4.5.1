/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on September 22, 2017, 2:04 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main() {
    
    std::string sentence;
    
    std::getline(std::cin, sentence);

    
    int i = 0;
    int current = 0;
    int last = 0;
    while(i < sentence.size())
    {
        last = current;
        if(sentence[i] == ' ')
        {
            current = 1;
            cout<< "Current = " << current << endl;
            cout<< "Last = " << last << endl;
        }
        else
        {
            current = 0;
            cout<< "Current = " << current << endl;
            cout << "Last = " << last << endl;
        }
        if(current == 1 && last == 1)
        {
        sentence.erase(i, 1);
        i--;
        }

        cout << sentence[i] << endl;
        i++;

    }

    cout << sentence << endl;
}
