//
//  WebTracker.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface WebTracker : NSObject
+ (WebTracker *)sharedInstance;
- (void)injectWebTracker:(UIWebView *)webView;
- (instancetype)init;
@end
