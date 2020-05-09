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

//*****************************************************************************************************************************************************************

char letters[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char reversed_letters[27] = { 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a' };
char vowels[13] = { 'A', 'O', 'E', 'Y', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i' };

//*****************************************************************************************************************************************************************

long long find_max_vector(vector<long long int> arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > ans) { ans = arr[i]; }
    }
    return ans;
}
long long int factorial(long long  n) {
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
int gcd(long long a, long long  b)
{
    if (a == 0) { return b; }
    return gcd(b % a, a);
}
int linear_count(int n, vector<int>arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) { if (arr[i] == n) { ans++; } }
    return ans;
}
long long  find_min_vector(vector<long long int> arr) {
    bool move = true;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (move) { ans = arr[i]; }
        else if (arr[i] < ans) { ans = arr[i]; }
    }
    return ans;
}
bool is_palindrome(string s) {
    string copys = s; reverse(copys.begin(), copys.end()); return copys == s;
}
bool exist(char arr[13], char s) {
    for (int i = 0; i < 12; i++) { if (arr[i] == s) { return true; } }
    return false;
}
bool linear_search_boolean_string(string str, char s) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == s) { return true; }
    }
    return false;
}
int sum_vector(vector<int> arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans += arr[i];
    }
    return ans;
}
string lower(string str) {
    for (int i = 0; i < str.size(); i++) { str[i] = tolower(str[i]); } return str;
}
string upper(string str) {
    for (int i = 0; i < str.size(); i++) { str[i] = toupper(str[i]); } return str;
}
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
int string_to_int(string s) {
    return stoi(s);
}
bool binarySearchboolean(vector<long long int>arr, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return true;
        if (arr[mid] > x)
            return binarySearchboolean(arr, l, mid - 1, x);
        return binarySearchboolean(arr, mid + 1, r, x);
    }return false;
}
vector<long long int> primes;
void sieve(){
    
    const long long int N = 1000000;
    long long int arr[N + 1] = { 0 };
    arr[0] = 1;
    for (long long int i = 2; i <= N; i++)
    {
        for (long long int j = i * i; j <= N; j += i) 
        {
            arr[j - 1] = 1;
        }
    }
    for (long long int i = 1; i <= N; i++) 
    {
        if (arr[i - 1] == 0) 
        {
            primes.push_back(i);
        }
    }
}
long long int count_combinations(long long int n , long long k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
long long int count_permutations(long long int n, long long k) {
    return factorial(n) /  factorial(n - k);
}
long long int count_combinations_with_replacement(long long int n, long long k) {
    return (n + factorial(k - 1)) / (factorial(k) * factorial(n - k));
}

//*****************************************************************************************************************************************************************
#define ll long long 
#define cll const long long
#define ci const int
#define pl pair<ll,ll>
#define pi pair < int,int>
#define vi vector<int>
#define vl vector <ll>
#define vpi vector <pair < int , int > >
#define setl set<ll>
#define seti set<int>
#define setc set<char>
#define setstr set<string>
#define db double
#define usetc set<char>
#define usetstr set<string>
#define uset unordered_set <int>
#define usetl unordered_set <ll>
#define chr char

//*****************************************************************************************************************************************************************
bool solve(pi p, vpi v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first < p.first && p.first < v[i].second)
        {
            return false;
        }
        else if (v[i].first < p.second && p.second < v[i].second)
        {
            return false;
        }
    }return true;
}
int main() {
    pi p = { 0 , 0 };
    ll a = 0, b = 0, d, k, n, test, ans = 0, pointer = 0,row = 0,col = 0;
    cll N = 1000;
    usetl sett;
    setl ss;
    map < ll, ll > frq;
    vpi  arr,c, j;
    bool move = true;
    vector <char> answer;
    string str, s1 = "", s2 = "";
    cin >> a >> b;

        cout << "YES" << endl;
        for (ll i = a; i < b; i += 2)
        {
            cout << i << ' ' << i + 1 << endl;
        
    }
    return 0;
}
