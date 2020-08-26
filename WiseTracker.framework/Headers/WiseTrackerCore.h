//
//  WiseTracker.h
//  WiseTracker
//
//  Created by inha jang on 2015. 4. 9..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//! Project version number for WiseTracker.
FOUNDATION_EXPORT double WiseTrackerVersionNumber;

//! Project version string for WiseTracker.
FOUNDATION_EXPORT const unsigned char WiseTrackerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <WiseTracker/PublicHeader.h>

#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#import "BSMap.h"
#import "BSConfig.h"
#import "WKTrackerViewController.h"
//#include "Tracker.h"
#import <WebKit/WebKit.h>

//for Keychain
#import "KeychainItemWrapper.h"

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif
typedef struct _NSZone NSZone;

//WiseTracker Version
#define WISETRACKER_SDK_VERSION @"21.3.23"

@interface WiseTrackerCore : NSObject
+ (UIApplication *)application;
+(void) setVisitNewSendFlag:(BOOL)val;
+(BOOL) getVisitNewSendFlag;
+(BOOL) getTrackerIsRunning;
+(void) setTrackerIsRunning:(BOOL)val;
+(BOOL) getAppOpenFlag;
+(void) setAppOpenFlag:(BOOL)val;
+(int) getFlagOfFacebookReferrer;
+(void) setFlagOfFacebookReferrer:(int)val;


+ (BOOL) getFlagAdvertisingIdHasToHash;
+ (void) setFlagAdvertisingIdHasToHash:(BOOL)newVal;
+ (BOOL) getFlagContextStatus;
+ (void) setFlagContextStatus:(BOOL)newVal;
+ (BOOL) getFlagUseImei;
+ (void) setFlagUseImei:(BOOL)newVal;

+ (BOOL) getWiseTrackerInitFlag;
+ (BOOL) getFlagSdkLockState;
+ (void) setFlagSdkLockState:(BOOL)flag;
+ (void) iamLocked;
//+ (void)setApplication:(UIApplication *)newValue WithOptions:(NSDictionary *)launchOptions;
+ (void)setApplication:(UIApplication *)newValue;
+ (void)setApplicationAllinOne:(NSString *)appKey application:(UIApplication *)application WithOptions:(NSDictionary *)launchOptions;
+ (void)putInitData:(NSString *)key value:(NSString *)value;
//+ (void)checkReferrer:(NSString *)referrer;
+ (void)checkReferrerSet:(NSDictionary *)jsonDic;
+ (void)initEnd;
+ (void)initEnd:(NSDictionary *)launchOptions;
+ (BOOL)sendTransaction;
+ (BOOL)sendTransactionImmediate;
+ (BSMap *)builder:(id)obj;


