/*
** mpoll.h - export declarations for poll funcs
**
** Copyright Fraunhofer FOKUS
**
** $Id: mlog.h,v 1.1 2004/12/22 15:13:03 luz Exp $
**
** Remarks: This is experimental code!
**
*/
#ifndef _MLOG_H
#define _MLOG_H

#include <stdarg.h>

#ifdef   __cplusplus
extern "C" {
#endif

extern int mlog_vlevel;

void errorf ( char fmt[], ... ) __attribute__ ((format (printf, 1, 2)));
void debugf ( char fmt[], ... ) __attribute__ ((format (printf, 1, 2)));
void mlogf  ( int verbosity,
              char fmt[], ... ) __attribute__ ((format (printf, 2, 3)));
int  mlog_open  ( char *logfile, char *prefix );
void mlog_close ( void );
void mlog_set_vlevel( int vlevel );

#ifdef   __cplusplus
}
#endif
#endif 