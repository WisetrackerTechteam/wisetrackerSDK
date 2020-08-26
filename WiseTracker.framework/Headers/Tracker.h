//
//  Tracker.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ReferrerSender.h"
#import "BSMap.h"
#import "TrackType.h"
#import "ProfileManager.h"
#import "DocumentManager.h"
#import "BSConfig.h"
#import "SessionManager.h"
#import "BSMap.h"
#import "WisetrackerPostback.h"
#import <WebKit/WebKit.h>

@interface Tracker : NSObject<WKNavigationDelegate>

@property(nonatomic,retain)id tempObjCopy;
@property(nonatomic,retain)NSMutableDictionary* pageMap;
@property(nonatomic,retain)BSMap* currentPageMap;
@property(nonatomic,retain)ProfileManager* profiler;
@property(nonatomic,retain)DocumentManager* documentManager;
@property(nonatomic,assign)NSInteger dataLengthCounter;
@property(nonatomic,assign)NSInteger trkCounter;
@property(nonatomic,assign)long long webViewLoadTime;
@property(nonatomic,retain)BSConfig* bsConfig;
@property(nonatomic,retain)WisetrackerPostback* wisetrackerPostback;
@property(nonatomic,retain)SessionManager* sessionManager;
@property(nonatomic,retain)ReferrerSender* referrerSender;
@property(nonatomic,assign)NSTimeInterval lastSendTime;
@property(nonatomic,assign)NSInteger dataSendMode;
@property(nonatomic,retain)WKWebView* wkWebView;
@property(nonatomic,assign)BOOL flagReferrerCheckIng;
@property(nonatomic,assign)BOOL FLAG_OF_TrafficLimitExceeded;
@property(nonatomic,retain)NSMutableDictionary* pushFilterSet;
@property(nonatomic,retain)NSMutableDictionary* customPushMapData;
@property(nonatomic,retain)NSDictionary* sarInfo;
@property(nonatomic,assign)BOOL reqeustIAdDone;
@property(nonatomic) BOOL fromBackGround;
@property(nonatomic) NSTimer *playingTimer;
@property(nonatomic) BOOL lastPlayingCheck;

+ (Tracker *)sharedInstance;
-(BSMap*)startPage:(id)obj;
-(void) sendFirstData;
- (void)endPage:(id)obj;
- (void)scheduleSendMode;
- (void)scheduleSend;
- (void)initEnd:(NSDictionary *)launchOptions;
- (instancetype)init;
- (void)clearInitData;
- (Tracker *)putInitData:(NSString *)key value:(NSString *)value;
- (BOOL)sendTransaction;
- (BOOL)sendTransaction:(BOOL)isWriteToQueue;
- (BOOL)sendTransactionImmediate:(BOOL)isWriteToQueue;
- (void)sendDocument;
- (void)setGoal:(NSString *)key value:(NSInteger)value;
- (BOOL)trkGoal:(NSString *)key value:(NSInteger)value;
- (void)setAcceptPushReceived:(BOOL)value;
- (BOOL)trkAcceptPushReceived:(BOOL)value;
- (void)setGoalProduct:(NSString *)code;
- (void)setGoalProductArray:(NSArray *)code;
- (void)setGoalProductType:(NSString *)type;
- (void)setGoalProductTypeArray:(NSArray *)type;
- (void)setGoalProductCategory:(NSString *)code;
- (void)setGoalProductCategoryArray:(NSArray *)code;
- (void)setProduct:(NSString *)code;
- (void)setProduct:(NSString *)code name:(NSString *)name;
- (void)setProductType:(NSString *)type;
- (void)setProductCategory:(NSString *)code;
- (void)setProductCategory:(NSString *)code name:(NSString *)name;
- (void)setOrderNPaymentId:(NSString *)code;
- (void)setOrderProduct:(NSString *)code;
- (void)setOrderProductArray:(NSArray *)code;
- (void)setOrderProductType:(NSString *)type;
- (void)setOrderProductTypeArray:(NSArray *)type;
- (void)setOrderProductCategory:(NSString *)code;
- (void)setOrderProductCategoryArray:(NSArray *)code;
- (void)setOrderNo:(NSString *)value;
- (void)setOrderAmount:(NSInteger)value;
- (void)setOrderAmountArray:(NSArray *)value;
- (void)setOrderQuantity:(NSInteger)value;
- (void)setOrderQuantityArray:(NSArray *)value;
- (void)setContents:(NSString *)value;
- (BOOL)trkContents:(NSString *)value;
- (void)setPageIdentity:(NSString *)value;
- (BOOL)trkPageIdentity:(NSString *)value;
- (void)setMember:(NSString *)isMember;
- (void)setGender:(NSString *)gender;
- (void)setAge:(NSString *)age;
- (void)setUserAttribute:(NSString *)key attribute:(NSString *)attribute;
- (void)putSessionData:(NSString *)key value:(NSString *)value;
- (BSMap*)putSessionReferrer:(NSString*)referrer;
- (BOOL)updateDocument;
- (void)putAdMarketingParam:(NSString*)type code:(NSString*)code;
- (void)putAdMarketingParam:(NSString*)type code:(NSString*)code period:(NSNumber*)period;
- (void)putPageParam:(id)obj ParamName:(NSString *)ParamName paramValue:(id)paramValue;
- (BSMap *)builder;
- (BSMap *)builder:(id)obj;
- (void)putPageCP:(id)obj targetString:(NSString *)targetString;
- (void)putPagePI:(id)obj targetString:(NSString *)targetString;
- (void)putPagePncTp:(id)obj targetString:(NSString *)targetString;
- (void)putPagePnc:(id)obj targetString:(NSString *)targetString;
- (void)putPagePncName:(id)obj targetString:(NSString *)targetString;
- (void)putPagePng:(id)obj targetString:(NSString *)targetString;
- (void)putPagePngName:(id)obj targetString:(NSString *)targetString;
- (void)putPageMTV:(id)obj id:(NSInteger)id targetString:(NSString *)targetString;
- (void)checkWebReferrer;
- (void)checkReferrerSet:(NSDictionary *)jsonDic;
- (void)buildReferrerDicAndCheck:(NSString *)referrerString;
- (void)setNotificationToken:(NSData *)token;
- (BSMap *)getCurrentPageMap;
- (void)checkReferrerPush:(NSDictionary *)obj;
//- (void)injectTracker:(UIWebView *)webView;
//- (void)injectTracker:(UIWebView *)_webView frameId:(NSString *)_frameId;
- (void)setStartWebViewLoad;
- (void)injectTracker:(UIWebView *)_webView frameId:(NSString *)_frameId withStartEndPage:(BOOL) _withStartEndPage;
- (void)injectTracker:(NSString*) evalutionId webView:(UIWebView *)_webView frameId:(NSString *)_frameId withStartEndPage:(BOOL) _withStartEndPage;

