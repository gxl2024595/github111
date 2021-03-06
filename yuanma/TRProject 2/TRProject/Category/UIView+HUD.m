//
//  UIView+HUD.m
//  TRProject
//
//  Created by tarena on 16/2/26.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "UIView+HUD.h"
//超时
#define kTimeOut  30
//弹出提示时长
#define kDuration  1
@implementation UIView (HUD)
- (void)showBusyHUD{
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:self animated:YES];
    [hud hide:YES afterDelay:kTimeOut];
}
- (void)showWarning:(NSString *)warning{
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:self animated:YES];
    hud.mode = MBProgressHUDModeText;
    hud.labelText = warning;
    [hud hide:YES afterDelay:kDuration];
}
- (void)hideBusyHUD{
    [MBProgressHUD hideHUDForView:self animated:YES];
}
@end










