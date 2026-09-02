/*
Problem:
Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. 
That's why he decided to invent an extension for his favorite browser that would change the letters' 
register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. 
At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. 
If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix.
Your task is to use the given method on one given word.

Approach:
1.Count number of upper and lowercase letters in the string and store in variable.
2.Then compare both and accordigly change the whole string to upper or lower case.


*/
#include <iostream>
#include <cctype>
using namespace std;
 
int main() {
    string a;
    cin >> a;
 
    int upperno = 0;
    int lowerno = 0;
 
    for (char s : a) {
        if (islower(s))
            lowerno++;
        if (isupper(s))
            upperno++;
    }
 
    if (lowerno > upperno) {
        for (char &s : a)
            s = tolower(s);
    } 
    else if (upperno > lowerno) {
        for (char &s : a)
            s = toupper(s);
    } 
    else {
        for (char &s : a)
            s = tolower(s);
    }
 
    cout << a << endl;
 
    return 0;
}