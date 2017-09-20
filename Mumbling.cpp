//PROBLEM: https://www.codewars.com/kata/5667e8f4e3f572a8f2000039
//SOLUTION:

class Accumul
{
public:
    static std::string accum(const std::string &s);
};

std::string Accumul::accum(const std::string& s)
{
  int incr = 1;
  std::string output;
  
  for(size_t i = 0; i != s.length(); ++i)
  {
    for(size_t j = 0; j != i+1; ++j)
    {
      if(j==0)
      {
        output += toupper(s[i]);
      }
      else
      {
        output += tolower(s[i]);
      }
    }
    if(i+1 != s.length())
    {
      output += '-';
    }
  }
  return output;
}
