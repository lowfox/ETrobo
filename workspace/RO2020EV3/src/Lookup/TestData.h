#include "Debug.h"

#ifdef __LOOKUP_DEBUG__
#include <RyujiEv3.h>
#include <array>

struct SonarDistanceTest
{
       std::array<int16, 3> distance  {0, 0, 0};
       bool  distance_retval = false;
};

struct SonarCompareTest
{      
       std::array<int16, 3> stop_distance  {0, 0, 0};
       bool  stop_distance_retval = false;
};

struct SonarInputTest
{
       int16 input_data = 0;
       bool  input_data_retval = false;
};

struct TailTest
{   
       std::array<int32, 2> counts {0, 0};
       bool  counts_retval = false;
};
 
struct MotorCompareTest
{
       float start = 0;
       int16 offset = 0;
       bool compare_retval = false;
};

struct EmergencyLineTest
{
       uint8 reflects = 0;
       bool  reflects_retval = false;
};

struct EmergencyLeftTurnTest
{
       std::array<int8, 2> left_turn_deg  {0, 0};
       bool  left_turn_deg_retval = false;
};

struct EmergencyRightTurnTest
{
       std::array<int8, 2> right_turn_deg  {0, 0};
       bool  right_turn_deg_retval = false;
};

#endif
