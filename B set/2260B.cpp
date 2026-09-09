/*
Problem:
Monocarp runs a company. Consider the work of his company over the next k
 months. In the first month, the company has x
 employees, not counting Monocarp himself, and y
 projects need to be completed. In each next month, both the number of employees and the number of projects increase by 1
.

In other words, in month i
 (0≤i<k
), the company has x+i
 employees and needs to complete y+i
 projects.

In each month, Monocarp distributes the projects among the employees. Each employee must receive the same number of projects, and each project can be assigned to at most one employee. Monocarp completes all unassigned projects himself. He always chooses a distribution that makes him complete as few projects as possible.

In particular, if in some month there are a
 employees and b
 projects, then Monocarp assigns exactly ⌊ba⌋
 projects to each employee, and he completes bmoda
 projects himself.

Find the total number of projects that Monocarp will complete himself over the next k
 months.

Input
The first line contains an integer t
 — the number of test cases (1≤t≤104
).

Each test case consists of one line containing three integers x
, y
, and k
 (1≤x≤y≤106
; 1≤k≤1012
).

Additional constraint on the input:

the sum of y
 over all test cases does not exceed 106
.
Output
For each test case, output one integer — the total number of projects that Monocarp will complete himself over k
 months.

Approach:
1.after inputting all x,y,k, our next step would be to form the logic as the brute force solution will give tle as k<=10^12
2.we declare a variable d which has value y-x and will be constant as both x,y increase with same values.
3.Modify the answer from (y+i)MOD(x+i) to dMOD(x+i),now we can observe that for x+i>d values remainder will always be d so loop runs till x+i<=d;
4.So for x+i<=d add reaminder to mproj and for the other case just add remaining*d.

TC:O(y) 
SC:O(1)

*/

#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long d = y - x;
        long long ans = 0;
        long long i = 0;

        while (i < k && x + i <= d) {
            ans += d % (x + i);
            i++;
        }

        long long remaining = k - i;
        ans += remaining * d;

        cout << ans << '\n';
    }

    return 0;
}