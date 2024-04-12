// CI_CD_Assgmnt_Grp_35.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "CI_CD_Assgmnt_Grp_35.h"


// This is an example of an exported variable
CICDASSGMNTGRP35_API int nCICDAssgmntGrp35=0;

// This is an example of an exported function.
CICDASSGMNTGRP35_API int fnCICDAssgmntGrp35(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCICDAssgmntGrp35::CCICDAssgmntGrp35()
{
    return;
}

int CCICDAssgmntGrp35 :: calc(int a, int b)
{
    if (a < b) {
        return a + b;
    }
    else if (a == b) {
        return a * b;
    }
    else {
        return a - b;
    }
}