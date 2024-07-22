#pragma once


#ifdef _DEBUG
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smdd_zlibstat.lib")
		#else
			#pragma comment(lib, "v14_smdd_zlibstat.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smtd_zlibstat.lib")
		#else
			#pragma comment(lib, "v14_smtd_zlibstat.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smd_zlibstat.lib")
		#else
			#pragma comment(lib, "v14_smd_zlibstat.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smt_zlibstat.lib")
		#else
			#pragma comment(lib, "v14_smt_zlibstat.lib")
		#endif
	#endif
#endif
