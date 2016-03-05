
//
//  heronetmanager.m
//  TRProject
//
//  Created by gxl on 16/2/28.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "heronetmanager.h"


#define kherodetailpath @"http://lolbox.duowan.com/phone/apiHeroDetail.php?OSType=IOS9.1&heroName=%@&v=140"

@implementation heronetmanager

+ (id)getHeroDetail:(NSString *)enName complrtionHandler:(void (^)(id, NSError *))completionHandler{
    NSString *path = [NSString stringWithFormat:kherodetailpath,enName];
    return [self GET:path parameters:nil progress:nil completionHandler:^(id responseObj, NSError *error) {
        //对字典的数据结构进行修改，必须是可变的字典
        NSMutableDictionary *multiDic = [responseObj mutableCopy];
        //Ekko_W ->W 即 enName_W->W
        NSString *wKey = [NSString stringWithFormat:@"%@_W",enName];
        //?:三目运算符的变种，空和运算符
        //防止向字典中设置nil报错
        
        [multiDic setObject:multiDic[wKey]?:@"" forKey:@"W"];
        
        completionHandler([herodetailmodel parse:multiDic],error);
     }];


}


@end
