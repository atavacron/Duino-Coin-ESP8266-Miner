#ifndef _DEBUG_LOG_H__
#define _DEBUG_LOG_H__

#define DEBUG_LOGGER  Serial
#define DEBUG_LOG_SPEED 115200

#if defined(_DEBUG) || defined(DEBUG)
# if !defined(DEBUG_DEFINED)
#  define DEBUG_DEFINED
# endif
#elif !defined(NDEBUG)
# if !defined(DEBUG_DEFINED)
#  define DEBUG_DEFINED
# endif
#endif

#ifdef DEBUG_DEFINED
# define debugInit()         DEBUG_LOGGER.begin(DEBUG_LOG_SPEED)
# define debugLogf(fmt, ...) DEBUG_LOGGER.printf(fmt, ##__VA_ARGS__)
# define debugLog(fmt)       DEBUG_LOGGER.print(fmt)
# define debugLogln(fmt)     DEBUG_LOGGER.println(fmt)
#else
# define debugInit()   
# define debugLogf(...) 
# define debugLog(fmt)
# define debugLogln(fmt)
#endif

#endif // _DEBUG_LOG_H__
