#include <iostream>
main()
{
 enum color_type {red, orange, yellow, green, blue, violet};
 color_type shirt, pants;
 shirt = green;
 pants = blue;
 std::cout << shirt << " " << pants << std::endl;
 return 0;
}