//
//  herodetailmodel.h
//  TRProject
//
//  Created by gxl on 16/2/28.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

@class herodetailqmodel,herodetailRmodel,herodetailwmodel,herodetailBmodel,herodetailEmodel,herodetailLikemodel,herodetailHatemodel;
@interface herodetailmodel : NSObject


@property (nonatomic, copy) NSString *ratingAttack;
//w是找返回字典中的key是w的值，进行解析；
@property (nonatomic, strong) herodetailwmodel *W;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *healthLevel;

@property (nonatomic, strong) herodetailqmodel *Q;

@property (nonatomic, copy) NSString *quoteAuthor;

@property (nonatomic, copy) NSString *criticalChanceLevel;

@property (nonatomic, copy) NSString *splashPath;

@property (nonatomic, copy) NSString *manaLevel;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, copy) NSString *manaRegenBase;

@property (nonatomic, copy) NSString *attackLevel;

@property (nonatomic, copy) NSString *ratingDifficulty;

@property (nonatomic, strong) NSArray<herodetailHatemodel *> *hate;

@property (nonatomic, strong) herodetailEmodel *E;

@property (nonatomic, copy) NSString *healthRegenBase;

@property (nonatomic, copy) NSString *iconPath;

@property (nonatomic, copy) NSString *magicResistLevel;

@property (nonatomic, copy) NSString *healthBase;

@property (nonatomic, copy) NSString *selectSoundPath;

@property (nonatomic, strong) NSArray<herodetailLikemodel *> *like;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *armorLevel;

@property (nonatomic, copy) NSString *manaRegenLevel;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *price;

@property (nonatomic, copy) NSString *danceVideoPath;

@property (nonatomic, copy) NSString *tags;

@property (nonatomic, copy) NSString *attackBase;

@property (nonatomic, copy) NSString *portraitPath;

@property (nonatomic, copy) NSString *armorBase;

@property (nonatomic, copy) NSString *quote;

@property (nonatomic, copy) NSString *manaBase;

@property (nonatomic, copy) NSString *opponentTips;

@property (nonatomic, copy) NSString *criticalChanceBase;

@property (nonatomic, copy) NSString *ratingDefense;

@property (nonatomic, strong) herodetailBmodel *B;

@property (nonatomic, copy) NSString *tips;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *healthRegenLevel;

@property (nonatomic, copy) NSString *ratingMagic;

@property (nonatomic, strong) herodetailRmodel *R;

@property (nonatomic, copy) NSString *moveSpeed;

@property (nonatomic, copy) NSString *magicResistBase;

@property (nonatomic, copy) NSString *displayName;

@end
@interface herodetailqmodel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, copy) NSString *name;

@end

@interface herodetailRmodel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, copy) NSString *name;

@end

@interface herodetailwmodel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *desc;

@property (nonatomic, copy) NSString *name;

@end

@interface herodetailBmodel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *desc;

@property (nonatomic, copy) NSString *name;

@end

@interface herodetailEmodel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *desc;

@property (nonatomic, copy) NSString *name;

@end

@interface herodetailLikemodel : NSObject

@property (nonatomic, copy) NSString *partner;

@property (nonatomic, copy) NSString *des;

@end

@interface herodetailHatemodel : NSObject

@property (nonatomic, copy) NSString *partner;

@property (nonatomic, copy) NSString *des;

@end

