#ifndef LEVEL_H
#define LEVEL_H

// level.h header for LAB, CLASS, COLLEGE, UNIVERSITY, DISTRICT, STATE
//                for  10,   100,      1K,        10K,       1L,    1M 
//
#ifdef ANNA
#define UNIVERISITY
#endif

// maanilam
#ifdef THAMIZH
#define STATE
#endif

// naadu
#ifdef KALAM
#define COUNTRY
#endif

#ifdef LAB
// lab group level
// 10
#define LIMIT 10
#endif

#ifdef CLASS
// class level
// 100
#define LIMIT 100
#endif

#ifdef COLLEGE
// college level 
// 1K
#define LIMIT 1000
#endif

#ifdef UNIVERSITY
// university level
// 10K
#define LIMIT (10*1000)
#endif

#ifdef DISTRICT
// district level
// 1L 
#define LIMIT (100*1000)
#endif 

#ifdef STATE
// state level
// 1M = 10L
#define LIMIT (10*100*1000)
#endif

#ifdef COUNTRY
// country level
// 1B = 1000M = 1000L 
#define LIMIT (1000000000L)
#endif

#ifdef OLYMPIC
// global level
// 10B
#define LIMIT (10000000000L)
#endif

#endif // LEVEL_H
