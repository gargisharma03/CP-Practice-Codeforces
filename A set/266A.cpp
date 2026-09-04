/*
Problem:
There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

Approach:
1. Read the number of stones and their colors into a string.
2. Iterate through the string starting from the second stone.
3. For each stone, check if it has the same color as the previous stone.
4. If they have the same color, increment the count.
5. Output the count.
Time Complexity: O(n), where n is the number of stones, since we iterate through the string once.
Space Complexity: O(1), as we only use a few variables to keep track of the count and the current index.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    string stones;
    cin >> stones;

    int count = 0;

    for (int i = 1; i < n; i++) {
        if (stones[i] == stones[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}