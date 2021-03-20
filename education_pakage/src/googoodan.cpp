#include <ros/ros.h>

void PrintGooGooDan(int number)
{
   for(int i=1; i<10; i++)
   {
     int result = number * i;
     std::cout << number << " x " << i << " = " << result << std::endl;
   }

}

int main()
{

  int number = 0;

  while(1)
  {
    if(number != 0 && number > 0 && number < 10) PrintGooGooDan(number);
    if(number == -1) break;
    std::cout << std::endl;
    std::cout << " 숫자 입력 : " ;
    std::cin >> number;
  }

  return 0;
}
