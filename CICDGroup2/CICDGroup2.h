// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CICDGROUP2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CICDGROUP2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CICDGROUP2_EXPORTS
#define CICDGROUP2_API __declspec(dllexport)
#else
#define CICDGROUP2_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CICDGROUP2_API CCICDGroup2 {
public:
	CCICDGroup2(void);
	// TODO: add your methods here.
};

extern CICDGROUP2_API int nCICDGroup2;

CICDGROUP2_API int fnCICDGroup2(void);

CICDGROUP2_API int TestCase(int i);