+ (BSMap *)startPage:(id)obj;
+ (void)endPage:(id)obj;
+ (BSMap*)endStartPage:(id)obj;
/// <ul><li><blockquote><ul><li><p>환경변수 설정 함수  ( 고급 )</p></li><li></li></ul></blockquote></li></ul>
+ (BOOL)containsGoalData:(NSString *)key;
+ (BSMap *)putGoalData:(NSString *)key value:(id)value;
+ (BSMap *)putGoalDataArray:(NSString *)key value:(NSArray *)value;
+ (BOOL)containsPageData:(NSString *)key;
+ (BSMap *)putPageData:(NSString *)key value:(id)value;
+ (id)getPageData:(NSString *)key;
+ (NSString *)getPageDataString:(NSString *)key;
+ (BOOL)containsRevenueData:(NSString *)key;
+ (BSMap *)putRevenueData:(NSString *)key value:(id)value;
+ (BSMap *)putRevenueDataArray:(NSString *)key value:(id)value;
+ (void)putSessionData:(NSString *)key value:(NSString *)value;
+ (BSMap *)putSessionReferrer:(NSString *)referrer;
+ (void) setAdChannel:(NSString*)code;
+ (void) setAdChannel:(NSString*)code period:(NSNumber*)period;
+ (void) setAdCampaign:(NSString*)code;
+ (void) setAdCampaign:(NSString*)code period:(NSNumber*)period;
+ (void) setAdKeyword:(NSString*)code;
+ (void) setAdKeyword:(NSString*)code period:(NSNumber*)period;
+ (void) setAdType:(NSString*)code;
+ (void) setAdType:(NSString*)code period:(NSNumber*)period;
+ (void)setGoal:(NSString *)key value:(NSNumber*)value;
+ (void)setAcceptPushReceived:(BOOL)value;
+ (void)setGoalPageIdentity:(NSString*)value;
+ (void)setGoalProduct:(NSString *)code;
+ (void)setGoalProductArray:(NSArray *)code;
+ (void)setGoalContents:(NSString *)value;
+ (void)setGoalContentsArray:(NSArray *)value;
+ (void)setGoalProductType:(NSString *)type;
+ (void)setGoalProductTypeArray:(NSArray *)type;
+ (void)setGoalProductCategory:(NSString *)code;
+ (void)setGoalProductCategoryArray:(NSArray *)code;
+ (void)setExhibit:(NSString *)exhibit;
+ (void)setProduct:(NSString *)code;
+ (void)setProduct:(NSString *)code name:(NSString *)name;
+ (void)setProductType:(NSString *)type;
+ (void)setProductCategory:(NSString *)code;
+ (void)setProductCategory:(NSString *)code name:(NSString *)name;
+ (void)setOrderNPaymentId:(NSString*)code;
+ (NSString*)createNPaySequenceKey;
+ (void)setOrderProduct:(NSString *)code;
+ (void)setOrderProductArray:(NSArray *)code;
+ (void)setOrderContents:(NSString *)value;
+ (void)setOrderContentsArray:(NSArray *)value;
+ (void)setOrderProductType:(NSString *)type;
+ (void)setOrderProductTypeArray:(NSArray *)type;
+ (void)setOrderProductCategory:(NSString *)code;
+ (void)setOrderProductCategoryArray:(NSArray *)code;
+ (void)setOrderNo:(NSString *)value;
//+ (void)setOrderAmount:(NSInteger)value;
+ (void)setOrderAmount:(NSNumber*)value;
+ (void)setOrderAmountArray:(NSArray *)value;
+ (void)setOrderConversionData:(NSNumber*)value key:(NSString*)key;
+ (void)setOrderConversionData:(NSInteger)value key:(NSString*)key byId:(NSString*)pageId;
+ (void)setOrderQuantity:(NSInteger)value;
+ (void)setOrderQuantityArray:(NSArray *)value;
+ (void)setContents:(NSString *)value;
+ (BOOL)trkContents:(NSString *)value;
+ (void)setPageIdentity:(NSString *)value;
+ (void)setPageUrl:(NSString*)url;
+ (void)setStartWebViewLoad;
+ (void)setPageLoadTime:(long)time;
+ (BOOL)trkPageIdentity:(NSString *)value;
+ (void)setSearchKeyword:(NSString *)keyword;
+ (void)setGoalSearchKeyword:(NSString*)keyword;
+ (void)setOrderSearchKeyword:(NSString*)keyword;
+ (void)setOrderSearchKeywordArray:(NSArray*) keyword;
+ (void)setSearchKeywordResult:(NSInteger)count;
+ (void)setSearchKeywordCategory:(NSString *)category;
+ (void)setMember:(NSString *)isMember;
+ (void)setGender:(NSString *)gender;
+ (void)setAge:(NSString *)age;
+ (void)setUserAttribute:(NSString *)key attribute:(NSString *)attribute;
+ (void)setCustomMvtTag:(NSString *)key value:(NSString *)mvtValue;
+ (void)setGoalCustomMvtTag:(NSString*) key value:(NSString*)value;
+ (void)setOrderCustomMvtTag:(NSString*) key value:(NSString*)value;
+ (void)setOrderCustomMvtTagArray:(NSString*) key value:(NSArray*)mvtvalue;


/* by ID start*/

