//
//  WiseTrackerReachability.h
//  WiseTracker
//  Created by kunsoo kim on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//
#import <Foundation/Foundation.h>
typedef enum WiseTrackerReachabilityType :NSInteger{
    WWAN,
    WiFi,
    NotConnected
} WiseTrackerReachabilityType;

@interface WiseTrackerReachability : NSObject
+ (BOOL) isConnectedToNetwork;
+(WiseTrackerReachabilityType)isConnectedToNetworkOfType;
@end
