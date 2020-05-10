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
char letters[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char reversed_letters[27] = { 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a' };
char vowels[13] = { 'A', 'O', 'E', 'Y', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i' };
long long find_max_vector(vector<long long int> arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > ans) { ans = arr[i]; }
    }
    return ans;
}
int gcd(long long a, long long  b)
{
    if (a == 0) { return b; }
    return gcd(b % a, a);
}
int linear_count(int n, vector<int>arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) { if (arr[i] == n) { ans++; } }
    return ans;}
long long  find_min_vector(vector<long long int> arr) {
    bool move = true;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (move) { ans = arr[i]; }
        else if (arr[i] < ans) { ans = arr[i]; }}
    return ans;}
bool is_palindrome(string s) {
    string copys = s; reverse(copys.begin(), copys.end()); return copys == s; }
bool exist(char arr[13], char s) {
    for (int i = 0; i < 12; i++) { if (arr[i] == s) { return true; } }
    return false;
}
bool linear_search_boolean_string(string str, char s) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == s) { return true; }}
    return false;}
int sum_vector(vector<int> arr) { int ans = 0;
for (int i = 0; i < arr.size(); i++) {
    ans += arr[i];
    }
return ans;
}
string lower(string str) {
    for (int i = 0; i < str.size(); i++) { str[i] = tolower(str[i]); } return str; }
string upper(string str) {
    for (int i = 0; i < str.size(); i++) { str[i] = toupper(str[i]); } return str; }
long long lcm(long long a, long long b) {
    if (a > b)
        return (a / gcd(a, b)) * b;
    else
        return (b / gcd(a, b)) * a;
}
int digit_to_int(char x) {
    int answer = (int)x - 48;
    return answer;
}

int main() {
    pair < int , int > p = { 0 , 0 };
    long long  int a = 1, b = 1, c = 0, x = 0, y = 0, d, n, k, test, ans = 0, pointer = 0;
    vector < int > arr , cs;
    map < int , int > frq;
    char matrix[101][101] , s , r ;
    unordered_set <int>sett;
    set< int >ss;
    bool move = true;
    string str, s1 = "", s2 = "";
    cin >> str;
    while (str.length() > 1) {
        for (int i = 0; i < str.size(); i++) {
            r = str[i];
            int myint = digit_to_int(str[i]);
            y += myint;
        }
        str = to_string(y);
        y = 0;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
