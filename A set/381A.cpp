/*

Problem:
Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.

Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

Approach:
1. Read the number of cards and their values into a vector.
2. Use two pointers, one starting at the beginning of the vector and the other at the end.
3. Initialize two sums for Sereja and Dima.
4. Use a loop to simulate the game:
   - On each turn, compare the values of the cards at the two pointers.
   - The player whose turn it is takes the card with the larger value and adds it to their sum.
   - Move the pointer of the taken card inward (either increment the left pointer or decrement the right pointer).
   - Alternate turns between Sereja and Dima.

Time Complexity: O(n), where n is the number of cards, since each card is considered exactly once.
Space Complexity: O(n) for storing the card values in a vector.

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int i = 0;
    int j = n - 1;

    int sum1 = 0;
    int sum2 = 0;

    bool serejaTurn = true;

    while (i <= j) {
        if (cards[i] > cards[j]) {
            if (serejaTurn)
                sum1 += cards[i];
            else
                sum2 += cards[i];

            i++;
        }
        else {
            if (serejaTurn)
                sum1 += cards[j];
            else
                sum2 += cards[j];

            j--;
        }

        serejaTurn = !serejaTurn;
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}

