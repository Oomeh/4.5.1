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
    //Updated version with COMMENTS
    std::string sentence;
    
    std::getline(std::cin, sentence);

    //Variables both for keeping track of the counter and for figuring out where the whitespace is
    int i = 0;
    int current = 0;
    int last = 0;
    //Loops to iterate through the sentence
    while(i < sentence.size())
    {
        //Sets the previous tester to the same number as the new one
        last = current;
        //Tests if the current character is a space
        if(sentence[i] == ' ')
        {
            //Sets the current to 1
            current = 1;
        }
        else
        {
            //Sets it to 0
            current = 0;
        }
        //If both are 1, decides the character needs to be erased
        if(current == 1 && last == 1)
        {
            //Erases the space
        sentence.erase(i, 1);
        //Pushes the counter back by 1 as the size of the string array doesn't actually get smaller even though the space is gone
        i--;
        }

        i++;

    }

    cout << sentence << endl;
}
