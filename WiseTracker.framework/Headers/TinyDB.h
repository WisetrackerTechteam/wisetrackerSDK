//
//  TinyDB.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TinyDB : NSObject

@property (nonatomic, retain) NSString * docPath;
// @property (nonatomic, retain) NSMutableDictionary * dictionary;
@property (nonatomic, retain) NSFileManager * fileManager;
@property (nonatomic, retain) NSString * dir;
@property (nonatomic, assign) BOOL flagWrite;


- (instancetype)initWithFile:(NSString *)file;
- (NSString *)getDocPath;
- (void)putDouble:(NSString *)key value:(double)value;
- (void)putInt:(NSString *)key value:(NSInteger)value;
- (void)putMutableArray:(NSString *)key value:(NSMutableArray *)value;
- (void)putString:(NSString *)key value:(NSString *)value;
- (void)putTinyDB:(NSString *)key value:(TinyDB *)value;
- (void)putLong:(NSString *)key value:(NSInteger)value;
- (void)putBool:(NSString *)key value:(BOOL)value;
- (void)putDictionary:(NSString *)key value:(NSDictionary *)value;
- (id)get:(NSString *)key;
- (NSMutableArray *)getMutableArray:(NSString *)key;
- (BOOL)has:(NSString *)key;
- (void)saveAsync;
- (void)save;
- (NSString *)jsonString;
- (NSString *)stringify:(id)obj;
- (NSString *)getSet:(id)value;
- (NSString *)getPairSet:(NSString *)key value:(id)value;
- (NSMutableDictionary*)getMutableDictionary:(NSString*)key;
- (NSString *)getString:(NSString *)key;
- (BOOL)getBool:(NSString*)key;
- (NSArray *)allKeys;
- (void)removeObjectForKey:(NSString*)key;
@end
