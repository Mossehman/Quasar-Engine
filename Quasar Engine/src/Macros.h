#pragma once

// Macro for exporting/importing the Quasar engine dll
// Currently only supports windows (declspec is a windows command)

#ifdef QSR_PLATFORM_WINDOWS
    #ifdef QSR_BUILD_DLL
        #define QSR_API __declspec(dllexport)   // Engine builds with this
    #else
        #define QSR_API __declspec(dllimport)   // Other projects build with this
    #endif
#else
    #define QSR_API
#endif
