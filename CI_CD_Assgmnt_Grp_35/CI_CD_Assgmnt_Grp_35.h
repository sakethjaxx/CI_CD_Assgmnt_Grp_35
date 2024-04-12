// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CICDASSGMNTGRP35_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CICDASSGMNTGRP35_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CICDASSGMNTGRP35_EXPORTS
#define CICDASSGMNTGRP35_API __declspec(dllexport)
#else
#define CICDASSGMNTGRP35_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CICDASSGMNTGRP35_API CCICDAssgmntGrp35 {
public:
	CCICDAssgmntGrp35(void);
	int calc(int a, int b);
	// TODO: add your methods here.
};

extern CICDASSGMNTGRP35_API int nCICDAssgmntGrp35;

CICDASSGMNTGRP35_API int fnCICDAssgmntGrp35(void);
