//
//  BSDebugger.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BSDebugger : NSObject

+(Boolean)isDebug;
+(void)debugMode:(BOOL)flagDebug;
+(void)Log:(BOOL)flagDebug message:(NSString*)message;
+(void)adminLog:(NSString*)message;
+(void)log:(NSString*)message;
+(void)printDirectory:(NSString *)dir;
@end

