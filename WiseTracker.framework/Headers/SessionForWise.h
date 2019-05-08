//
//  SessionForWise.h
//  WiseTracker
//
//  Created by kunsookim on 2016. 1. 26..
//  Copyright © 2016년 Wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TinyDB.h"

@interface SessionForWise : NSObject

+(SessionForWise*)sharedInstance;
-(void)initSFW;
-(void)noteExhibit:(NSString *)pnc exhibit:(NSString *)exhibit;
-(NSArray *)getExhibit:(NSArray *)pncList;
//세션 초기화시, 초기값 설정
-(void)applySessionData;
-(void)putInitSessionData:(NSString*) key value:(NSString*) value;
-(NSDictionary*)getSessionInitData;
@end


