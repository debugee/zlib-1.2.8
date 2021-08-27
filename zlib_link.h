#pragma once

#ifdef _DEBUG
    #pragma comment(lib, "zlibstat_mtd.lib")
#else
    #pragma comment(lib, "zlibstat_mt.lib")
#endif