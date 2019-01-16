//
//  TrackType.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TrackType : NSObject

typedef enum {
    TYPE_EVENT,
    TYPE_CAMPAIGN,
    TYPE_VIEW,
    TYPE_SESSION,
    TYPE_PAGES,
    TYPE_CLICK,
    TYPE_GOAL,
    TYPE_REVENUE,
    TYPE_PUSH,
    TYPE_POSTBACK
} TrackTypeCase;


@property(nonatomic,strong) NSString* typeValue;
@property(nonatomic,assign) TrackTypeCase trackTypeCase;
+(TrackType*) TYPE_EVENT;
+(TrackType*) TYPE_CAMPAIGN;
+(TrackType*) TYPE_VIEW;
+(TrackType*) TYPE_SESSION;
+(TrackType*) TYPE_PAGES;
+(TrackType*) TYPE_CLICK;
+(TrackType*) TYPE_GOAL;
+(TrackType*) TYPE_REVENUE;
+(TrackType*) TYPE_PUSH;
+(TrackType*) TYPE_POSTBACK;
-(NSString*) toString;
-(NSString*) filePrefix;
@end
