//
//  DocumentManager.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TinyDB.h"

@interface DocumentManager : NSObject

+ (DocumentManager *)sharedInstance;
- (void)putInstallData:(NSDictionary *)map;
- (void)setGoal:(NSInteger)key value:(NSInteger)value;
- (NSString *)getLaistDocId;
- (void)putGoal;
- (void)setEvent:(NSString *)type name:(NSString *)name value:(NSString *)value;
- (void)setCampaign:(NSString *)type name:(NSString *)name value:(NSString *)value referer:(NSString *)referer;
- (void)startSession;
- (void)addCsPV;
- (NSInteger)getCsPV;
/// <ul><li><p>가장 최신의 도큐먼트를 불러온다.</p></li><li><p>없으면 새로 생성</p></li></ul>
- (void)loadDocument;
- (void)sendDocument;
- (void)nextSendDocument;
- (void)deletePath:(NSString *)path;
- (void)deleteOldestJsonFile;
- (void)removeSentDocument:(NSString *)documentID;
- (NSMutableArray *)mergePages:(NSMutableArray *)queue;
- (NSMutableArray *)getQueue:(NSString *)queueFileName documentID:(NSString *)documentID;
- (NSMutableDictionary *)getSessionConfigJson;
- (NSString *)getbunddleId;
- (TinyDB *)updateDocument;
- (TinyDB *)createDocument;
- (NSString *)getLastDocumentID;
- (void)updateUdVt;
- (void)updateLtvi;
- (NSInteger)getUniVt:(NSString *)visitNew;
-(NSMutableDictionary*) putSessionDBDefault:(NSMutableDictionary*) sessionJson;
-(NSMutableDictionary*) putSessionProfile:(NSMutableDictionary*) sessionJson;
-(NSMutableDictionary*) putAdProfile:(NSMutableDictionary*) sessionJson isInstallData:(BOOL)flagInstall;
-(long)getLtvt;
-(void)sendClickDataImmediately:(NSDictionary*) clickData;
-(void)sendGoalDataImmediately:(NSMutableDictionary*) goalData;
@end
