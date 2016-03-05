//
//  AppDelegate.m
//  TRProject
//
//  Created by jiyingxin on 16/2/4.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "AppDelegate.h"
#import "AppDelegate+System.h"
#import "heronetmanager.h"

@interface AppDelegate ()
@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [heronetmanager getHeroDetail:@"Ekko" complrtionHandler:^(id model, NSError *error) {
        
    }];
    
    //全局默认配置
    [self setupGlobalConfig];
    return YES;
}

@end
