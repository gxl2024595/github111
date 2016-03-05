//
//  heronetmanager.h
//  TRProject
//
//  Created by gxl on 16/2/28.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "herodetailmodel.h"

@interface heronetmanager : NSObject


+ (id)getHeroDetail:(NSString *)enName complrtionHandler:kCompetionHandlerBlock;
@end
