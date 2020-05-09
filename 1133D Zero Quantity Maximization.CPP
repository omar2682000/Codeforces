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
#pragma warning(suppress : 4996)
//*****************************************************************************************************************************************************************

char letters[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char reversed_letters[27] = { 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a' };
char vowels[13] = { 'A', 'O', 'E', 'Y', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i' };
vector<long long int> primes;

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
long long int find_min_vector(vector<long long int> arr) {
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
void sieve() {

    const long long int N = 318;
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
bool isPrime(long long int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) { return false; }
    }
    return true;
}
long long int count_combinations(long long int n, long long k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
long long int count_permutations(long long int n, long long k) {
    return factorial(n) / factorial(n - k);
}
long long int count_combinations_with_replacement(long long int n, long long k) {
    return (n + factorial(k - 1)) / (factorial(k) * factorial(n - k));
}
void bubble_sort_algo(vector<long long int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) { swap(arr[j], arr[j + 1]); ans++; }
        }
    }
}
vector<long long int> merge(vector<long long int> v1, vector<long long int> v2)
{
    int pointer_1 = 0, pointer_2 = 0; vector<long long int> answer = {};
    while (true)
    {
        if ((pointer_1 >= v1.size() - 1) && (pointer_2 >= v2.size() - 1)) { return answer; break; }
        else if (pointer_1 >= v1.size() - 1) { for (int i = pointer_2; i < v2.size(); i++) { answer.push_back(v2[i]); pointer_2++; } }
        else if (pointer_2 >= v2.size() - 1) { for (int i = pointer_1; i < v1.size(); i++) { answer.push_back(v1[i]); pointer_1++; } }
        else
        {
            if (v1[pointer_1] < v2[pointer_2]) { answer.push_back(v1[pointer_1]); pointer_1++; }
            else if (v1[pointer_1] == v2[pointer_2])
            {
                answer.push_back(v1[pointer_1]); pointer_1++;
                answer.push_back(v2[pointer_2]); pointer_2++;
            }
            else{ answer.push_back(v2[pointer_2]); pointer_2++; }
        }
    }
}
vector <int> count_sort_vector(vector<int> arr)
{
    vector<int> sol(arr.size(), 0);
    for (int i = 0; i < arr.size(); i++)
    {
        
        sol[arr[i]]++;
    }
    return sol;
 }


//*****************************************************************************************************************************************************************
void defenitions() {
#define ll long long 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define cll const long long
#define ci const int
#define pl pair<ll,ll>
#define pi pair < int,int>
#define vi vector<int>
#define vc vector <char>
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
#define lld "%lld "
#define d "%d "
#define f "%f "
#define s "%s "
}
map < long double,  long double > frq;

const int N = 100010;
long long int dp[N]  ,dyp[N];

//*****************************************************************************************************************************************************************

int main() {
    defenitions();
    fastIO;
    pl p = { 0 , 0 };
    long double  k, k1, k2, n, a = 0, b = 0, m, test, ans = 0, mini = 0, maxi = 0, x = 0, y = 0, sum = 0; int pointer = 0;
    usetl sett;
    setl ss;
    deque <ll> dq;
    queue<ll> qu;
    vl arr, cs, solution;
    unordered_map <ll, ll> mp;
    bool move = true;
    vector <int> solo;
    stack <ll> stk;
    string str, s1 = "", s2 = "";
    cin >> n;
     for (int i = 0; i < n; i++)
     {
         cin >> k1; arr.push_back(k1);
     }for (int i = 0; i < n; i++)
     {
         cin >> k1;
         
         if (arr[i] != 0)
         {
             frq[-(k1 / arr[i])]++;
         }
         else if (k1 == 0 && arr[i]==0) { x++; }
         
     }
     for (auto i : frq)
     {
         if (abs(i.second) > ans) { ans = i.second; }
     }
     cout << ans + x << endl;
    return  0;
}
