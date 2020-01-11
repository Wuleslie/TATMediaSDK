//
//  TATMediaCenter+BetaTest.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/1/9.
//  Copyright © 2020 tuia. All rights reserved.
//

#import "TATMediaCenter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TATMediaCenter(BetaTest)

//+ (void)setLaunchWaitDuration:(float)duration;

+ (void)fetchDisplayFlag:(void(^)(BOOL flag))completion;

+ (BOOL)shouldShow;

// TODO:Test only
+ (void)testSDKCrashBadAccess;
+ (void)testSDKCrashNilObject;

@end

NS_ASSUME_NONNULL_END
