#include <iostream>

//#define SIMPLEST //uncomment me

#if defined(SIMPLEST)

#define SEASON    WINTER
//#define SEASON    SPRING
//#define SEASON    SUMMER
//#define SEASON    AUTUMN

#define _SEASON_NAME(SEASON) #SEASON
#define SEASON_NAME(SEASON) _SEASON_NAME(SEASON)

int main()
{
  std::cout << SEASON_NAME(SEASON) << std::endl;
  return 0;
}

#else

#define WINTER
//#define SPRING
//#define SUMMER
//#define AUTUMN

int main()
{
#if defined(WINTER)
  std::cout << "Winter" << std::endl;
#elif defined (SPRING)
  std::cout << "Spring" << std::endl;
#elif defined (SUMMER)
  std::cout << "Summer" << std::endl;
#elif defined (AUTUMN)
  std::cout << "Autumn" << std::endl;
#endif
  return 0;
}


#endif