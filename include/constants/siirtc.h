#ifndef GUARD_CONSTANTS_SIIRTC_H
#define GUARD_CONSTANTS_SIIRTC_H

#define SIIRTCINFO_INTFE  0x01 // frequency interrupt enable
#define SIIRTCINFO_INTME  0x02 // per-minute interrupt enable
#define SIIRTCINFO_INTAE  0x04 // alarm interrupt enable
#define SIIRTCINFO_24HOUR 0x40 // 0: 12-hour mode, 1: 24-hour mode
#define SIIRTCINFO_POWER  0x80 // power on or power failure occurred

#define HOURS_PER_DAY       24
#define MINUTES_PER_HOUR    60
#define SECONDS_PER_MINUTE  60

enum Weekday
{
    WEEKDAY_SUN = 0,
    WEEKDAY_MON = 1,
    WEEKDAY_TUE = 2,
    WEEKDAY_WED =3,
    WEEKDAY_THU =4,
    WEEKDAY_FRI = 5,
    WEEKDAY_SAT =6,
    WEEKDAY_COUNT,
};

enum Month
{
    MONTH_JAN = 1,
    MONTH_FEB,
    MONTH_MAR,
    MONTH_APR,
    MONTH_MAY,
    MONTH_JUN,
    MONTH_JUL,
    MONTH_AUG,
    MONTH_SEP,
    MONTH_OCT,
    MONTH_NOV,
    MONTH_DEC,
    MONTH_COUNT = MONTH_DEC,
};

#endif // GUARD_CONSTANTS_SIIRTC_H
