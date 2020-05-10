#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <array>
#include <map>
#include <iterator>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <search.h>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <numeric>
#include <bitset>
#include <sstream>
#include <stdio.h>
#include <set>
using namespace std;
pair<int, int> k = { 1,2 };
 
int find_max_vector(vector<int> arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > ans) { ans = arr[i]; }
    }
    return ans;
}
 
int find_min_vector(vector<int> arr) {
    bool move = true;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (move) { ans = arr[i]; }
        else if (arr[i] < ans) { ans = arr[i]; }
    }
    return ans;
}
int main() {
    pair <int, int>p = { 0 , 0 };
    int a, k, c, d, n, ans = 0;
    vector < pair<int, int>> arr, cs;
    map <int, int> frq;
    string str, s1, s2;
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> n;
            matrix[i][j] = n;
            if (n == 1) {
                p.first = i;
                p.second = j;
            }
 
        }
    }
    cout << abs(p.first - 3 + 1) + abs(p.second - 3 + 1) << endl;
    return 0;
}
