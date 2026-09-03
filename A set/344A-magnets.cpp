/*
Problem:
Mad scientist Mike entertains himself by arranging rows of dominoes. He doesn't need dominoes, though: he uses rectangular magnets instead. Each magnet has two poles, 
positive (a "plus") and negative (a "minus"). If two magnets are put together at a close distance, then the like poles will repel each other and the opposite poles will 
attract each other.

Mike starts by laying one magnet horizontally on the table. During each following step Mike adds one more magnet horizontally to the right end of the row. 
Depending on how Mike puts the magnet on the table, it is either attracted to the previous one (forming a group of multiple magnets linked together) or repelled
by it (then Mike lays this magnet at some distance to the right from the previous one). We assume that a sole magnet not linked to others forms a group of its own.

Approach:
1.Read number of magnets with the sequence and store only the previous orienation and then compare
with the current if they are different it means a new group is there as they will repel so increment the
groups variabale and then in prev store the current orienatation.

Time Complexity:O(N)
Space Complexity:O(1) as stored only prev and current orientation.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prev;
    cin >> prev;

    int groups = 1;

    for (int i = 1; i < n; i++) {
        int current;
        cin >> current;

        if (current != prev)
            groups++;

        prev = current;
    }

    cout << groups << endl;

    return 0;
}