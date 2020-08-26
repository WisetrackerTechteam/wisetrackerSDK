//
//  ProfileManager.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProfileManager : NSObject

- (NSMutableDictionary *)getLatestReferrerInfo;
- (void)setWebReferer:(NSDictionary *)referrerSet;
- (void)setInstallRefferSet:(NSDictionary *)referrerSet;
- (void)initProfileDoc;
- (void)putSessionData:(NSString *)key value:(id)value;
- (void)putSessionBoolData:(NSString *)key value:(BOOL)value;
- (void)putSessionStringData:(NSString *)key value:(NSString *)value;
- (void)putSessionLongData:(NSString *)key value:(NSInteger)value;
- (void)putSessionIntData:(NSString *)key value:(NSInteger)value;
- (NSString *)getSessionStringData:(NSString *)key;
- (NSInteger)getSessionIntegerData:(NSString *)key;
- (NSInteger)getSessionLongData:(NSString *)key;
- (double)getSessionDoubleData:(NSString *)key;
- (void)putIsMember:(NSString *)isMember;
- (NSString *)getMbr;
- (void)setMemberLvl:(NSString *)memLvl;
- (NSString *)getMemberLvl;
- (void)setMemberCd:(NSString *)cd;
- (NSString *)getMemberCd;
- (void)putGender:(NSString *)gender;
- (NSString *)getGender;
- (void)putAge:(NSString *)age;
- (NSString *)getAge;
- (void)putUvp1:(NSString *)uvp1;
- (void)putUvp2:(NSString *)uvp2;
- (void)putUvp3:(NSString *)uvp3;
- (void)putUvp4:(NSString *)uvp4;
- (void)putUvp5:(NSString *)uvp5;
- (void)putUserId:(NSString *)userId;
- (void)putExhibitData:(NSDictionary*)dic;
- (NSString *)getUvp1;
- (NSString *)getUvp2;
- (NSString *)getUvp3;
- (NSString *)getUvp4;
- (NSString *)getUvp5;
- (NSString *)getUserId;
- (NSMutableDictionary*)getExhibitData;
- (NSInteger)getLtrvnc;
- (NSInteger)getLtrvni;
- (void)notifyLtrvnc;
- (NSInteger)getUdRvnc;
- (void)notifyUdRvnc;
- (NSString *)getFbSource;
- (NSString*)getAdvId;
- (BOOL)getAdvIdFlag;
- (BOOL)getAidChange;
- (NSString *)getUptAfv;
- (void)putFbSource:(NSString *)target;
- (void)initOrderPTime;
- (void)setInstallReferrer;
- (BOOL)hasReferrerData_MAT;
- (BOOL)updateResponse:(NSDictionary *)o;
- (BOOL)shouldSend:(BOOL)isDocumnet;
- (BOOL)isInstallReferrerSet;
+ (ProfileManager *)sharedInstance;
- (void)setAfid:(NSString*)afid;
-(void)addSessionTrace:(NSString*)value forKey:(NSString*)key;
-(void)clearSessionTrace:(NSString*)key;
-(NSString*)getSessionStringListData:(NSString*)key;
-(void)markRevenue;
-(BOOL)isMarkRevenue;
-(void)unMarkRevenue;
-(void)markInstallReferrer;

-(void)updateAdid;
- (NSString *)getKeychainUUID;
- (void)changeKeychainUUID;

@end
