/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSTimeZone, NSString, NSArray, NSLocale;

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding> {
}

@property(copy,readonly) NSString * calendarIdentifier;
@property(copy) NSLocale * locale;
@property(copy) NSTimeZone * timeZone;
@property unsigned long long firstWeekday;
@property unsigned long long minimumDaysInFirstWeek;
@property(copy,readonly) NSArray * eraSymbols;
@property(copy,readonly) NSArray * longEraSymbols;
@property(copy,readonly) NSArray * monthSymbols;
@property(copy,readonly) NSArray * shortMonthSymbols;
@property(copy,readonly) NSArray * veryShortMonthSymbols;
@property(copy,readonly) NSArray * standaloneMonthSymbols;
@property(copy,readonly) NSArray * shortStandaloneMonthSymbols;
@property(copy,readonly) NSArray * veryShortStandaloneMonthSymbols;
@property(copy,readonly) NSArray * weekdaySymbols;
@property(copy,readonly) NSArray * shortWeekdaySymbols;
@property(copy,readonly) NSArray * veryShortWeekdaySymbols;
@property(copy,readonly) NSArray * standaloneWeekdaySymbols;
@property(copy,readonly) NSArray * shortStandaloneWeekdaySymbols;
@property(copy,readonly) NSArray * veryShortStandaloneWeekdaySymbols;
@property(copy,readonly) NSArray * quarterSymbols;
@property(copy,readonly) NSArray * shortQuarterSymbols;
@property(copy,readonly) NSArray * standaloneQuarterSymbols;
@property(copy,readonly) NSArray * shortStandaloneQuarterSymbols;
@property(copy,readonly) NSString * AMSymbol;
@property(copy,readonly) NSString * PMSymbol;

+ (id)calendarWithIdentifier:(id)arg1;
+ (id)currentCalendar;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)autoupdatingCurrentCalendar;
+ (id)overlayCalendarForCalendarIdentifier:(id)arg1 timezone:(id)arg2;
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;
+ (id)sharedAutoupdatingCurrentCalendar;
+ (id)CalGregorianGMTCalendar;
+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;
+ (id)_mapkit_gregorianCalendar;

- (id)PMSymbol;
- (id)AMSymbol;
- (id)shortStandaloneMonthSymbols;
- (id)standaloneMonthSymbols;
- (id)shortMonthSymbols;
- (id)monthSymbols;
- (id)init;
- (unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long long)arg3 :(const char *)arg4 :(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg5;
- (unsigned char)_addComponents:(double*)arg1 :(unsigned long long)arg2 :(const char *)arg3 :(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg4;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char *)arg2 :(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg3;
- (unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char *)arg2 :(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg3;
- (unsigned char)_rangeOfUnit:(unsigned long long)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4;
- (long long)_ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3;
- (struct { long long x1; long long x2; })_rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3;
- (struct { long long x1; long long x2; })_maximumRangeOfUnit:(unsigned long long)arg1;
- (struct { long long x1; long long x2; })_minimumRangeOfUnit:(unsigned long long)arg1;
- (id)shortStandaloneQuarterSymbols;
- (id)standaloneQuarterSymbols;
- (id)shortQuarterSymbols;
- (id)quarterSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)standaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortMonthSymbols;
- (id)longEraSymbols;
- (id)shortWeekdaySymbols;
- (id)weekdaySymbols;
- (id)eraSymbols;
- (id)_gregorianStartDate;
- (void)_setGregorianStartDate:(id)arg1;
- (id)_copyTimeZone;
- (id)_copyLocale;
- (bool)date:(id)arg1 matchesComponents:(id)arg2;
- (id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 toDate:(id)arg4 options:(unsigned long long)arg5;
- (id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)nextDateAfterDate:(id)arg1 matchingHour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4 options:(unsigned long long)arg5;
- (id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4;
- (bool)rangeOfWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3;
- (bool)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
- (id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)startOfDayForDate:(id)arg1;
- (id)dateWithEra:(long long)arg1 yearForWeekOfYear:(long long)arg2 weekOfYear:(long long)arg3 weekday:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;
- (id)dateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;
- (void)getHour:(out long long*)arg1 minute:(out long long*)arg2 second:(out long long*)arg3 nanosecond:(out long long*)arg4 fromDate:(id)arg5;
- (void)getEra:(out long long*)arg1 yearForWeekOfYear:(out long long*)arg2 weekOfYear:(out long long*)arg3 weekday:(out long long*)arg4 fromDate:(id)arg5;
- (void)getEra:(out long long*)arg1 year:(out long long*)arg2 month:(out long long*)arg3 day:(out long long*)arg4 fromDate:(id)arg5;
- (id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 options:(unsigned long long)arg5;
- (long long)component:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 options:(unsigned long long)arg4;
- (id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id)arg4;
- (bool)isDateInWeekend:(id)arg1;
- (bool)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maximumRangeOfUnit:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })minimumRangeOfUnit:(unsigned long long)arg1;
- (unsigned long long)minimumDaysInFirstWeek;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;
- (unsigned long long)firstWeekday;
- (void)setFirstWeekday:(unsigned long long)arg1;
- (id)timeZone;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)calendarIdentifier;
- (long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
- (bool)isDate:(id)arg1 inSameDayAsDate:(id)arg2;
- (bool)isDateInYesterday:(id)arg1;
- (bool)isDateInTomorrow:(id)arg1;
- (bool)isDateInToday:(id)arg1;
- (id)dateFromComponents:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)initWithCalendarIdentifier:(id)arg1;
- (unsigned long long)_cfTypeID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (bool)date:(id)arg1 isSameYearAsDate:(id)arg2;
- (bool)date:(id)arg1 isSameDayAsDate:(id)arg2;
- (id)_timeOnlyComponentsForDate:(id)arg1;
- (id)_dateOnlyComponentsForDate:(id)arg1;
- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;
- (bool)dateIsFirstOfYear:(id)arg1;
- (bool)dateIsFirstOfMonth:(id)arg1;
- (long long)daysInMonthContainingDate:(id)arg1;
- (long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;
- (long long)secondsInDay;
- (long long)daysInWeek;
- (long long)monthsInYearForDate:(id)arg1;
- (long long)minutesInHour;
- (long long)secondsInMinute;
- (long long)hoursInDay;
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;
- (bool)_maps_isDateInToday:(id)arg1 inTimeZone:(id)arg2;
- (id)_maps_offsetDate:(id)arg1 toTimeZone:(id)arg2;
- (bool)date:(id)arg1 isSameYearAsDate:(id)arg2;
- (bool)date:(id)arg1 isSameDayAsDate:(id)arg2;
- (id)_timeOnlyComponentsForDate:(id)arg1;
- (id)_dateOnlyComponentsForDate:(id)arg1;

@end
