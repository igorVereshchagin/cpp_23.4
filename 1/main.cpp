#include <iostream>

#define MONDAY     1
#define TUESDAY    2
#define WEDNESDAY  3
#define THURSDAY   4
#define FRIDAY     5
#define SATURDAY   6
#define SUNDAY     7

#define TERNARY(n, m) ((n) == m) ? #m

#define WEEKDAY(n) (TERNARY(n, MONDAY)    : (\
                    TERNARY(n, TUESDAY)   : (\
                    TERNARY(n, WEDNESDAY) : (\
                    TERNARY(n, THURSDAY)  : (\
                    TERNARY(n, FRIDAY)    : (\
                    TERNARY(n, SATURDAY)  : (\
                    TERNARY(n, SUNDAY)    : "")))))))

int main()
{
  std::cout << "Input weekday number (1..7): " << std::endl;
  int dayn;
  std::cin >> dayn;
  if (dayn >= 1 && dayn <= 7)
    std::cout << WEEKDAY(dayn) << std::endl;
  else
    std::cout << "Invalid number of a day" << std::endl;
  return 0;
}
