//
//  DateFormat.h
//  AFDateHelper
//
//  Created by Dinesh Vijaykumar on 04/09/2017.
//  Copyright © 2017 Dinesh Vijaykumar. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const ISO8601DateFormatType;
extern NSString * const DotNetDateFormatType;
extern NSString * const RSSDateFormatType;
extern NSString * const AltRSSDateFormatType;
extern NSString * const CustomDateFormatType;

extern NSString * const ISOFormatYear;
extern NSString * const ISOFormatYearMonth; // 1997-07
extern NSString * const ISOFormatDate; // 1997-07-16
extern NSString * const ISOFormatDateTime; // 1997-07-16T19:20+01:00
extern NSString * const ISOFormatDateTimeSec; // 1997-07-16T19:20:30+01:00
extern NSString * const ISOFormatDateTimeMilliSec; // 1997-07-16T19:20:30.45+01:00

@interface DateFormat : NSObject

+ (instancetype) ISODateFormat: (NSString *) isoFormat;
+ (instancetype) DotNetDateFormat;
+ (instancetype) RSSDateFormat;
+ (instancetype) AltRSSDateFormat;
+ (instancetype) CustomDateFormat: (NSString *) formatString;

@property (readonly) NSString *dateFormatType;
@property (readonly) NSString *formatDetails;

@end
