/* ---------------------------------------------------------------------------
Hacker Rank: 30 Days of Code Day 11 - 2D Arrays
A 6 X 6 grid of integers is stored to a multidimensional array. Find the maximum sum of integers that forms the shape of hourglass, as seen in the url referenced below. The integers have an inclusive range of -9 to 9.

@url https://www.hackerrank.com/challenges/30-2d-arrays
@author Amy Yuen Ying Chan
** --------------------------------------------------------------------------- */

## Pre-defined Code by Hacker Rank

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    ## My Solution
    int max = -(9*7); // Lowest number of sum that the hourglass can get
    int sum = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            sum += arr[i+1][j+1];
            sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            if (sum > max) {
                max = sum;
            }
        }
    }
    cout << max;
                
                
    return 0;
}
