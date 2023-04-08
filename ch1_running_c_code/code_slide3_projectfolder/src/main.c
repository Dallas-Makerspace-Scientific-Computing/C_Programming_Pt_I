#include <math.h>

#include "trig.h"
#include "print_value.h"


int main()
{
    double result, input;
    input = M_PI / 6.0;  // radians
    result = compute_cotangent(input);
    print_cotangent_value(input, result);
    return 0;
}