//
//  QueueFile.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QueueFile : NSObject

- (void)put:(id)obj;
- (void)add:(id)obj;
- (id)pop;
- (void)saveAsync;
- (NSInteger)count;
-(id)init:(NSString*)_docPath;

@end
