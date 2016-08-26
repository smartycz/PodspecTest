//
//  Mediator.h
//  Text
//
//  Created by Stone.Yu on 16/8/23.
//  Copyright © 2016年 Stone.Yu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Mediator : NSObject

+ (instancetype)sharedInstance;

// 本地组件调用入口
- (id)mediatorActionNativFetchController:(NSString *)targetName;

- (id)performTarget:(NSString *)targetName action:(NSString *)actionName withObject:(id)object;
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params;


// 远程App调用入口
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;

@end
