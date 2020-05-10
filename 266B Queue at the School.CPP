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
#include <cassert>
#include <bitset>
#include <sstream>
#include <stdio.h>
#include <set>
#include<assert.h>
using namespace std;

int main() {
	int n, t, ind = 0;		string s;    char b = 'B', g = 'G';
	cin >> n >> t >> s;
	for (int i = 0 ; i<t ; i++){
	while (ind < s.size() - 1) {
		if ( s [ind] == b && s [ ind + 1 ] == g )		{ s [ ind ] = g ;      s [ ind + 1 ] = b ;		 ind += 2 ; }
		else	{ ind++; }		}	ind = 0;	}
	cout << s;    
	return 0;}
