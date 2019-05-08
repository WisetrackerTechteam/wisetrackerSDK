//
//  WiseQueue.h
//  WiseTracker
//
//  Created by kunsookim on 2016. 1. 26..
//  Copyright © 2016년 Wisetracker. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface WiseQueue : NSObject

@property (nonatomic, retain) NSMutableArray * queue ;

-(void)initQueue;
-(void)offer:(NSString *)exhibitInfo;
-(NSInteger)size;
-(void)poll;
-(NSString *)peek:(NSInteger)idx;
-(NSArray*)toArray;
@end
