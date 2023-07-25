#pragma once


#ifdef _DEBUG
	#ifdef _DLL
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smdd_zlibstat.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smdd_zlibstat.lib")
		#endif
	#else
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smtd_zlibstat.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smtd_zlibstat.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smd_zlibstat.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smd_zlibstat.lib")
		#endif
	#else
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smt_zlibstat.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smt_zlibstat.lib")
		#endif
	#endif
#endif
