#include <iostream>

#define CARRIAGE_COUNT               10
#define OPTIMAL_CARRIAGE_LOAD        20

#define INPUT_CARRIAGES()  do { \
  std::cout << "Input load of carriages:" << std::endl;    \
  for (int i = 0; i < CARRIAGE_COUNT; i++) \
    std::cin >> carriages_load[i];         \
}while(0)

#define CHECK_OVERLOAD() do { \
  for (int i = 0; i < CARRIAGE_COUNT; i++) \
    if (carriages_load[i] > OPTIMAL_CARRIAGE_LOAD) \
      std::cout << "Carriage " << i + 1 << " is overloaded" << std::endl;  \
}while(0)

#define CHECK_UNDERLOAD() do { \
  for (int i = 0; i < CARRIAGE_COUNT; i++) \
    if (carriages_load[i] < OPTIMAL_CARRIAGE_LOAD) \
      std::cout << "There are empty places in carriage " << i + 1 << std::endl;  \
}while(0)

#define CALC_TOTAL_PASSENGERS() do { \
  int total = 0;                     \
  for (int i = 0; i < CARRIAGE_COUNT; i++) \
    total += carriages_load[i];      \
  std::cout << "Total passengers: " << total << std::endl; \
}while(0)

int main()
{
  int carriages_load[CARRIAGE_COUNT];
  INPUT_CARRIAGES();
  CHECK_OVERLOAD();
  CHECK_UNDERLOAD();
  CALC_TOTAL_PASSENGERS();
  return 0;
}
