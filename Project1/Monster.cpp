//-----------------------------------------------------------------------------
// Monster.CPP
//-----------------------------------------------------------------------------

#include "Monster.h"

int gid{ 0 };

Monster::Monster() : id( ++gid )
{
}

Monster::~Monster()
{

}
