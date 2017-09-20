// PROBLEM: https://www.codewars.com/kata/55466989aeecab5aac00003e
//SOLUTION:
#include <vector>

class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth);
};

std::vector<int> SqInRect::sqInRect(int lng, int wdth)
{
  std::vector<int> result;
  if(lng == wdth){ return result; }
  while(lng >= 0)
  {
    if(lng>wdth)
    {
      lng -= wdth;
      result.push_back(wdth);
    }
    else if(lng < wdth)
    {
      wdth -= lng;
      result.push_back(lng);
    }
    else
    {
      result.push_back(lng);
      return result;
    }
  } 
  return result;
}
