//PROBLEM: https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c
//SOLUTION:

class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
        std::string temp;
    
        for(int i = 0; i < array.size()-1; i++)
        {
            for(int j = i + 1; j < array.size(); j++)
            {
              if(array[i].length() > array[j].length())
              {
                  temp = array[i];
                  array[i] = array[j];
                  array[j] = temp;
              }
            }
        }
    
        return array;
    }
};
