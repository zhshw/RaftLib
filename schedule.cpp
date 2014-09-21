#include "schedule.hpp"

Schedule::Schedule( Map &map )
{
   for( Kernel *kern : map.all_kernels )
   {
      (this)->scheduleKernel( kern );
   }
}
