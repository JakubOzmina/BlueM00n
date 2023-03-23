#pragma once

#ifdef BM_PLATFORM_WINDOWS
	#ifdef BM_BUILD_DLL
		#define BLUEM00N_API _declspec(dllexport)
	#else
		#define BLUEM00N_API _declspec(dllimport)
	#endif
#else
	#error BlueM00n only supports Windows.
#endif