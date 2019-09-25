//
//  BSMap.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "Tracker.h"

//@class Tracker;

@interface BSMap : NSObject

@property (nonatomic, retain) NSMutableDictionary * revenueMap;
@property (nonatomic, retain) NSMutableDictionary * goalMap;
@property (nonatomic, retain) NSMutableDictionary * pageMap;
//@property (nonatomic, retain) NSMutableDictionary * clickMap;
@property (nonatomic, retain) NSString * identity;

//@property (nonatomic) Tracker * targetTracker;

- (instancetype)init:(NSString*)_identity tracker:(id)tracker;

- (BSMap *)putRevenueData:(NSString *)key value:(id)value;

- (BSMap *)putRevenueDataArray:(NSString *)key value:(NSArray *)value;

- (BOOL)containsRevenueData:(NSString *)key;

- (BSMap *)putGoalData:(NSString *)key value:(id)value;

- (BSMap *)putGoalDataArray:(NSString *)key value:(NSArray *)value;

- (BOOL)containsGoalData:(NSString *)key;
- (BSMap *)putPageData:(NSString *)key value:(id)value;


//- (BSMap *)putClickData:(NSString *)key value:(NSString *)value;

- (id)getPageData:(NSString *)key;

- (NSString *)getPageDataString:(NSString *)key;
- (BOOL)containsPageData:(NSString *)key;
- (void)syncPageData:(NSString *)key value:(id)value;
- (void)setCustomMvtTag:(NSString *)key mvtValue:(NSString *)mvtValue;
- (void)setPageIdentity:(NSString *)value;
- (BSMap *)putSessionData:(NSString *)key value:(NSString *)value;
//- (BSMap *)putSessionReferrer:(NSString *)referrer;
- (void)putInitData:(NSString *)key value:(NSString *)value;
- (NSMutableDictionary *)getPageDataMap;
- (BSMap *)send;
- (BOOL)writeToTargetQueue;
- (void)clearPageMapData;
- (NSMutableDictionary *)getGoalMap;
- (void)clearGoalMapData;
@end
