//
//  SessionManager.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TinyDB.h"
#import "BSConfig.h"

@interface SessionManager : NSObject
@property (nonatomic, retain) NSString * docPath;
@property (nonatomic, retain) BSConfig * bsConfig;
@property (nonatomic, retain) NSFileManager * fileManager;
@property (nonatomic, retain) TinyDB * sessionDB;
@property (nonatomic, retain) TinyDB * sessionMap;
@property (nonatomic, retain) NSMutableArray * sessions;
@property (nonatomic, retain) NSString * LAST_VISIT_NAME;
@property (nonatomic, retain) NSString * SESSIONS;
- (NSString *)getSession:(BOOL)flagEvt;
- (void)extensionOfSessionTime:(NSTimeInterval)time;
- (void)setAfid:(NSString*)afid;
- (void)createInitSession;
- (NSString *)getSid:(BOOL)flagEvt;
- (NSString *)createSession;
- (void)updateLastSessionID:(NSString *)sessionID;
- (NSString *)getLastSessionID;
- (void)updateTrafficLimitCheckState:(BOOL)state;
- (BOOL)getLastTrafficLimitCheckState;
- (NSString *)getVisitNew:(NSString *)documentId isReadOnly:(BOOL)isReadOnly;
- (BSConfig *)getConfig;
- (NSInteger)getSlotNo:(NSString *)sid;
- (NSString *)getVtTz:(NSString *)sid;
- (void)addCsPV;
- (NSInteger)getCsPV:(NSString *)sid;
+ (SessionManager *)sharedInstance;
@end