+ (BOOL)containsGoalData:(NSString *)key byId:(NSString*)pageId;
+ (BSMap *)putGoalData:(NSString *)key value:(id)value byId:(NSString*)pageId;
+ (BSMap *)putGoalDataArray:(NSString *)key value:(NSArray *)value byId:(NSString*)pageId;
+ (BOOL)containsPageData:(NSString *)key byId:(NSString*)pageId;
+ (BSMap *)putPageData:(NSString *)key value:(id)value byId:(NSString*)pageId;
+ (id)getPageData:(NSString *)key byId:(NSString*)pageId;
+ (NSString *)getPageDataString:(NSString *)key byId:(NSString*)pageId;
+ (BOOL)containsRevenueData:(NSString *)key byId:(NSString*)pageId;
+ (BSMap *)putRevenueData:(NSString *)key value:(id)value byId:(NSString*)pageId;
+ (BSMap *)putRevenueDataArray:(NSString *)key value:(id)value byId:(NSString*)pageId;
+ (void)setGoal:(NSString *)key value:(NSNumber*)value byId:(NSString*)pageId;
+ (void)setAcceptPushReceived:(BOOL)value byId:(NSString*)pageId;
+ (void)setGoalPageIdentity:(NSString *)value byId:(NSString*)pageId;
+ (void)setGoalProduct:(NSString *)code byId:(NSString*)pageId;
+ (void)setGoalProductArray:(NSArray *)code byId:(NSString*)pageId;
+ (void)setGoalContents:(NSString *)value byId:(NSString*)pageId;
+ (void)setGoalContentsArray:(NSArray *)value byId:(NSString*)pageId;
+ (void)setGoalProductType:(NSString *)type byId:(NSString*)pageId;
+ (void)setGoalProductTypeArray:(NSArray *)type byId:(NSString*)pageId;
+ (void)setGoalProductCategory:(NSString *)code byId:(NSString*)pageId;
+ (void)setGoalProductCategoryArray:(NSArray *)code byId:(NSString*)pageId;
+ (void)setProduct:(NSString *)code byId:(NSString*)pageId;
+ (void)setProduct:(NSString *)code name:(NSString *)name byId:(NSString*)pageId;
+ (void)setProductType:(NSString *)type byId:(NSString*)pageId;
+ (void)setProductCategory:(NSString *)code byId:(NSString*)pageId;
+ (void)setProductCategory:(NSString *)code name:(NSString *)name byId:(NSString*)pageId;
+ (void)setOrderNPaymentId:(NSString *)code byId:(NSString*)pageId;
+ (void)setOrderProduct:(NSString *)code byId:(NSString*)pageId;
+ (void)setOrderProductArray:(NSArray *)code byId:(NSString*)pageId;
+ (void)setOrderContents:(NSString *)value byId:(NSString*)pageId;
+ (void)setOrderContentsArray:(NSArray *)value byId:(NSString*)pageId;
+ (void)setOrderProductType:(NSString *)type byId:(NSString*)pageId;
+ (void)setOrderProductTypeArray:(NSArray *)type byId:(NSString*)pageId;
+ (void)setOrderProductCategory:(NSString *)code byId:(NSString*)pageId;
+ (void)setOrderProductCategoryArray:(NSArray *)code byId:(NSString*)pageId;
+ (void)setOrderNo:(NSString *)value byId:(NSString*)pageId;
+ (void)setOrderAmount:(NSInteger)value byId:(NSString*)pageId;
+ (void)setOrderAmountArray:(NSArray *)value byId:(NSString*)pageId;
+ (void)setOrderConversionDataArray:(NSArray*) value key:(NSString*)key;
+ (void)setOrderConversionDataArray:(NSArray *)value key:(NSString*)key byId:(NSString*)pageId;
+ (void)setOrderQuantity:(NSInteger)value byId:(NSString*)pageId;
+ (void)setOrderQuantityArray:(NSArray *)value byId:(NSString*)pageId;
+ (void)setContents:(NSString *)value byId:(NSString*)pageId;
+ (BOOL)trkContents:(NSString *)value byId:(NSString*)pageId;
+ (void)setPageIdentity:(NSString *)value byId:(NSString*)pageId;
+ (BOOL)trkPageIdentity:(NSString *)value byId:(NSString*)pageId;
+ (void)setSearchKeyword:(NSString *)keyword byId:(NSString*)pageId;
+ (void)setSearchKeywordResult:(NSInteger)count byId:(NSString*)pageId;
+ (void)setSearchKeywordCategory:(NSString *)category byId:(NSString*)pageId;
+ (void)setCustomMvtTag:(NSString *)key value:(NSString *)mvtValue byId:(NSString*)pageId;
+(void)setGoalCustomMvtTag:(NSString*) key value:(NSString*)value byId:(NSString*)pageId;
+(void)setOrderCustomMvtTag:(NSString*) key value:(NSString*)value byId:(NSString*)pageId;

+(void)useIkwdWithConversion:(NSString*)target;
+(void)useMvt1WithConversion:(NSString*)target;
+(void)useMvt2WithConversion:(NSString*)target;
+(void)useMvt3WithConversion:(NSString*)target;

