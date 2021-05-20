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
- (void)putUvp6:(NSString *)uvp6;
- (void)putUvp7:(NSString *)uvp7;
- (void)putUvp8:(NSString *)uvp8;
- (void)putUvp9:(NSString *)uvp9;
- (void)putUvp10:(NSString *)uvp10;
- (void)putUvp11:(NSString *)uvp11;
- (void)putUvp12:(NSString *)uvp12;
- (void)putUvp13:(NSString *)uvp13;
- (void)putUvp14:(NSString *)uvp14;
- (void)putUvp15:(NSString *)uvp15;
- (void)putUvp16:(NSString *)uvp16;
- (void)putUvp17:(NSString *)uvp17;
- (void)putUvp18:(NSString *)uvp18;
- (void)putUvp19:(NSString *)uvp19;
- (void)putUvp20:(NSString *)uvp20;
- (void)putUvp21:(NSString *)uvp21;
- (void)putUvp22:(NSString *)uvp22;
- (void)putUvp23:(NSString *)uvp23;
- (void)putUvp24:(NSString *)uvp24;
- (void)putUvp25:(NSString *)uvp25;
- (void)putUvp26:(NSString *)uvp26;
- (void)putUvp27:(NSString *)uvp27;
- (void)putUvp28:(NSString *)uvp28;
- (void)putUvp29:(NSString *)uvp29;
- (void)putUvp30:(NSString *)uvp30;
- (void)putUvp31:(NSString *)uvp31;
- (void)putUvp32:(NSString *)uvp32;
- (void)putUvp33:(NSString *)uvp33;
- (void)putUvp34:(NSString *)uvp34;
- (void)putUvp35:(NSString *)uvp35;
- (void)putUvp36:(NSString *)uvp36;
- (void)putUvp37:(NSString *)uvp37;
- (void)putUvp38:(NSString *)uvp38;
- (void)putUvp39:(NSString *)uvp39;
- (void)putUvp40:(NSString *)uvp40;
- (void)putUvp41:(NSString *)uvp41;
- (void)putUvp42:(NSString *)uvp42;
- (void)putUvp43:(NSString *)uvp43;
- (void)putUvp44:(NSString *)uvp44;
- (void)putUvp45:(NSString *)uvp45;
- (void)putUvp46:(NSString *)uvp46;
- (void)putUvp47:(NSString *)uvp47;
- (void)putUvp48:(NSString *)uvp48;
- (void)putUvp49:(NSString *)uvp49;
- (void)putUvp50:(NSString *)uvp50;

- (void)putServiceLang:(NSString *)service_lang;

- (void)putUserId:(NSString *)userId;
- (void)putExhibitData:(NSDictionary*)dic;
- (NSString *)getUvp1;
- (NSString *)getUvp2;
- (NSString *)getUvp3;
- (NSString *)getUvp4;
- (NSString *)getUvp5;
- (NSString *)getUvp6;
- (NSString *)getUvp7;
- (NSString *)getUvp8;
- (NSString *)getUvp9;
- (NSString *)getUvp10;
- (NSString *)getUvp11;
- (NSString *)getUvp12;
- (NSString *)getUvp13;
- (NSString *)getUvp14;
- (NSString *)getUvp15;
- (NSString *)getUvp16;
- (NSString *)getUvp17;
- (NSString *)getUvp18;
- (NSString *)getUvp19;
- (NSString *)getUvp20;
- (NSString *)getUvp21;
- (NSString *)getUvp22;
- (NSString *)getUvp23;
- (NSString *)getUvp24;
- (NSString *)getUvp25;
- (NSString *)getUvp26;
- (NSString *)getUvp27;
- (NSString *)getUvp28;
- (NSString *)getUvp29;
- (NSString *)getUvp30;
- (NSString *)getUvp31;
- (NSString *)getUvp32;
- (NSString *)getUvp33;
- (NSString *)getUvp34;
- (NSString *)getUvp35;
- (NSString *)getUvp36;
- (NSString *)getUvp37;
- (NSString *)getUvp38;
- (NSString *)getUvp39;
- (NSString *)getUvp40;
- (NSString *)getUvp41;
- (NSString *)getUvp42;
- (NSString *)getUvp43;
- (NSString *)getUvp44;
- (NSString *)getUvp45;
- (NSString *)getUvp46;
- (NSString *)getUvp47;
- (NSString *)getUvp48;
- (NSString *)getUvp49;
- (NSString *)getUvp50;

- (NSString *)getServiceLang;

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

-(void)updateAdidWithATT;;
@end
