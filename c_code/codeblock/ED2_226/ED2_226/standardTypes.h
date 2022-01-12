#ifndef _STANDARDTYPES_H_
#define _STANDARDTYPES_H_

/*****************************************************************************
*  Constant Definitions Section (#defines)
*****************************************************************************/


/*****************************************************************************
*  Type Definitions Section
*****************************************************************************/
typedef char            Int8;
typedef short           Int16;
typedef long            Int32;

typedef unsigned char   Uint8;
typedef unsigned short  Uint16;
typedef unsigned long   Uint32;

typedef float           Float32;
typedef double          Float64;

typedef Int32           Bool;

/* If using MICROSOFT C (must define MSC using /d flag during compilation) */
#ifdef MSC
typedef unsigned __int64 Uint64;
typedef __int64 Int64;
#else
typedef unsigned long long Uint64;
typedef long long Int64;
#endif

#endif // STANDARDTYPES_H_INCLUDED