/* by id end*/

+ (NSString *)PRODUCT_SUB_TYPE1;
+ (NSString *)PRODUCT_SUB_TYPE2;
+ (NSString *)PRODUCT_SUB_TYPE3;
+ (NSString *)PRODUCT_SUB_TYPE4;
+ (NSString *)PRODUCT_SUB_TYPE5;
+ (NSString *)PRODUCT_SUB_TYPE6;
+ (NSString *)PRODUCT_SUB_TYPE7;
+ (NSString *)PRODUCT_SUB_TYPE8;
+ (NSString *)PRODUCT_SUB_TYPE9;
+ (NSString *)MEMBER;
+ (NSString *)MEMBER_LEVEL;
+ (NSString *)MEMBER_CODE;
+ (NSString *)NON_MEMBER;
+ (NSString *)GENDER_MALE;
+ (NSString *)GENDER_FEMALE;
+ (NSString *)GENDER_ETC;
+ (NSString *)AGE_0_TO_9;
+ (NSString *)AGE_10_TO_19;
+ (NSString *)AGE_20_TO_29;
+ (NSString *)AGE_30_TO_39;
+ (NSString *)AGE_40_TO_49;
+ (NSString *)AGE_50_TO_59;
+ (NSString *)AGE_60_OVER;
+ (NSString *)GOAL_1;
+ (NSString *)GOAL_2;
+ (NSString *)GOAL_3;
+ (NSString *)GOAL_4;
+ (NSString *)GOAL_5;
+ (NSString *)GOAL_6;
+ (NSString *)GOAL_7;
+ (NSString *)GOAL_8;
+ (NSString *)GOAL_9;
+ (NSString *)GOAL_10;
+ (NSString *)GOAL_APP_INSTALL;

+ (NSString *) CUSTOM_MVT_TAG_1;
+ (NSString *) CUSTOM_MVT_TAG_2;
+ (NSString *) CUSTOM_MVT_TAG_3;

+ (NSString *) USER_ATTRIBUTE_1;
+ (NSString *) USER_ATTRIBUTE_2;
+ (NSString *) USER_ATTRIBUTE_3;
+ (NSString *) USER_ATTRIBUTE_4;
+ (NSString *) USER_ATTRIBUTE_5;
+ (NSString *) USER_ATTRIBUTE_6;
+ (NSString *) USER_ATTRIBUTE_7;
+ (NSString *) USER_ID;

+ (void)setNotificationToken:(NSData *)token;
+ (void)analysisNotificationWithOptions:(NSDictionary*)dictionary;
+ (void)analysisNotification:(NSDictionary *)dictionary;

+ (void)checkWebReferrer;
+ (NSString*)universalLinkCheck:(NSString*) url;
+ (void)urlRefererCheck:(NSString *)source url:(NSURL *)url;
+ (void)checkReferrerPush:(NSDictionary *)obj;


+ (void)addWiseTrackerHandler:(WKUserContentController*)controller;





    
+ (void)applicationKey:(NSString *)appKey;
+ (void)sendRetention:(NSDictionary *)dictionary;

+ (id)initPushSet:(NSString *)key value:(NSString *)value;
- (instancetype)init;
+ (void)setAfid:(NSString*)afid;

+(UIBackgroundTaskIdentifier)beginBackgroundUpdateTask;

+(void)endBackgroundUpdateTask:(UIBackgroundTaskIdentifier)taskID;
/***+(void)webTrack:(UIWebView*)webView;***/

+(void)requestNotification:(UIApplication *)application launchOptions:(NSDictionary *)launchOptions;
+(void) checkNotification:(NSDictionary *)launchOptions;
+(void)debugMode:(BOOL)flagDebug;
+(void)initSessionData:(NSString*)key;
+(void)initSessionData:(NSString*)key value:(NSString*)value;

+(void)setInternalEvent:(NSString*)value;
+(void)setInternalEventWithTime:(NSString*)value day:(NSInteger)day;
+(void)extensionOfSessionTime:(NSTimeInterval)time;


+(void)setPushMessageData:(NSString*)pushNo pushTitle:(NSString*)title;
+(void)setPushMessageData:(NSString*)pushNo pushTitle:(NSString*)title period:(NSInteger)period;

