//
//  WisetrackerPostback.h
//  WiseTracker
//
//  Created by kunsookim on 2016. 3. 4..
//  Copyright © 2016년 Wisetracker. All rights reserved.
//
#import <Foundation/Foundation.h>
@interface WisetrackerPostback : NSObject

+(WisetrackerPostback*)sharedInstance;
-(void)initPostback;
-(void)removePostbackReferrer;
-(void)setPostbackReferrer:(NSString *)url;
-(void)parseUrl:(NSString *)url;
-(NSMutableDictionary*) getPostbackJosn;
@end
