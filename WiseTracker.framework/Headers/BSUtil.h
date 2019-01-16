//
//  BSUtil.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TrackType.h"


@interface BSUtil : NSObject
+(NSString*)getHashString:(id)obj;
+(NSString*)getHashString_SHA256:(NSString *)clear;
+(NSString*)getDocPath:(NSString*)postfixString;
+(NSString*)getCurrentDateString;
+(NSTimeInterval)convertStringToMills:(NSString*)dateString;
+(NSTimeInterval)currentTimeMillis;
+(void)logDateString:(NSTimeInterval)timestamp;
+(NSTimeInterval)getExpireLongTimeForUniVt:(NSTimeInterval)recentVisitPtm type:(NSString*)type;
+(NSTimeInterval)getExpireLongTimeForWeeklyUSType:(NSTimeInterval)recentVisitPtm;

+(NSString*)joinStringToString:(NSArray*)values;
+(NSString*)joinIntToString:(NSArray*)value;
+(NSInteger)getCalDayDiff:(NSTimeInterval)diffDate1  diffDate2:(NSTimeInterval)diffDate2;
+(BOOL)checkMatReferrerExpire:(int)interval diffDate1:(NSTimeInterval)diffDate1  diffDate2:(NSTimeInterval)diffDate2;
+(NSInteger)getCalMinuteDiff:(int)diffDate1 diffDate2:(int)diffDate2;
+(NSString*)hardwareString;
+(NSString*)DAILY_UNIQUE;
+(NSString*)WEEKLY_UNIQUE;
+(NSString*)MONTHLY_UNIQUE;
+(int)toInt:(NSString*)str;

+(NSString*)isNullOrEmptyString:(id)obj;
+(NSString*)addTrace:(NSString*) source delimiter:(NSString*)delimiter value:(NSString*)value max:(NSInteger)max direction:(NSString*)direction;
+(NSString*)getParameter:(NSString*) du param:(NSString*)param;
+(NSString*)convertReferrerString:(NSString*) _src;
+(NSMutableDictionary*)parseReferrer:(NSString*)referrer;
@end
