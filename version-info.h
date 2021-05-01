#ifndef _VERSION_INFO_H__ 
#define _VERSION_INFO_H__ 
 
#define MAJOR_VERSION  2021 
#define MINOR_VERSION  5 
#define GIT_REVISION    
#define BUILD_NUMBER   11 
 
#define VersionInfo()  String(MAJOR_VERSION) + "." + \ 
                       String(MINOR_VERSION) + "." + \ 
                       String(BUILD_NUMBER)  
 
#endif // _VERSION_INFO_H__ 