+(void)setPushMessageData:(NSString *)pushNo pushTitle:(NSString *)title application:(UIApplication *)application;
+(void)setPushMessageData:(NSString *)pushNo pushTitle:(NSString *)title period:(NSInteger)period application:(UIApplication *)application;

// for UIWebView
+ (void)injectTracker:(UIWebView *)webView;
+ (void)reInjectTracker:(NSString*)evaluationId webView:(UIWebView*)webView;

+ (void)injectTracker:(UIWebView*)webView frameId:(NSString *)_frameId;
+ (void)reInjectTracker:(NSString*)evaluationId webView:(UIWebView*)_webView frameId:(NSString *)_frameId;

+ (void)injectTrackerWithOutStartEndPage:(UIWebView*)webView;
+ (void)reInjectTrackerWithOutStartEndPage:(NSString*)evaluationId webView:(UIWebView*)_webView;

+ (void)injectTrackerWithOutStartEndPage:(UIWebView*)webView frameId:(NSString *)_frameId;
+ (void)reInjectTrackerWithOutStartEndPage:(NSString*)evaluationId webView:(UIWebView*)_webView frameId:(NSString *)_frameId;

// for WKWebView
+ (void)injectWKTracker:(WKWebView*)webView;
+ (void)reInjectWKTracker:(NSString*)evaluationId webView:(WKWebView*)_webView;

+ (void)injectWKTracker:(WKWebView*)webView frameId:(NSString *)_frameId;
+ (void)reInjectWKTracker:(NSString*)evaluationId webView:(WKWebView*)_webView frameId:(NSString *)_frameId;

+ (void)injectWKTrackerWithOutStartEndPage:(WKWebView*)webView;
+ (void)reInjectWKTrackerWithOutStartEndPage:(NSString*)evaluationId webView:(WKWebView*)_webView;

+ (void)injectWKTrackerWithOutStartEndPage:(WKWebView*)webView frameId:(NSString *)_frameId;
+ (void)reInjectWKTrackerWithOutStartEndPage:(NSString*)evaluationId webView:(WKWebView*)_webView frameId:(NSString *)_frameId;





/**
 * KT OllehTv payment type function
 **/
+(void)setPaymentTypeForOllehTv:(NSString*)mCd sCd:(NSString*)sCd;

+(void)fireLocalNotification;
+(NSString *)currentState;


+(void)changedToForeground;
+(void)changedToBackground;
+(void)updateAdid;
+(NSDictionary*)getAuthorizationSdkData;
+(void)setOrderDate:(NSString*)orderDate;
+(void)setOrderDateArray:(NSString*)orderDate itemCount:(NSInteger)itemCount;

+(void) sendClickData:(NSString*)eventCode eventName:(NSString *)eventName;
+(void) sendGoalData;
+(void)setFacebookReferrerData:(NSURL*)url;


/**
 * pncSubTp2~pncSubTp5 Api
 **/

+ (void)setGoalProductType2:(NSString *)type;
+ (void)setGoalProductTypeArray2:(NSArray *)type;
+ (void)setProductType2:(NSString *)type;
+ (void)setOrderProductType2:(NSString *)type;
+ (void)setOrderProductTypeArray2:(NSArray *)type;

+ (void)setGoalProductType3:(NSString *)type;
+ (void)setGoalProductTypeArray3:(NSArray *)type;
+ (void)setProductType3:(NSString *)type;
+ (void)setOrderProductType3:(NSString *)type;
+ (void)setOrderProductTypeArray3:(NSArray *)type;

+ (void)setGoalProductType4:(NSString *)type;
+ (void)setGoalProductTypeArray4:(NSArray *)type;
+ (void)setProductType4:(NSString *)type;
+ (void)setOrderProductType4:(NSString *)type;
+ (void)setOrderProductTypeArray4:(NSArray *)type;

+ (void)setGoalProductType5:(NSString *)type;
+ (void)setGoalProductTypeArray5:(NSArray *)type;
+ (void)setProductType5:(NSString *)type;
+ (void)setOrderProductType5:(NSString *)type;
+ (void)setOrderProductTypeArray5:(NSArray *)type;

// 플레잉타임 측정 API
+ (void)onPlayStart:(NSInteger)interval;
+ (void)onPlayStop;

// IDFA 세팅
+ (void)setIDFA:(NSString *)IDFAStr;
@end
