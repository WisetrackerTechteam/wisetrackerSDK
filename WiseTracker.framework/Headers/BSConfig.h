//
//  BSConfig.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BSConfig : NSObject<NSXMLParserDelegate>
@property (nonatomic, retain) NSString * docPath;
@property (nonatomic, assign) NSInteger reportTime;
@property (nonatomic, assign) NSTimeInterval sessionTime;
@property (nonatomic, assign) double alarmTime;
@property (nonatomic, assign) NSInteger retryTime;
@property (nonatomic, retain) NSMutableDictionary * config;
@property (nonatomic, retain) NSString * cursorElementName;
@property (nonatomic, retain) NSString * cursorType;
@property (nonatomic) NSFileManager * fileManager;
+ (BSConfig *)sharedInstance;
- (void)genUUID;
- (instancetype)init;
- (void)parseAppKey;
- (void)loadConfig;
- (void)parserDidStartDocument:(NSXMLParser *)parser;
- (void)parserDidEndDocument:(NSXMLParser *)parser;
- (void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName attributes:(NSDictionary *)attributeDict;
- (void)parser:(NSXMLParser *)parser foundCharacters:(NSString *)string;
- (void)parser:(NSXMLParser *)parser didEndElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName;
- (NSTimeInterval)getSessionTime;
- (id)getConfig:(NSString *)key;
- (NSString *)getUUID;
- (NSString *)getInstallDate;
- (NSNumber *)getInstallTimeMillis;
- (NSString *)getApVr;
- (NSString *)getOs;
- (NSString *)getMachine;
// - (NSString *)getPhone;
- (NSString *)getTelCom;
- (NSString *)getWifiTp;
- (NSString *)getSr;
- (NSString *)getCntr;
- (NSString *)getLng;
// - (double)getInch;
- (NSString *)getTz;
- (NSInteger)getMaxDataSendLength;
- (BOOL)getDebug;
- (NSString *)getAk;
- (NSInteger)getPfno;
- (NSInteger)getCusNo;
- (NSString *)getUuid;
- (NSString *)getImei;
- (NSString *)getVenId;
- (NSInteger)getSlotCount;
- (NSInteger)getReturnVisitDate;
- (NSInteger)getReferrerExpireDate;
- (NSString *)getTargetUri;
- (NSString *)getTrafficLimitExceedCheckUrl;
- (NSString *)getDeviceInformationSaveUrl;
- (NSString *)getReferrerSaveUrl;
- (NSString *)getTrackHost;
- (NSString *)getAliveCheckUri;
- (NSInteger)getReportTime;
- (NSInteger)getDataSendMode;
- (BOOL)getUseRetention;
- (NSTimeInterval)getMaxDataLifeTime;
- (NSString *)getHashKey;
- (NSString *)getIcmpType;
- (void)putPref:(NSString *)key value:(id)value;
- (id)getPrefValue:(NSString *)key;
@end
