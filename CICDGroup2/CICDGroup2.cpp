// CICDGroup2.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "CICDGroup2.h"


// This is an example of an exported variable
CICDGROUP2_API int nCICDGroup2=0;

// This is an example of an exported function.
CICDGROUP2_API int fnCICDGroup2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCICDGroup2::CCICDGroup2()
{
    return;
}

CICDGROUP2_API int TestCase(int i) {
    return i + 1;
}
