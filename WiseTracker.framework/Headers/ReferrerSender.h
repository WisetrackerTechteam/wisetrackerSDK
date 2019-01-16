//
//  ReferrerSender.h
//  WiseTracker
//
//  Created by kunsookim on 2016. 5. 25..
//  Copyright © 2016년 Wisetracker. All rights reserved.
//
#import <Foundation/Foundation.h>
@interface ReferrerSender : NSObject

+(ReferrerSender *)sharedInstance;
-(void)saveReferrerToServer:(NSString*) referrerString action:(NSString*) action deviceId:(NSString*) deviceId advertisingId:(NSString*) advertisingId ltvt:(NSNumber*) ltvt pfno:(NSNumber*) pfno;
@end