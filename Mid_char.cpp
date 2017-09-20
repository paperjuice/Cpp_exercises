//PROBLEM: https://www.codewars.com/kata/56747fd5cb988479af000028
//SOLUTION:

#include <string>
std::string get_middle(std::string input) 
{
  int result = input.length()%2;
  return (result==0) ? input.substr(input.length()/2-1, 2) : input.substr(input.length()/2, 1);
}
