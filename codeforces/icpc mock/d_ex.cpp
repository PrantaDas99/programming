#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int FindNumberOfTriangles(vector<int>sides) 
{ 
  sort(sides.begin(), sides.end());
 
  int result = 0; 
 
  for(int i=sides.size()-1;i>=0;--i) { 
    int start = 0; 
    int end = i - 1; 
 
    while(start < end)
    {
      if (sides[start] + sides[end] <= sides[i])
      { 
        ++start; 
      }
      else
      {
        result += end - start; 
        --end; 
      } 
    } 
  } 
 
  return result;
}

int main()
{
    int n;
    vector<int> sides;
    
    std::cin >> n;
        
    for (int i = 0; i < n; ++i)
        cin >> sides[i];

    cout << FindNumberOfTriangles(sides) << "\n";

    return 0;
}
