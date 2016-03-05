//
//  herodetailmodel.m
//  TRProject
//
//  Created by gxl on 16/2/28.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "herodetailmodel.h"

@implementation herodetailmodel
+ (NSDictionary *)replaceKeyFromPropertyName{
    return @{@"ID":@"id",@"desc":@"description"};
}

+ (NSDictionary *)objectClassInArray{
    return @{@"like" : [herodetailLikemodel class], @"hate" : [herodetailHatemodel class]};
}
@end
@implementation herodetailqmodel
  return @{@"ID":@"id",@"desc":@"description"};
@end


@implementation herodetailRmodel
  return @{@"ID":@"id",@"desc":@"description"};
@end


@implementation herodetailwmodel
  return @{@"ID":@"id",@"desc":@"description"};
@end


@implementation herodetailBmodel
  return @{@"ID":@"id",@"desc":@"description"};
@end


@implementation herodetailEmodel
  return @{@"ID":@"id",@"desc":@"description"};
@end


@implementation herodetailLikemodel
  return @{@"ID":@"id",@"desc":@"description"};
@end


@implementation herodetailHatemodel
  return @{@"ID":@"id",@"desc":@"description"};
@end


