//
//  TinyMap.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TinyDB.h"

@interface TinyMap : NSObject

@property (nonatomic, retain) NSMutableDictionary * map;

- (TinyDB *)get:(NSString *)key;
+ (TinyMap *)sharedInstance;

@end