/**- (void)webTrack:(UIWebView *)webView;***/
//- (void)injectWKTracker:(WKWebView *)_webView frameId:(NSString *)_frameId;
- (void)injectWKTracker:(WKWebView *)_webView frameId:(NSString *)_frameId withStartEndPage:(BOOL) _withStartEndPage;
- (void)injectWKTracker:(NSString*)evaluationId webView:(WKWebView *)_webView frameId:(NSString *)_frameId withStartEndPage:(BOOL) _withStartEndPage;


+ (void)applicationKey:(NSString *)_applicationKey;
+ (NSString *)appKey;
+ (void)setAppKey:(NSString *)newValue;
- (void)sendRetention:(NSDictionary *)dictionary;
- (void)analysisNotification:(NSDictionary *)dictionary;
- (Tracker *)initPushSet:(NSString *)key value:(NSString *)value;
- (void)sendRetentionRequest;
-(void)putMap:(NSMutableDictionary*)map type:(TrackType*)type;
-(NSString*)universalLinkCheck:(NSString*) url;
-(void)urlRefererCheck:(NSString*) source url :(NSURL*)url;
-(void)applyReferrerString:(NSString*) queryString;
-(void)setAfid:(NSString*)afid;
-(void)setGoalCustomMvtTag:(NSString*) key value:(NSString*)value;
-(void)setOrderCustomMvtTag:(NSString*) key value:(NSString*)value;

-(void)requestNotification:(UIApplication *)application launchOptions:(NSDictionary *)launchOptions;
-(void)checkNotification:(NSDictionary *)launchOptions;
-(void)checkTrafficLimitExeedServer:(NSString *)paramVisitNew;

-(void)setInternalEvent:(NSString*)value day:(NSInteger)day;
-(void)checkInternalEvent;
-(void)clearInternalEvent;
-(void) checkPostback:(NSString*) referrer;

-(void)extensionOfSessionTime:(NSTimeInterval)time;
-(void)setPushMessageData:(NSString*) pushNo pushTitle:(NSString*)title pushPeriod:(NSInteger)period; 

-(void)setOrderDate:(NSString*) key value:(NSString*)value;
-(void)changedToForeground;
-(NSDictionary*)getAuthorizationSdkData;
-(void)sendClickDataImmediately:(NSDictionary*) clickData;
-(void)sendGoalDataImmediately;
-(void)setFacebookReferrerData:(NSURL*)url;

// 플레잉타임 측정 API
- (void)onPlayStart:(NSInteger)interval;
- (void)onPlayStop;

// IDFA 저장
- (void)setIDFA:(NSString *)IDFAStr;

@end
