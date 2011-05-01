#ifndef __TIMER_H__
#define __TIMER_H__


#ifdef __cplusplus
#ifndef WIN32
#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif
#include <inttypes.h>
#include <sys/time.h>
#endif
#include <sys/types.h>
#include <stdio.h>
#include <string>

class aftimer {
    bool used;				// was this timer used?
    struct timeval t0;
    bool running;
    long total_sec;
    long total_usec;
    double lap_time_;			// time from when we last did a "stop"
public:
    aftimer();
    time_t tstart();
    void start();
    void stop();
    double elapsed_seconds();		//
    double lap_time();
    double eta(double fraction_done);	// calculate ETA in seconds, given fraction
    std::string hms(long t);	// turn a number of seconds into h:m:s
    std::string elapsed_text();		/* how long we have been running */
    std::string eta_text(double fraction_done);
};

inline aftimer::aftimer()
{
    running    = false;
    total_sec  = 0;
    total_usec = 0;
    lap_time_  = 0;
}


inline time_t aftimer::tstart()
{
    return t0.tv_sec;
}

inline void timestamp(struct timeval *t)
{
#ifdef WIN32
    t->tv_sec = time(0);
    t->tv_usec = 0;			/* need to fix */
#else
    gettimeofday(t,NULL);
#endif    
}

inline void aftimer::start()
{
    timestamp(&t0);
    running = 1;
}

inline void aftimer::stop(){
    if(running){
	struct timeval t;
	timestamp(&t);
	total_sec  += t.tv_sec - t0.tv_sec;
	total_usec += t.tv_usec - t0.tv_usec;
	lap_time_   = (double)(t.tv_sec - t0.tv_sec)  + (double)(t.tv_usec - t0.tv_usec)/1000000.0;
	running = false;
    }
}

inline double aftimer::lap_time()
{
    return lap_time_;
}

inline double aftimer::elapsed_seconds()
{
    double ret = (double)total_sec + (double)total_usec/1000000.0;
    if(running){
	struct timeval t;
	timestamp(&t);
	ret += t.tv_sec - t0.tv_sec;
	ret += (t.tv_usec - t0.tv_usec) / 1000000.0;
    }
    return ret;
}

inline std::string aftimer::hms(long t)
{
    char   buf[64];
    int    days = t / (60*60*24);
    
    t = t % (60*60*24);			/* what's left */

    int    h = t / 3600;
    int    m = (t / 60) % 60;
    int    s = t % 60;
    buf[0] = 0;
    switch(days){
    case 0:
	snprintf(buf,sizeof(buf),"%2d:%02d:%02d",h,m,s);
	break;
    case 1:
	snprintf(buf,sizeof(buf),"%d day, %2d:%02d:%02d",days,h,m,s);
	break;
    default:
	snprintf(buf,sizeof(buf),"%d days %2d:%02d:%02d",days,h,m,s);
    }
    return std::string(buf);
}

inline std::string aftimer::elapsed_text()
{
    return hms((int)elapsed_seconds());
}

inline double aftimer::eta(double fraction_done)
{
    double t = elapsed_seconds();
    if(t==0) return -1;			// can't figure it out
    if(fraction_done==0) return -1;	// can't figure it out
    return (t * 1.0/fraction_done - t);
}

inline std::string aftimer::eta_text(double fraction_done)
{
    double e = eta(fraction_done);
    if(e<0) return std::string("n/a");		// can't figure it out
    return hms((long)e);
}

#endif

#endif
